##
## EPITECH PROJECT, 2024
## main
## File description:
## Makefile v1
##

NAME = organized

DEBUG = organized_dbg

SRC = $(wildcard *.c) $(shell find ./src/. -type f -name '*.c')

TNAME = unit_tests

TOBJ = $(filter-out main.c,$(wildcard *.c)) \
	$(shell find ./src/. -type f -name '*.c')

TFILE = $(wildcard tests/*.c)

OBJ = $(SRC:.c=.o)

LIBS = -L. -lmy -lshell

LIBDIRS := $(wildcard ./lib/*/)

DBGFLAGS = -Wall -Wextra -g3

CFLAGS = -Wall -Wextra -I./include/ $(LIBS)

TCFLAGS = -lcriterion

all: libs $(NAME)

dbg: dbg_libs $(DEBUG)

$(NAME): $(OBJ)
	@$(CC) $(SRC) -o $(NAME) $(CFLAGS)

$(DEBUG): $(OBJ)
	@$(CC) $(SRC) -o $(NAME) $(DBGFLAGS) $(CFLAGS)

libs: $(LIBDIRS)
	@for fld in $^ ; do $(MAKE) -C $$fld --no-print-directory ; done

dbg_libs: $(LIBDIRS)
	@for fld in $^ ; do $(MAKE) -C $$fld CFLAGS='$(DBGFLAGS)' \
		--no-print-directory ; done

clean:
	@for fld in $(LIBDIRS) ; do $(MAKE) clean -C $$fld \
		--no-print-directory ; done
	@$(RM) $(OBJ)
	@$(RM) unit_tests *.gc*

fclean: clean
	@for fld in $(LIBDIRS) ; do $(MAKE) fclean -C $$fld \
		--no-print-directory ; done
	@$(RM) $(NAME)

re: fclean libs $(NAME)

dbg_re: fclean dbg_libs $(DEBUG)

style: fclean
	@../coding-style-checker/coding-style.sh ./
	@cat coding-style-reports.log
	@$(RM) -f coding-style-reports.log

tests_run: unit_tests
	@./unit_tests

unit_tests: re
	@$(CC) $(TOBJ) $(TFILE) -o $(TNAME) $(TCFLAGS) $(CFLAGS)

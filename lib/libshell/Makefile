##
## EPITECH PROJECT, 2024
## libshell
## File description:
## Makefile a_only v1
##

NAME = libshell

ARCHIVE = libshell.a

all: $(NAME)

$(NAME):
	@cp ./libshell.a ../../
	@touch $(NAME)

clean:
	@$(RM) $(NAME)

fclean: clean
	@$(RM) ../../$(ARCHIVE)

re: fclean all

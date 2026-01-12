SRC = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

CC = g++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = weapon

OBJ = $(SRC:.cpp=.o)

RM = rm -rf

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
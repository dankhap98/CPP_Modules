NAME= u_violence
CC= clang++
CFLAGS= -Wall -Wextra -Werror -std=c++98

DEPS= Weapon.hpp HumanA.hpp HumanB.hpp
SRCS= main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
OBJS= $(SRCS:.cpp=.o)

.PHONY: clean fclean all re

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) $(CFLAGS) -o $(NAME)

%.o: %.cpp $(DEPS)
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
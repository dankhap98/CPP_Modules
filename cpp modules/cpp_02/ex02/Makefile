SRCS			= main.cpp Fixed.cpp
INC				= Fixed.hpp
OBJS			= $(SRCS:.cpp=.o)

NAME			= Fixed

all:			$(NAME)

$(NAME):		$(OBJS)
				clang++ -Wall -Wextra -Werror -I $(INC). -o $(NAME) $(OBJS)

$(SRCS:.cpp=.o):
				clang++ -Wall -Wextra -Werror -c main.cpp -o main.o
				clang++ -Wall -Wextra -Werror -c Fixed.cpp -o Fixed.o

clean:
				rm -f $(OBJS)

fclean:			clean
				rm -f $(NAME)

re:				fclean $(NAME)

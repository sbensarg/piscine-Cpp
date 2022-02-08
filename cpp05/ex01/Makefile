NAME = ex01
SRCS = Bureaucrat.cpp Form.cpp main.cpp
FLAGS = -Wall -Wextra -Werror -std=c++98
CC = clang++
HEADER = Bureaucrat.hpp Form.hpp
all: $(NAME)

$(NAME): $(SRCS) $(HEADER)
	@$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	
fclean: clean
	@rm -f $(NAME)
re: fclean all
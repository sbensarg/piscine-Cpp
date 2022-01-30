NAME = convert
SRCS = Cnv_scalar_types.cpp main.cpp
FLAGS = -Wall -Wextra -Werror 
CC = g++
HEADER = Cnv_scalar_types.hpp
all: $(NAME)

$(NAME): $(SRCS) $(HEADER)
	@$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	
fclean: clean
	@rm -f $(NAME)
re: fclean all
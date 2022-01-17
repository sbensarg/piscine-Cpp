NAME = ex03
SRCS = AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp main.cpp 
FLAGS = -Wall -Wextra -Werror -std=c++98
CC = g++
HEADER = AMateria.hpp Character.hpp Cure.hpp Ice.hpp IMateriaSource.hpp
all: $(NAME)

$(NAME): $(SRCS) $(HEADER)
	@$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	
fclean: clean
	@rm -f $(NAME)
re: fclean all
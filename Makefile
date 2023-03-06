
NAME		=	Material

CPP			=	c++

CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98 -g -ggdb3

SRCS		=	AMateria.cpp Ice.cpp Character.cpp Cure.cpp MateriaSource.cpp main.cpp

OBJS		=	$(SRCS:.cpp=.o)

RM			=	rm -rf

%.o:%.cpp AMateria.hpp Ice.hpp ICharacter.hpp Character.hpp Cure.hpp IMateriaSource.hpp MateriaSource.hpp
	$(CPP) $(CXXFLAGS) -c $< -o $@

all:	$(NAME)

$(NAME):	$(OBJS)
			$(CPP) $(CXXFLAGS) $(SRCS) -o $(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

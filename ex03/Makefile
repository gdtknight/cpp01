NAME = ex03
SRCS = main.cpp \
       HumanA.cpp \
       HumanB.cpp \
       Weapon.cpp
HEADERS = HumanA.hpp \
          HumanB.hpp \
          Weapon.hpp
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(SRCS) $(HEADERS)
	$(CXX) $(CXXFLAGS) $(SRCS) -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re

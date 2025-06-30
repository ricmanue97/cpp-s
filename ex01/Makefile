NAME = MyAwesomePhoneBook

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = MyPhoneBook.cpp
OBJS = MyPhoneBook.o

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

megaphone.o: megaphone.cpp
	$(CXX) $(CXXFLAGS) -c MyPhoneBook.cpp -o MyPhoneBook.o

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
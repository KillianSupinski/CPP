NAME    := phonebook

CXX     := c++
CXXFLAGS:= -Wall -Wextra -Werror -std=c++98
SRCDIR  := srcs

SRCS    := $(SRCDIR)/phone_class.cpp \
           $(SRCDIR)/contact_class.cpp \
           $(SRCDIR)/main.cpp

OBJS    := $(SRCS:.cpp=.o)

RM      := rm -f

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

NAME		= dynamic

SRCS		= main.cpp Base.cpp A.cpp B.cpp C.cpp
OBJS		= $(SRCS:.cpp=.o)

CXX			= clang++
CXXFLAGS	= -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	@$(CXX) $(OBJS) -o $@

%.o: %.cpp
	@$(CXX) $(CXXFLAGS) -o $@ -c $<
	@echo "\x1B[3;32m$< compiling!\x1B[0m"

clean:
	@rm -f $(OBJS)
	@echo "\x1B[3;31mObjects removed!\x1B[0m"

fclean: clean
	@rm -f $(NAME)
	@echo "\x1B[3;31m$(NAME) removed!\x1B[0m"

re: fclean all

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/12 17:49:54 by ibohonos          #+#    #+#              #
#    Updated: 2018/06/12 18:42:58 by ibohonos         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME     = megaphone

SRCS     = megaphone.cpp
OBJS     = $(SRCS:.cpp=.o)

CXX      = g++
CXXFLAGS = -Wall -Werror -Wextra

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

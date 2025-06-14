# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hugo-mar <hugo-mar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/14 23:31:00 by hugo-mar          #+#    #+#              #
#    Updated: 2025/06/14 23:47:35 by hugo-mar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

ARCHIVE = phonebook.a

CXX = g++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98

MAKE_LIB = ar -rcs

SRCS_PATH = ./srcs/

SRCS = $(SRCS_PATH)Contact.Class.cpp $(SRCS_PATH)PhoneBook.Class.cpp \
		$(SRCS_PATH)utils.cpp $(SRCS_PATH)main.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(OBJS) -o $(NAME)

$(ARCHIVE): $(OBJS)
	$(MAKE_LIB) $(ARCHIVE) $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(ARCHIVE)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
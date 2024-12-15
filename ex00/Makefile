# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahamdi <ahamdi@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/10 17:47:39 by ahamdi            #+#    #+#              #
#    Updated: 2024/12/10 17:51:39 by ahamdi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

src = main.cpp ClapTrap.cpp
obj = $(src:.cpp=.o)
flags = -Wall -Wextra -Werror -std=c++98 
name = a.out

all: $(name)

$(name): $(obj)
		c++ $(flags) $(obj) -o $(name)

%.o : %.cpp  ClapTrap.hpp
		c++  $(flags) -c $< -o $@

clean :
	@rm -rf  $(obj)
fclean : clean
	@rm -rf $(name)
re : fclean all

.PHONY : all clean fclean re
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/27 12:57:34 by ljerinec          #+#    #+#              #
#    Updated: 2024/12/19 15:04:10 by ljerinec         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CFLAGS = -Wall -Werror -Wextra -g3 -fsanitize=address

ex := 00
MAIN = main_ex$(ex).cpp

SOURCES =	$(MAIN) \
			Vector.cpp \
			Matrix.cpp \
			linear_combination.cpp \

OBJ_DIR = objs/
OBJECTS = $(SOURCES:.cpp=.o)

MATRIX = Matrix

INCLUDES_DIR = inc/

####################COMPILATION STYLING####################

TOTAL_FILES = $(words $(SOURCES))
CURRENT_FILE = 0
BAR_WIDTH = 30

PRINT_NAME		:= Matrix
PRINT_PREFIX	:=	\033[1m\033[38;5;240m[\033[0m\033[38;5;250m$(PRINT_NAME)\033[1m\033[38;5;240m] \033[38;5;105m~\033[0m

all: $(MATRIX)

%.o: %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@ -I $(INCLUDES_DIR)
	@$(eval CURRENT_FILE=$(shell echo $$(($(CURRENT_FILE)+1))))
	@$(eval PROGRESS=$(shell echo $$(($(CURRENT_FILE) * $(BAR_WIDTH) / $(TOTAL_FILES)))))
	@$(eval REMAINING=$(shell echo $$(($(BAR_WIDTH) - $(PROGRESS)))))

	@printf "$(PRINT_PREFIX) \033[1;33m[$(CURRENT_FILE)/$(TOTAL_FILES)] ["
	@printf "%${PROGRESS}s" | tr ' ' 'O'
	@printf "%${REMAINING}s" | tr ' ' ' '
	@printf "]\r\033[0m"


$(MATRIX): $(OBJECTS)
	@$(CC) $(CFLAGS) -o $(MATRIX) $(OBJECTS)
	@printf "$(PRINT_PREFIX) \033[1;32m[$(CURRENT_FILE)/$(TOTAL_FILES)] ["
	@printf "%${PROGRESS}s" | tr ' ' 'O'
	@printf "%${REMAINING}s" | tr ' ' ' '
	@printf "][OK]\n\033[0m"
	@mkdir -p objects
	@mv *.o ./objects/

clean:
	@rm -rf $(OBJECTS)

fclean: clean
	@rm -f $(MATRIX)
	@rm -rf objects

re: fclean all

exec: re
	./$(MATRIX)

.PHONY: all clean fclean re
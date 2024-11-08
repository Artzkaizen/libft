NAME		:= libft.a
SRC_DIR		:= src
BUILD_DIR	:= obj
INC_DIR		:= include
SRCS		:= strlen.c
SRCS		:= $(SRCS:%=$(SRC_DIR)/%)
OBJS		:= $(SRCS:$(SRC_DIR)/%.c=$(BUILD_DIR)/%.o)

CC			:= cc
CFLAGS		:= -Wall -Wextra -Werror -g -fsanitize=leak
CPPFLAGS	:= -I $(INC_DIR)
RM			:= rm -f
MAKEFLAGS	:= --no-print-directory

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c
	mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) $(CPPFLAGS) -c -o $@ $<

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean re

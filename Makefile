NAME		:= libft.a
SRC_DIR		:= src
BUILD_DIR	:= obj
INC_DIR		:= include
SRCS		:= ft_atoi.c \
               ft_putnbr.c \
               ft_strcmp.c \
               ft_strlcat.c \
               ft_strncmp.c \
               ft_strstr.c \
               ft_isalpha.c \
               ft_isalnum.c \
               ft_isascii.c \
               ft_isdigit.c \
               ft_isprint.c \
               ft_strcat.c \
               ft_strcpy.c \
               ft_tolower.c \
               ft_toupper.c \
               ft_strdup.c \

SRCS		:= $(SRCS:%=$(SRC_DIR)/%)
OBJS		:= $(SRCS:$(SRC_DIR)/%.c=$(BUILD_DIR)/%.o)

CC			:= cc
CFLAGS		:= -Wall -Wextra -Werror
DEBUG		:= -g -fsanitize=leak
LIBFLAGS	:= ar rcs
CPPFLAGS	:= -I $(INC_DIR)

RM			:= rm -f
MAKEFLAGS	:= --no-print-directory

all: $(NAME)

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c
	mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) $(CPPFLAGS) -c -o $@ $<

$(NAME): $(OBJS)
	$(LIBFLAGS) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean re

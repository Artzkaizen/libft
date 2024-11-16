# Project name
NAME            := libft.a
TARGET          := test_runner

# Directories
SRC_DIR         := src
OBJ_DIR         := obj
INC_DIR         := include
UNITY_DIR       := ${HOME}/unity/src
TEST_DIR        := test
TEST_OBJ_DIR    := test/obj

#    ft_lstnew.c \-
#    ft_lstadd_front.c \-
#    ft_lstsize.c \-
#    ft_lstlast.c \-
#    ft_lstadd_back.c \-
#    ft_lstdelone.c \-
#    ft_lstclear.c \-
#    ft_lstiter.c \-
#    ft_lstmap.c \-
#    ft_strnew.c \-
#    ft_strdel.c \-
#    ft_strclr.c \-
#    ft_striter.c \-
#    ft_striteri.c \-
#    ft_strmap.c \-
#    ft_strequ.c \-

# Source files
SRCS            := ft_atoi.c \
                   ft_strdup.c \
                   ft_strlcat.c \
				   ft_strlen.c \
                   ft_strncmp.c \
                   ft_strnstr.c \
                   ft_strjoin.c \
                   ft_isalpha.c \
                   ft_isalnum.c \
                   ft_isascii.c \
                   ft_isdigit.c \
                   ft_isprint.c \
                   ft_tolower.c \
                   ft_toupper.c \
			       ft_bzero.c \
			       ft_memset.c \
			       ft_memcmp.c \
			       ft_memchr.c \
			       ft_strchr.c \
			       ft_strrchr.c \
			       ft_strlcpy.c \
			       ft_memcpy.c \
			       ft_substr.c \
				   ft_strmapi.c \
				   ft_strtrim.c \
				   ft_split.c \
				   ft_itoa.c \
				   ft_putchar_fd.c \
				   ft_putstr_fd.c \
				   ft_putendl_fd.c \
				   ft_putnbr_fd.c

SRCS		:= $(SRCS:%=$(SRC_DIR)/%)
OBJS		:= $(SRCS:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

# Test files
TESTS		:= ft_atoi.test.c \
               ft_isalnum.test.c \
               ft_isalpha.test.c \
			   ft_bzero.test.c \
			   ft_memset.test.c \
			   ft_memcpy.test.c
TESTS		:= $(TESTS:%=$(TEST_DIR)/%)
TEST_OBJS	:= $(TESTS:$(TEST_DIR)/%.c=$(TEST_OBJ_DIR)/%.o)
CRITERION	:= ${HOME}/sgoinfre/linuxbrew/.linuxbrew/Cellar/criterion/2.4.2_1/include

# Include paths
INCLUDES		:= -I $(INC_DIR) -I $(CRITERION)


# Compiler and flags
CC              := cc
CFLAGS          := -Wall -Wextra -Werror $(INCLUDES)
DEBUG           := -g -fsanitize=leak
LDFLAGS			:= -L${HOME}/sgoinfre/linuxbrew/.linuxbrew/Cellar/criterion/2.4.2_1/lib -lcriterion

# Library archiving flags
LIBFLAGS        := ar rcs

# Clean command
RM              := rm -f

# Default target (build library)
all: $(NAME)

# Run tests
test: $(TARGET)
	./$(TARGET)

# Rule to build the static library
$(NAME): $(OBJS)
	$(LIBFLAGS) $(NAME) $(OBJS)

# Rule to compile the library source files
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(TEST_OBJ_DIR)/%.o: $(TEST_DIR)/%.c
	mkdir -p $(TEST_OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@
	@echo "Compiled $< to $@"

# Rule to build the test runner (including Unity)
$(TARGET): $(TEST_OBJS) $(OBJS)
	$(CC) $(TEST_OBJS) $(OBJS) -o $(TARGET) $(NAME) $(LDFLAGS)


# Clean rule (remove object files)
clean:
	$(RM) $(OBJ_DIR)/*.o

# Full clean (remove object files and static library)
fclean: clean
	$(RM) $(NAME)

# Rebuild the project
re: fclean all test

# Phony targets
.PHONY: clean fclean re test

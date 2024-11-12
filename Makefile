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

# Source files
SRCS            := ft_atoi.c \
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
                   ft_strdup.c

SRCS		:= $(SRCS:%=$(SRC_DIR)/%)
OBJS		:= $(SRCS:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

# Test files
TESTS		:= ft_atoi.test.c \
               ft_isalnum.test.c
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

# Run tests
test: $(TARGET)
	./$(TARGET)

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

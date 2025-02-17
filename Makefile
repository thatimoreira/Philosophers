NAME			= philo

CC			= cc
CFLAGS			= -Wall -Wextra -Werror -ggdb3
RM			= rm -rf

SRC_DIR					= srcs
PROCESS_ARGS_DIR		= $(SRC_DIR)/process_args
UTILS_DIR				= $(SRC_DIR)/utils
INCLUDE_DIR				= includes
OBJ_DIR					= objs

SRC_FILES			= $(SRC_DIR)/main.c
PROCESS_ARGS_FILES	= $(PROCESS_ARGS_DIR)/handle_error.c $(PROCESS_ARGS_DIR)/parse.c \
					  $(PROCESS_ARGS_DIR)/validate_input.c
UTILS_FILES			= $(UTILS_DIR)/utils.c

OBJS		=   $(addprefix $(OBJ_DIR)/, $(notdir $(SRC_FILES:.c=.o))) \
				$(addprefix $(OBJ_DIR)/, $(notdir $(PROCESS_ARGS_FILES:.c=.o))) \
				$(addprefix $(OBJ_DIR)/, $(notdir $(UTILS_FILES:.c=.o)))

vpath %.c $(SRC_DIR) $(PROCESS_ARGS_DIR) $(UTILS_DIR)

vpath %.h $(INCLUDE_DIR)

all:			 $(NAME)

$(NAME):		$(OBJS)
			$(CC) $(CFLAGS) -o $@ $(OBJS)

$(OBJ_DIR)/%.o: 	%.c | $(OBJ_DIR)
			$(CC) $(CFLAGS) -I$(INCLUDE_DIR) -c -o $@ $<

$(OBJ_DIR):
			mkdir -p $(OBJ_DIR)

clean:		
			$(RM) $(OBJ_DIR)

fclean:		clean
			$(RM) $(NAME)
			$(RM) $(OBJ_DIR)

re:			fclean all

.PHONY:	all clean fclean re


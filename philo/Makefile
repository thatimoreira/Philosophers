CC			= cc
CFLAGS			= -Wall -Wextra -Werror -g
RM			= rm -rf

SCRS_DIR		= srcs
OBJS_DIR		= objs
INCLUDE_DIR		= include

SRCS_FILES		= srcs/main.c
OBJS_FILES		= $(SRCS_FILES:$(SRCS_DIR)/%.c=$(OBJS_DIR)/%.o)
INCLUDE			= -I$(INCLUDE_DIR)

NAME			= philo

all:			$(NAME)

$(NAME):		$(OBJS_FILES)
			$(CC) $(CFLAGS) $(OBJS_FILES) -o $(NAME)

$(OBJS_DIR)/%.o:	$(SRCS_DIR)/%.c
			mkdir -p $(OBJS_DIR)
			$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

clean:
		$(RM) $(OBJS_DIR)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all

.PHONY:		all clean fclean re

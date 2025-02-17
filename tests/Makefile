# 1st create the alias belove to the test an then run only test
# alias test="make -C tests test"

# to clean only the tests files
# make -C tests clean

# to clean the project and tests files
# make fclean && make -C tests fclean

TEST_NAME = test_philo

PHILO_LIB = libphilo.a

CC = cc
CFLAGS = -Wall -Wextra -Werror -g3

INCLUDE_DIR  = ../includes
TEST_OBJ_DIR = objs
SRC_DIR		 = ../srcs

SRCS = $(wildcard $(SRC_DIR)/*.c) \
       $(wildcard $(SRC_DIR)/process_args/*.c) \
       $(wildcard $(SRC_DIR)/utils/*.c)

OBJS = $(patsubst $(SRC_DIR)/%.c, $(TEST_OBJ_DIR)/%.o, $(SRCS))

TEST_SRCS	= test_input_validation.c
TEST_OBJS	= $(addprefix $(TEST_OBJ_DIR)/, $(notdir $(TEST_SRCS:.c=.o)))

$(TEST_OBJ_DIR):
	mkdir -p $(TEST_OBJ_DIR)
	mkdir -p $(TEST_OBJ_DIR)/process_args
	mkdir -p $(TEST_OBJ_DIR)/utils

$(TEST_OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(TEST_OBJ_DIR)
	$(CC) $(CFLAGS) -I$(INCLUDE_DIR) -c -o $@ $<

# create philo lib
$(PHILO_LIB): $(OBJS)
	@printf "\n\n*********************************** Creating libphilo.a ***********************************\n"
	ar rcs $(PHILO_LIB) $(OBJS)
	@printf "\n*******************************************************************************************\n\n"

$(TEST_OBJ_DIR)/%.o: %.c | $(TEST_OBJ_DIR)
	$(CC) $(CFLAGS) -I$(INCLUDE_DIR) -c -o $@ $<

$(TEST_NAME): $(TEST_OBJS) $(PHILO_LIB)
	$(CC) $(CFLAGS) -o $(TEST_NAME) $(TEST_OBJS) $(PHILO_LIB) -lpthread


# run tests
test: $(TEST_NAME)
	./$(TEST_NAME)

clean:
	rm -rf $(TEST_OBJ_DIR) $(PHILO_LIB)

fclean: clean
	rm -f $(TEST_NAME)

re: fclean test

.PHONY: test clean fclean re

NAME        = minitalk
SERVER      = server
CLIENT      = client

SERVER_BONUS = server_bonus
CLIENT_BONUS = client_bonus

CC          = cc
CFLAGS      = -Wall -Wextra -Werror -g

LIBFT_DIR   = Libft
LIBFT       = $(LIBFT_DIR)/libft.a

PRINTF_DIR  = ft_printf
PRINTF      = $(PRINTF_DIR)/libftprintf.a

MAND_SRC_DIR    = mandatory/src
MAND_INC_DIR    = mandatory/includes

BONUS_SRC_DIR   = bonus/src_bonus
BONUS_INC_DIR   = bonus/includes_bonus

SERVER_SRC      = $(MAND_SRC_DIR)/server.c
CLIENT_SRC      = $(MAND_SRC_DIR)/client.c

SERVER_OBJ      = $(SERVER_SRC:.c=.o)
CLIENT_OBJ      = $(CLIENT_SRC:.c=.o)

SERVER_SRC_BONUS = $(BONUS_SRC_DIR)/server_bonus.c
CLIENT_SRC_BONUS = $(BONUS_SRC_DIR)/client_bonus.c

SERVER_OBJ_BONUS = $(SERVER_SRC_BONUS:.c=.o)
CLIENT_OBJ_BONUS = $(CLIENT_SRC_BONUS:.c=.o)

all: $(LIBFT) $(PRINTF) $(SERVER) $(CLIENT)

bonus: $(LIBFT) $(PRINTF) $(SERVER_BONUS) $(CLIENT_BONUS)

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

$(PRINTF):
	$(MAKE) -C $(PRINTF_DIR)

$(SERVER): $(SERVER_OBJ)
	$(CC) $(CFLAGS) $(SERVER_OBJ) -L$(LIBFT_DIR) -lft -L$(PRINTF_DIR) -lftprintf -o $(SERVER)

$(CLIENT): $(CLIENT_OBJ)
	$(CC) $(CFLAGS) $(CLIENT_OBJ) -L$(LIBFT_DIR) -lft -L$(PRINTF_DIR) -lftprintf -o $(CLIENT)

$(SERVER_BONUS): $(SERVER_OBJ_BONUS)
	$(CC) $(CFLAGS) $(SERVER_OBJ_BONUS) -L$(LIBFT_DIR) -lft -L$(PRINTF_DIR) -lftprintf -o $(SERVER_BONUS)

$(CLIENT_BONUS): $(CLIENT_OBJ_BONUS)
	$(CC) $(CFLAGS) $(CLIENT_OBJ_BONUS) -L$(LIBFT_DIR) -lft -L$(PRINTF_DIR) -lftprintf -o $(CLIENT_BONUS)

%.o: %.c
	$(CC) $(CFLAGS) \
	-I$(MAND_INC_DIR) \
	-I$(BONUS_INC_DIR) \
	-I$(LIBFT_DIR) \
	-I$(PRINTF_DIR) \
	-c $< -o $@

clean:
	$(MAKE) -C $(LIBFT_DIR) clean
	$(MAKE) -C $(PRINTF_DIR) clean
	rm -f $(SERVER_OBJ) $(CLIENT_OBJ) $(SERVER_OBJ_BONUS) $(CLIENT_OBJ_BONUS)

fclean: clean
	$(MAKE) -C $(LIBFT_DIR) fclean
	$(MAKE) -C $(PRINTF_DIR) fclean
	rm -f $(SERVER) $(CLIENT) $(SERVER_BONUS) $(CLIENT_BONUS)

re: fclean all

.PHONY: all bonus clean fclean re

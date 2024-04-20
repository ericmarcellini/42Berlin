NAME = fract_ol

CC = gcc
CFLAGS = -Wall -Wextra -Werror
MLX = ./lib/minilibx-linux
MLX_LIB = $(MLX)/libmlx.a
MLXFLAGS = -L$(MLX) -lmlx -framework OpenGL -framework AppKit

SRC = $(wildcard src/*.c)
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(MLX_LIB) $(OBJ)
	$(CC) $(OBJ) $(MLXFLAGS) -o $(NAME)

$(MLX_LIB):
	make -C $(MLX)

clean:
	rm -f $(OBJ)
	make -C $(MLX) clean

fclean: clean
	rm -f $(NAME)

re: fclean all

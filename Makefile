SRCS = ft_printf.c ft_printf_char.c ft_printf_hex.c ft_printf_integer.c ft_printf_percent.c \
ft_printf_pointer.c ft_printf_str.c ft_printf_unsigned_int.c ft_libfunctions.c

OBJS = $(SRCS:.c=.o)

NAME = libftprintf.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

# $< = first prerequisite (= xxxx.c = c files)
# $(<:.c=.o) = xxxx.c to xxxx.o (simply changes .c to .o on file name)
# -I = search for headers in this directory
.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME):	$(OBJS)
	ar rc $(NAME) $(OBJS) *.o

all:		$(NAME)

clean:
	rm -f $(OBJS)

fclean:		clean
	rm -f $(NAME)

re:			fclean all

.PHONY:	all clean fclean re bonus

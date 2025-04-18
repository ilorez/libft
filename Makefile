
NAME = libft.a
INCLUDE_DR = ./includes
CFLAGS = -Wall -Wextra -Werror -I$(INCLUDE_DR)
CC = cc
LIBC = ar -rcs
RM = rm -f



SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
			 ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c \
			 ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c \
			 ft_calloc.c ft_strdup.c ft_toupper.c ft_tolower.c \
			 ft_strchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c \
			 ft_strnstr.c ft_atoi.c ft_strrchr.c ft_substr.c \
			 ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
			 ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
			 ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
			 ft_isspace.c ft_free_str_lst.c ft_atol.c \
			 ft_lstnew.c ft_lstadd_front.c \
			 ft_lstsize.c ft_lstlast.c \
			 ft_lstadd_back.c ft_lstdelone.c \
			 ft_lstclear.c ft_lstiter.c \
			 ft_lstmap.c \
			 ft_printf.c ft_printf_utils.c \
			 ft_get_next_line.c \
			 ft_is_str_chars_same.c \
			 ft_strndup.c \
			 ft_malloc.c \
			 ft_errno.c \
			 ft_strlowcase.c ft_strupcase.c \
			 ft_strtod.c

OBJS	= $(SRCS:.c=.o)

all: $(NAME)

$(NAME):${OBJS}
	${LIBC} ${NAME} ${OBJS}

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY : all clean fclean re

SRC = ft_atoi.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
ft_strlcat.c ft_strlen.c ft_strncmp.c ft_tolower.c ft_toupper.c ft_memset.c \
ft_memmove.c ft_memcpy.c ft_strlcpy.c ft_strnstr.c ft_bzero.c ft_strchr.c\
ft_strrchr.c ft_calloc.c ft_memcmp.c ft_strdup.c ft_memchr.c ft_putstr_fd.c\
ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_strmapi.c ft_substr.c\
ft_strjoin.c ft_strtrim.c ft_striteri.c ft_itoa.c ft_split.c

BONUS =  ft_lstnew.c ft_lstadd_front.c ft_lstlast.c ft_lstadd_back.c\
ft_lstdelone.c ft_lstsize.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

GNLFILES = ft_get_next_line/get_next_line.c ft_get_next_line/get_next_line_utils.c 
GNLOBJS = ${GNLFILES:.c=.o}

PRINTFD = ./ft_printf
PRINTFA = ./ft_printf/libftprintf.a

OBJS = ${SRC:.c=.o}
OBJSBONUS = ${BONUS:.c=.o}
RM = rm -rf
CC = cc
CFLAGS = -Werror -Wall -Wextra
NAME = libft.a

all : $(NAME)

$(PRINTFA): $(PRINTFD)
	make -C $(PRINTFD)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS) $(GNLOBJS) $(PRINTFA)
	cp $(PRINTFA) $(NAME)
	ar -rcs $(NAME) $(GNLOBJS) $(OBJS)
	@echo "\033[33mLIBFT COMPILED\033[0m"

clean:
	make clean -s -C $(PRINTFD)
	$(RM) $(OBJS) $(OBJSBONUS) $(GNLOBJS)
	@echo "\033[33mOBJS DELETED\033[0m"

fclean: clean
	make fclean -s -C $(PRINTFD)
	$(RM) $(NAME)
	@echo "\033[33mPROGRAM DELETED\033[0m"

re: fclean all

bonus: $(OBJSBONUS) $(NAME)
	ar -vrcs $(NAME) $(OBJSBONUS)

.SILENT:
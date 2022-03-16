##
## EPITECH PROJECT, 2020
## a
## File description:
## makefile
##

SRCS	=	./sources/sum_numbers.c		/
		./sources/sum_strings_lenght.c	/
		./sources/disp_stdarg.c

NAME    = libmy.a

OBJS    = $(SRCS:.c=.o)

CPPFLAGS = -I includes
CFLAGS += -W -Wall -Wextra

all: $(NAME)

$(NAME): $(OBJS)
		ar rc $(NAME) $(SRCS) $(OBJS) $(CFLAGS)

clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re: fclean all

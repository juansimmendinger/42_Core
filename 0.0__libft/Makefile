# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jsimmend <jsimmend@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/02 12:30:56 by jsimmend          #+#    #+#              #
#    Updated: 2023/02/13 17:01:43 by jsimmend         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_atoi.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
		ft_isprint.c ft_memmove.c ft_memset.c ft_strlen.c ft_memcpy.c \
		ft_bzero.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c \
		ft_strrchr.c ft_strchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c \
		ft_putchar_fd.c ft_putstr_fd.c ft_itoa.c ft_putnbr_fd.c ft_strnstr.c \
		ft_strnstr.c ft_putendl_fd.c ft_calloc.c ft_strdup.c ft_substr.c \
		ft_strjoin.c ft_strtrim.c ft_split.c ft_strmapi.c ft_striteri.c

SRCS_BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
		ft_lstadd_back.c ft_lstdelone.c ft_lstdelone.c ft_lstclear.c \
		ft_lstiter.c ft_lstmap.c

OBJS = $(SRCS:.c=.o)
OBJS_BONUS = $(SRCS_BONUS:.c=.o)

CC = gcc
CFLAGS = -Wall -Werror -Wextra -o3 
ARFLAGS = -rcs
RM = rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	ar $(ARFLAGS) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS) $(OBJS_BONUS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

bonus: $(OBJS) $(OBJS_BONUS)
	ar $(ARFLAGS) $(NAME) $(OBJS) $(OBJS_BONUS)

rebonus: fclean bonus

.PHONY: all bonus clean fclean re rebonus

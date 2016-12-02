NAME 	=	libftprintf.a
DOBJ 	=	objs
DSRC 	=	srcs
INC 	=	-I includes/
CC 		=	llvm-gcc
CFLAGS 	=	$(INC)# -Wall -Werror -Wextra $(INC)
SRC 	=	$(shell find $(DSRC) -name '*.c' -type f)
SDIR	=	$(shell find $(DSRC) -type d)
ODIR	=	$(addprefix $(DOBJ)/, $(SDIR))
OBJ 	=	$(patsubst %.c, $(DOBJ)/%.o, $(SRC))

all: $(NAME)

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo "\033[32;1m$(NAME) created successfully!\033[0m"

$(DOBJ)/%.o:%.c
	@mkdir -p $(ODIR)
	$(CC) $(CFLAGS) -c $< -o $@

test: $(NAME)
	$(CC) $(CFLAGS) demo.c $(INC) -L . -lftprintf

clean:
	@/bin/rm -rf $(DOBJ)

fclean: clean
	@/bin/rm -rf $(NAME)
	@echo "\033[31;1m$(NAME) removes!\033[0m"

re: fclean all

.PHONY: re all clean fclean

# マクロ定義部
CC=gcc
OBJS = main.o stack.o 
# 生成規則部
a.out: $(OBJS)
		$(CC) -o stack $(OBJS)
# サフィックスルール(.c → .o)
.c.o:
		g++ -c $<

stack.o: stack.hpp
main.o: stack.hpp 
# マクロ定義部
CC=g++
OBJS = main.o stack.o 
# 生成規則部
stack: $(OBJS)
		$(CC) -o stack $(OBJS)
# サフィックスルール(.c → .o)
.cpp.o:
		$(CC) -c $<

stack.o: stack.hpp stack.cpp
main.o: stack.hpp main.cpp
# マクロ定義部
CC=gcc
OBJS = main15.o task15.o 

# 生成規則部
task15: $(OBJS)		
	$(CC) $(OBJS) -o task15 $(LDFLAGS)

LIBS := -lm
LDFLAGS := $(LIBS)

# サフィックスルール(.c → .o)
%.o: %.c
	gcc $(CFLAGS) -c $< -o $@

.PHONY: all clean
all: main15
clean:
	rm -f main15 $(OBJS)

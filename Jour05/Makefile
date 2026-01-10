CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCDIR = src
OBJDIR = obj
SRCS = $(SRCDIR)/main.c $(SRCDIR)/parsing.c $(SRCDIR)/sorting.c $(SRCDIR)/display.c
OBJS = $(SRCS:$(SRCDIR)/%.c=$(OBJDIR)/%.o)
TARGET = music

all: $(TARGET)

$(TARGET): $(OBJS)
$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

$(OBJDIR)/%.o: $(SRCDIR)/%.c
mkdir -p $(OBJDIR)
$(CC) $(CFLAGS) -c $< -o $@

clean:
rm -rf $(OBJDIR)

fclean: clean
rm -f $(TARGET)

run: all
./$(TARGET)

.PHONY: all clean fclean run
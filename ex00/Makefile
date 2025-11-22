CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = srcs/newZombie.cpp srcs/Zombie.cpp srcs/randomChump.cpp srcs/main.cpp
OBJDIR = objs
OBJ = $(SRC:srcs/%.cpp=$(OBJDIR)/%.o)
TARGET = zombie

all: $(TARGET)

$(TARGET):  $(OBJ)
	$(CC) -o $@ $^

$(OBJDIR)/%.o: srcs/%.cpp | $(OBJDIR)
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJDIR):
	mkdir -p $(OBJDIR)

clean:
	rm -f $(OBJ) $(TARGET)
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(TARGET)

re: fclean all

run: $(TARGET)
	./$(TARGET)

.PHONY: all clean fclean re run
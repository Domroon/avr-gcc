# objects = foo.o bar.o all.o
# all: $(objects)
# 	$(CC) $^ -o all

# foo.o: foo.c
# 	$(CC) -c foo.c -o foo.o

# bar.o: bar.c
# 	$(CC) -c bar.c -o bar.o

# all.o: all.c
# 	$(CC) -c all.c -o all.o

# all.c:
# 	echo "int main() { return 0; }" > all.c

# # Note: all.c does not use this rule because Make prioritizes more specific matches when there is more than one match.
# %.c:
# 	touch $@

# clean:
# 	rm -f *.c *.o all


objects = foo.o bar.o all.o
all: $(objects)
	$(CC) $^ -o all

# Syntax - targets ...: target-pattern: prereq-patterns ...
# In the case of the first target, foo.o, the target-pattern matches foo.o and sets the "stem" to be "foo".
# It then replaces the '%' in prereq-patterns with that stem
$(objects): %.o: %.c
	$(CC) -c $^ -o $@

all.c:
	echo "int main() { return 0; }" > all.c

# Note: all.c does not use this rule because Make prioritizes more specific matches when there is more than one match.
%.c:
	touch $@

clean:
	rm -f *.c *.o all
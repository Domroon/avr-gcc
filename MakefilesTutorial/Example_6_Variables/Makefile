files := file1 file2

all: one two three

build_obj: f1.o f2.one

f1.o f2.o:
	echo $@

some_file: $(files)
	echo "Look at this variable: " $(files)
	touch some_file

file1:
	touch file1
file2:
	touch file2

one:
	touch one
two:
	touch two
three:
	touch three

clean:
	rm -f file1 file2 some_file one two three
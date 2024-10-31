all: collatz

collatz: collatz.c
	gcc -Wall -Wextra -std=c99 -o collatz collatz.c

test: collatz
	./collatz 7 > actual_output.txt
	diff actual_output.txt expected_output.txt

clean:
	rm -f collatz actual_output.txt
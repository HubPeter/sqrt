all:	num num2 num3 test
num:	num.c
	gcc -o num num.c -g
num2:	num2.c
	gcc -o num2 num2.c -g
test:	test.c
	gcc -o test test.c -g
num3:	num3.c
	gcc -o num3 num3.c -g

clean:	num
	rm num num2 num3 test

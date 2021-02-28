program:object.o
	gcc -o program object.o
#Rule2
source.c:
	echo 'int main() {printf("Print hello");}'> $@
#Rule3
object.o:source.c
	gcc -c source.c -o $@
#Rule4
program2:program2.c
	gcc -o program2 program2.c


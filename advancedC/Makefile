CC=gcc
CFLAGS=-Wall -g

all: testmain

testmain: source1.o submain.o
	$(CC) $(CFLAGS) -o $@ $^

#source1.o: source1.c
##	$(CC) $(CFLAGS) -c source1.c 

#submain.o: submain.c
#	$(CC) $(CFLAGS) -c submain.c 
%.o: %.c
	$(CC) $(CFLAGS) -c $^ -o $@ 

clean:
	rm *.o
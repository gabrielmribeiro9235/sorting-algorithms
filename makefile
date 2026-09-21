CC = gcc
CFLAGS = -Wall -Wextra

all = sorting_program

sorting_program: main.o bubble_sort.o insertion_sort.o merge_sort.o quick_sort.o selection_sort.o
	$(CC) $(CFLAGS) -o sorting_program main.o bubble_sort.o insertion_sort.o merge_sort.o quick_sort.o selection_sort.o

main.o: main.c src/sorting_algorithms.h
	$(CC) $(CFLAGS) -c -o main.o main.c

bubble_sort.o: src/bubble_sort.c src/sorting_algorithms.h
	$(CC) $(CFLAGS) -c -o bubble_sort.o src/bubble_sort.c

insertion_sort.o: src/insertion_sort.c src/sorting_algorithms.h
	$(CC) $(CFLAGS) -c -o insertion_sort.o src/insertion_sort.c

merge_sort.o: src/merge_sort.c src/sorting_algorithms.h
	$(CC) $(CFLAGS) -c -o merge_sort.o src/merge_sort.c

quick_sort.o: src/quick_sort.c src/sorting_algorithms.h
	$(CC) $(CFLAGS) -c -o quick_sort.o src/quick_sort.c

selection_sort.o: src/selection_sort.c src/sorting_algorithms.h
	$(CC) $(CFLAGS) -c -o selection_sort.o src/selection_sort.c

clean:
	rm -f sorting_program main.o bubble_sort.o insertion_sort.o merge_sort.o quick_sort.o selection_sort.o
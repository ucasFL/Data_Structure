#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAXLEN 1000
typedef struct {
	int record[MAXLEN + 1];
	int length;
}Array;
void bubblesort(Array *List);
void insertsort(Array *List);
void mergesort(Array *List, int low, int high);
void merge(Array *List, int low, int mid, int high);

/*
I made a simple C program for queues.
There are nodes a and b
b is enqueued after a so that we have a queue [a,b]
a being the front
The problem is that the program
	is not getting compiled
	when I compiled it somehow, it shows Segmentation fault when I run it.
Try to fix the problem.
*/
#include <stdio.h>
struct node
{
	int value;
	struct node * ptr;
};
int enqueue(node *ptr1, node *ptr2){
	
	printf("enqueue...\n");
	ptr1->ptr = ptr2->ptr;
}
int show(struct node *ptra){
	/*shows a particular element of the queue*/
	printf("\n%p\t", ptra);
	printf("%d\t", ptra->value);
	printf("%p\n", ptra->ptr);
}
int show_q(struct node *ptra){
	/*shows all the elements of the queue*/
	while(ptra->ptr){
		show(&ptra);
		ptra=ptra->ptr;
	}
}

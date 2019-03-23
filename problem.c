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
#include "library.c"
int main(int argc, char const *argv[])
{
	struct node a;
	a.value=10;
	a.ptr = NULL;
	show(&a);
	struct node b;
	b.value=20;
	b.ptr = NULL;
	show(&b);
	enqueue(&a,&b);
	show(&a);
	show(&b);
	show_q(&a);
	return 0;
}

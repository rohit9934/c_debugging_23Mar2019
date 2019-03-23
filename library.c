#include <stdio.h>
struct node
{
	int value;
	struct node *ptr;
};
void enqueue(node *ptr1, node *ptr2){
	
	printf("enqueue...\n");
	ptr1->ptr = ptr2->ptr;
}
void show(struct node *ptra){
	/*shows a particular element of the queue*/
	printf("\n%p\t", ptra);
	printf("%d\t", ptra->value);
	printf("%p\n", ptra->ptr);
}
void show_q(struct node *ptra){
	/*shows all the elements of the queue*/
	while((ptra->ptr)!=NULL){
		show(ptra);
		ptra=ptra->ptr;
	}
}

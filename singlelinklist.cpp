#include<stdio.h>
#include<stdlib.h>
struct sll{
	int info;
	struct sll*next;		
}*start;
typedef struct sll node;
void insertionAtfirst()
{ 
	int item;
 	node*insert;
	insert=(node*)malloc(sizeof(node*));
	if (insert==NULL)
{
	printf("\n not avilable");
}else
{
	printf("enter the value");
	scanf("%d",&item);
	insert->info=item;
	insert->next=NULL;
	if (start==NULL)
	{
		start=insert;
	}else 
	insert->next=start;
	start=insert;
}
	printf("%d is inserted successfully",start->info);
 } 
 void insertionAtlast()
 {
 	int item;
 	node*insertlast,*temp;
 	insertlast=(node*)malloc(sizeof(node));
 	if(insertlast==NULL)
 	{
 		printf("\n not avilable");
	 }else{
	 	printf("\n enter the value\n ");
	 	scanf("%d",&item);
	 	insertlast->info=item;
	 	insertlast->next=NULL;
	 	if (start==NULL){
	 		start=insertlast;
		 }else
		 
		 { temp=start;
		 	while(temp->next!=NULL)
		 {
		 	temp=temp->next;
		 }
		 temp->next=insertlast;
		 printf("\n %d is inserted successfully at back\n",insertlast->info);
		 	
		
	 }
    
 }}
 int main()
 {
insertionAtfirst();
insertionAtlast();
 }

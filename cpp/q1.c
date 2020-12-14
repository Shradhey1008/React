/*
Shradhey Pathak
20198111
IT 3B
*/
#include<stdio.h>
#include<stdlib.h>

//struct to store details of all fields of Employees
struct node
{
         char empno[25],name[25],dept[10],designation[25];
         int sal;
         long int phone;
         struct node *llink;
         struct node *rlink;
};
typedef struct node* NODE;

NODE first = NULL;
int count=0;


NODE create()
{
          NODE enode;
          enode = (NODE)malloc(sizeof(struct node));
          if( enode== NULL)
          {
                    printf("\nRunning out of memory");
                    exit(0);
           }

           printf("\nEnter the Emp. No.,Name ,Department ,Designation ,Salary ,PhoneNo of the employee: \n");
         scanf("%s %s %s %s %d %ld", enode->empno, enode->name, enode->dept, enode->designation, &enode->sal, &enode->phone);
           enode->llink=NULL;
           enode->rlink=NULL;
           count++;
           return enode;
}

NODE insertfront()
{
         NODE temp;
         temp = create();
          if(first == NULL)
         {
                 return temp;
          }
          temp->rlink = first;
          first->llink = temp;
          return temp;
}

void display()
{
          NODE cur;
          int nodeno=1;
          cur = first;
          if(cur == NULL)
                      printf("\nNo Contents to display in DLL");
          while(cur!=NULL)
         {
             printf("\nENode:%d||Employee No. :%s  |Name:%s  |Department:%s |Designation:%s  |Salary:%d  |Phone no:%ld ", nodeno, cur->empno, cur->name,cur->dept, cur->designation, cur->sal, cur->phone);

                   cur = cur->rlink;
                    nodeno++;
         }
          printf("\nNo of employee nodes is %d",count);
}

NODE deletefront()
{
         NODE temp;
         if(first == NULL)
         {
                   printf("\nDoubly Linked List is empty");
                   return NULL;
         }
         if(first->rlink== NULL)
        {
                  printf("\nThe employee node with the ssn:%s is deleted", first->empno);
                 free(first);
                 count--;
                  return NULL;
         }
         temp = first;
         first = first->rlink;
         temp->rlink = NULL;
         first->llink = NULL;
         printf("\nThe employee node with the ssn:%s is deleted",temp->empno);
         free(temp);
         count--;
         return first;
}

NODE insertend()
{
          NODE cur, temp;
          temp = create();

          if(first == NULL)
          {
                    return temp;
          }
         cur= first;
         while(cur->rlink!=NULL)
        {
                  cur = cur->rlink;
         }

         cur->rlink = temp;
         temp->llink = cur;
          return first;
}

NODE deleteend()
{
         NODE prev,cur;
         if(first == NULL)
        {
                 printf("\nDoubly Linked List is empty");
                 return NULL;
        }

        if(first->rlink == NULL)
        {
                   printf("\nThe employee node with the ssn:%s is deleted",first->empno);
                   free(first);
                   count--;
                   return NULL;
        }

         prev=NULL;
         cur=first;

        while(cur->rlink!=NULL)
        {
                  prev=cur;
                  cur = cur->rlink;
         }

         cur->llink = NULL;
         printf("\nThe employee node with the ssn:%s is deleted",cur->empno);
         free(cur);
         prev->rlink = NULL;
         count--;
         return first;
}

void main()
{
    int ch,i,n;
    while(1)
    {
         printf("\n1:Create a DLL of N Employees Data by using end insertion.");
         printf("\n2:Count Nodes");
         printf("\n3:InsertAtEnd");
         printf("\n4:DeleteAtEnd");
         printf("\n5:InsertAtFront");
         printf("\n6:DeleteAtFront");
         printf("\n7:Exit \n");
         printf("\nPlease enter your choice: ");
        scanf("%d",&ch);

        switch(ch)
        {
         case 1 : printf("\nEnter the no of Employees:   ");
                   scanf("%d",&n);
                   for(i=1;i<=n;i++)
                   first = insertend();
                   break;

         case 2:  display();
                   break;

          case 3: first = insertend();
                  break;

          case 4: first = deleteend();
                  break;

          case 5: first = insertfront();
                  break;

          case 6: first = deletefront();
                break;

          case 7 : exit(0);
        default: printf("\nPlease Enter the valid choice");
        }
    }
}

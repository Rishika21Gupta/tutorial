#include <stdio.h>
#include <conio.h>

int main()
{
   int array[50];
   int i,size,pos,num;
   printf("enter the size of the array");
   scanf("%d",&size);

   printf("enter the elements of the array");

   for(i=0;i<size;i++)
   {

       scanf("%d",&array[i]);
   }


    printf("enter the number to be inserted inside  the array");
   scanf("%d",&num);

   printf("enter the position number to be inserted inside  the array");
   scanf("%d",&pos);

   if(pos<=0 || pos>size+1)
   {
       printf("invalid position");
   }


   else

    {
     for(i=size;i>=pos-1;i--)
      {

       array[i+1]=array[i];
       }
    }
    array[pos-1]=num;
    size++;


printf(" the edited array is ");
for(i=0;i<size;i++)
{

    printf("\t%d",array[i]);
}



    return 0;
}
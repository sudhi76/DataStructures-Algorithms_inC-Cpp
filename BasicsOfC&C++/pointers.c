 #include<stdio.h>
 int main()
 {
     int *p;
     p = (int*)malloc(5*sizeof(int)); // allocate memory in the heap
     printf("%d",p);

 }

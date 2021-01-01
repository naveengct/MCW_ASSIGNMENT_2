#include<stdio.h>
#include<string.h>
#include<stddef.h>
typedef struct stud{
    int id;
    char name[20];
}st;
void main(){
   st s1;
   st *p;
   s1.id=1;
   strcpy(s1.name,"Nav");
   p=&s1;
   printf("%d,%s\n",p->id,p->name);
   printf("size id=> %ld\nsize name=>%ld\n",sizeof(p->id),sizeof(p->name));
   printf("Offset Id=> %ld\nOffset Name=> %ld\n",offsetof(st,id),offsetof(st,name));
   printf("Base address is %ld\n",&s1);
   printf("Found base address using member %ld\n",&s1.name-offsetof(st,name));

}
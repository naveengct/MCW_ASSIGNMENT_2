#include<stdio.h>
typedef struct Box{
    float height;
    float length;
    float width;
    float area;
}box;
void surface_value(box b){
    b.area=2*b.height*b.width+2*b.length*b.height+2*b.width*b.length;
}
void surface_reference(box *b){
    b->area=2*b->height*b->width+2*b->length*b->height+2*b->width*b->length;
}
void main(){
    box b,c;
    box *p;
    b.height=2.0;
    b.width=3.0;
    b.length=6.0;
    c.height=2.0;
    c.width=3.0;
    c.length=6.0;
    p=&c;
    b.area=0;
    p->area=0;
    surface_value(b);
    surface_reference(p);
    printf("Value area=>%.2f\nReference area=>%.2f",b.area,p->area);
}
#include<stdio.h>
struct box
{
    float lenght,breadth,height;
};
int main()
{
    struct box box1;
    box1.lenght=10;
    box1.breadth=20;
    box1.height=30;
    float volume;
    volume=box1.lenght*box1.breadth*box1.height;
    printf("The volume of the box is %f",volume);
    float surface_area;
    surface_area=2*(box1.lenght*box1.breadth+box1.breadth*box1.height+box1.lenght*box1.height);
    printf("\nThe surface area of the box is %f",surface_area);

    struct box *box2=&box1;
    box2->breadth=10;
    box2->height=50;
    box2->lenght=76;
    
    printf("\n the volume of the box after changing value with '->' operator ");
    volume=box1.lenght*box1.breadth*box1.height;
    printf("\nThe volume of the box is %f",volume); 
    surface_area=2*(box2->lenght*box2->breadth+box2->breadth*box2->height+box2->lenght*box2->height);
    printf("\nThe surface area of the volume is %f",surface_area); 
   
    
    return 0;

}

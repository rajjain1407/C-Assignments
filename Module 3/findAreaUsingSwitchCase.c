#include<stdio.h>
#include<math.h>
main(){
   int choice;
   printf("Enter\n1 to find area of Triangle\n2 for finding area of Square\n3 for finding area of Circle\n4 for finding area of Rectangle");
   scanf("%d",&choice);
   switch(choice) {
      case 1: {
         int a,b,c;
         float s,area;
         printf("Enter sides of triangle\n");
         scanf("%d%d %d",&a,&b,&c);
         s=(float)(a+b+c)/2;
         area=(float)(sqrt(s*(s-a)*(s-b)*(s-c)));
         printf("Area of Triangle is %f\n",area);
         break;
        
      }
      case 2: {
         float side,area;
         printf("Enter Sides of Square\n");
         scanf("%f",&side);
         area=(float)side*side;
         printf("Area of Square is %f\n",area);
         break;
      }
      case 3: {
         float radius,area;
         printf("Enter Radius of Circle\n");
         scanf("%f",&radius);
         area=(float)3.14159*radius*radius;
         printf("Area of Circle %f\n",area);
         break;
      }
      case 4: {
         float len,breadth,area;
         printf("Enter Length and Breadth of Rectangle\n");
         scanf("%f %f",&len,&breadth);
         area=(float)len*breadth;
         printf("Area of Rectangle is %f\n",area);
         break;
      }
    
      default: {
         printf("Invalid Choice\n");
         break;
      }
   }
}
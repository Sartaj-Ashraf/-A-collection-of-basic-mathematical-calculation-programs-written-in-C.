
#include <stdio.h>
#define PI 3.1416
int get_an_int()
{
    float i;
    scanf("%f", &i);
    return i;
}
int area_square()
{
    float side, area;
    printf("Enter the side of your square:  ");
    scanf("%f", &side);
    area = side * side;
    printf("Area of your square of side(%.2f) is %.2f. ", side, area);
    printf("\n\n");
}
int peremeter_square()
{
    float peremeter, side;
    printf("Enter the side of your square:  ");
    scanf("%f", &side);
    peremeter = 4 * side;
    printf("Peremeter of your square of side (%.2f) is %.2f. ", side, peremeter);
    printf("\n\n");
}
int area_rectangle()
{
    float length, breadth, area;
    printf("Enter the length of your rectangle: ");
    length = get_an_int();
    printf("Enter the breadth of your rectangle : ");
    breadth = get_an_int();
    area = length * breadth;
    printf("Area of your rectangle of lenght (%.2f) and breadth (%.2f) is %.2f", length, breadth, area);
    printf("\n\n");
}
int peremeter_rectangle()
{
    float length, breadth, peremeter;
    printf("Enter the length of your rectangle: ");
    length = get_an_int();
    printf("Enter the breadth of your rectangle : ");
    breadth = get_an_int();
    peremeter = (2 * (length + breadth));
    printf("Peremeter of your rectangle of lenght (%.2f) and breadth (%.2f) is %.2f", length, breadth, peremeter);
    printf("\n\n");
}

int area_traingle()
{
    float area, base, height;
    printf("Enter the base of your traingle :  ");
    base = get_an_int();
    printf("Ente the height of your traingle :  ");
    height = get_an_int();
    area = ((base * height) / 2.0);
    printf("The area  of your recrtangle of base (%.2f) and height (%.2f) is %.2f", base, height, area);
    printf("\n\n");
}

int area_circle()
{
    float radius, area;
    printf("Enter the Radius of your Circle:  ");
    radius = get_an_int();
    area = PI * radius * radius;
    printf("THe area of your circle of radius (%.2f) is %.2f.", radius, area);
    printf("\n\n");
}

int csa_cube()
{
    float side, curved_surface_area;
    printf("Enter the side of your cube : ");
    side = get_an_int();
    curved_surface_area = 4 * (side * side);
    printf("The total surface area of your cube with side %.2f is %.2f", side, curved_surface_area);
    printf("\n\n");
}
int tsa_cube()
{
    float side, total_surface_area;
    printf("Enter the side of your cube : ");
    side = get_an_int();
    total_surface_area = 6 * (side * side);
    printf("The total surface area of your cube with side %.2f is %.2f", side, total_surface_area);
    printf("\n\n");
}
int csa_cuboid()
{
    float height, length, breadth, csa_cuboid;
    printf("Enter the height of your cuboid : ");
    height = get_an_int();
    printf("Enter the lenght of your cuboid : ");
    length = get_an_int();
    printf("Enter the breadth of your cuboid : ");
    breadth = get_an_int();
    csa_cuboid = 2*height*(length+breadth);
    printf("The Curved Surface Area of your cuboid of heigth(%.2f)  ,breadth(%.2f) and lenth(%.2f)is %.2f",
    height,breadth,length,csa_cuboid);
    printf("\n\n");
}
int tsa_cuboid()
{
    float height, length, breadth, tsa_cuboid;
    
    printf("Enter the lenght of your cuboid :  ");
    length = get_an_int();
    printf("Enter the breadth of your cuboid : ");
    breadth = get_an_int();
    printf("Enter the height of your cuboid :  ");
    height = get_an_int();
    tsa_cuboid = 2*(length*breadth + breadth*height + height*length);
    printf("The Curved Surface Area of your cuboid of heigth(%.2f)  ,breadth(%.2f) and lenth(%.2f)is %.2f",
    height,breadth,length,tsa_cuboid);
    printf("\n\n");
}
int csa_sphere()
{
    float radius,area;
    printf("Enter the radius of your sphere:  ");
    radius=get_an_int();
    area=4*PI*radius*radius;
    printf("Curved Surface Area of your sphere with radius (%.2f) is %.2f",radius,area);
    printf("\n\n");
}
int csa_hemishpere()
{
    float area,radius;
    printf("Enter the radius of hemisphere: ");
    radius=get_an_int();
    area=2*(PI*radius*radius);
    printf("Curved Surface Area of hemisphere with radius (%.2f) is %.2f",radius,area);
    printf("\n\n");
}
int tsa_hemisphere()
{
    float area,radius;
    printf("Enter the radius of hemisphere: ");
    radius=get_an_int();
    area=3*(PI*radius*radius);
    printf("Curved Surface Area of hemisphere with radius (%.2f) is %.2f",radius,area);
    printf("\n\n");
}
int main()
{

    int option;
    int answer;
     printf("******This prgram can do these kind of operation on given shapes*******\n");
    do
    {
        printf("\n");
         printf("1 for Area of Square\n");               //-------> side *side
        printf("2 for peremeter of Square\n");          //-------> 4*side
        printf("3 for Area of Rectangle\n");            //------> length *breadth
        printf("4 for peremeter of Rectangle\n");       //-----> 2(length +breadth)
        printf("5 for Area of Triangle\n");             // ----->base*height/2
        printf("6 for Area of Circle\n");               // ----->pi*radius * radius
        printf("7 for Curved Surface Area of cube \n"); // ----->4(side*side)
        printf("8 for Total Surface Area of cube\n");   //-----> 6(side*side)
        printf("9 for Curved Surface Area of cuboid\n");  //----> 2*h(length+breadth)
        printf("10 for Total Surface Area of cuboid\n");  //----> 2(l*b + b*h + h*l);
        printf("11 for Curved Surface Area of Sphere\n");  // 4*pi*radius*radius
        printf("12 for Cureved Surface Area of hemisphere\n"); //--> 2*pi*radius*radius
        printf("13 for total surface Area of hemisphere\n");   //---> 3 *pi*radius*radius



        printf("Choose your number : ");
        scanf("%d", &option);
        if(option<15)
        {
		
        switch (option)
        {
        case 1:{
            area_square();
            break;
        }

        case 2:{
            peremeter_square();
            break;
        }

        case 3:{
            area_rectangle();
            break;
        }
        case 4:{
            peremeter_rectangle();
            break;
        }
        case 5:{
            area_traingle();
            break;
        }
        case 6:{
            area_circle();
            break;
        }
        case 7:{
            csa_cube();
            break;
        }
        case 8:{
            tsa_cube();
            break;
        }
        case 9:{
            csa_cuboid();
            break;
        }
        case 10:{
            tsa_cuboid();
            break;
        }
        case 11:{
            csa_sphere();
            break;
        }
        case 12:{
           csa_hemishpere();
          break;
        }
        case 13:{
            tsa_hemisphere();
            break;
        }
        
        }
    }else
	{
		printf("\n");
	    printf("OOP's out of range\n");
       
    }
    printf("\n");
     printf("Do you want to go again:: If YES press 1 and IF NO press 0 ");
        scanf("%d", &answer);

    } while (answer != 0);
    return 0;
}

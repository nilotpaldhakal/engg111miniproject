#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
int pi=3.1415, g=9.8;
int lev;
float v2=0,d2=0,A2=0,h1=0,h2=0,den=0,Q1=0,Q2=0,P1=0,P2=0;

void levelone()
    { 
        printf("\nLevel One:\n");
        int n1=0;
        float d1=0,v1=0,A1=0;
        printf("\nA house has n1 drainage pipes. Each of these pipes are d1 cm in diameter. Wastewater flows through these pipes at v1 cm/s to the main drain pipe. If the main drain pipe is of diameter d2 cm, calculate the velocity of the wastewater in the main drain pipe. Also calculate the rate of flow in both pipes. Let all the pipes be h1 m above ground level and the main drain pipe be h2 m below ground level. If the pressure in the pipes in the house is P1 kPa, find the pressure in the main pipe. The density of the water waste is den kg/m3 (g=9.8m/s^2)\n");
        printf("\nSolution;\n");
        printf("\nEnter the value of n1\n");
        scanf("%d",&n1);
        printf("Enter the value of d1 in centimetres\n");
        scanf("%f",&d1);
        printf("Enter the value of v1 in centimetres per second\n");
        scanf("%f",&v1);
        printf("Enter the value of d2 in centimetres\n");
        scanf("%f",&d2);
        d1=d1*0.01;
        d2=d2*0.01;
        v1=v1*0.01;
        A1=(pi*d1*d1)/4;
        A2=(pi*d2*d2)/4;
        v2=(n1*A1*v1)/A2;
        Q1=A1*v1;
        Q2=A2*v2;
        printf("The velocity of the wastewater in the main pipe is %f m/s.\nThe rate of flow in the drainage pipes is %f m^3/s and in the main pipe is %f m^3/s\n",v2,Q1,Q2);
        printf("\nFor the second part:");
        printf("\nEnter the value of h1 in metres\n");
        scanf("%f",&h1);
        printf("Enter the value of h2 in metres\n");
        scanf("%f",&h2);
        printf("Enter the value of P1 in Kilo Pascals\n");
        scanf("%f",&P1);
        printf("Enter the value of den in kilograms per cubic metre\n");
        scanf("%f",&den);
        P1=P1*1000;
        P2=P1+0.5*den*(v1*v1-v2*v2)+den*g*(h1-h2);
        printf("The pressure in the pipes is %f KPa\n3",P2*0.001);
    }
void leveltwo()
    {
        printf("\nLevel Two:\n");
        int na=0,nb=0;
        float d1a=0,d1b=0,v1a=0,v1b=0,A1a=0,A1b=0;
        printf("\nA house has n drainage pipes (na+nb). A certain number (na) of these pipes are d1a cm in diameter and the rest (nb) are d1b cm in diameter. Wastewater flows through some of these pipes (na) at v1a cm/s and through the rest (nb) at v1b cm/s to the main drain pipe. If the main drain pipe is of diameter d2 cm, calculate the velocity of the wastewater in the main drain pipe. Also calculate the rate of flow in all pipes. Let the drainage pipes be h1 m above ground level and the main drain pipe be h2 m below ground level. If the pressure in the pipes in the house is P1 kPa, find the pressure in the main pipe. The density of the water waste is den kg/m3 (g=9.8m/s^2)\n");
        printf("\nSolution;\n");
        printf("\nEnter the value of n1a\n");
        scanf("%d",&na);
        printf("Enter the value of n1b\n");
        scanf("%d",&nb);
        printf("Enter the value of d1a in centimetres\n");
        scanf("%f",&d1a);
        printf("Enter the value of d1b in centimetres\n");
        scanf("%f",&d1b);
        printf("Enter the value of v1a in centimetres per second\n");
        scanf("%f",&v1a);
        printf("Enter the value of v1b in centimetres per second\n");
        scanf("%f",&v1b);
        printf("Enter the value of d2 in centimetres\n");
        scanf("%f",&d2);
        d1a=d1a*0.01;
        d1b=d1b*0.01;
        d2=d2*0.01;
        v1a=v1a*0.01;
        v1b=v1b*0.01;
        A1a=(pi*d1a*d1a)/4;
        A1b=(pi*d1b*d1b)/4;
        A2=(pi*d2*d2)/4;
        v2=(na*(A1a*v1a)+nb*(A1b*v1b))/A2;
        Q1=na*(A1a*v1a)+nb*(A1b*v1b);
        Q2=A2*v2;
        printf("The velocity of the wastewater in the main pipe is %f m/s.\nThe rate of flow in the drainage pipes is %f m^3/s and in the main pipe is %f m^3/s\n",v2,Q1,Q2);
        printf("\nFor the second part:");
        printf("\nEnter the value of h1 in metres\n");
        scanf("%f",&h1);
        printf("Enter the value of h2 in metres\n");
        scanf("%f",&h2);
        printf("Enter the value of P1 in Kilo Pascals\n");
        scanf("%f",&P1);
        printf("Enter the value of den in kilograms per cubic metre\n");
        scanf("%f",&den);
        P1=P1*1000;
        P2=P1+0.5*den*(v1a*v1a+v1b*v1b-v2*v2)+den*g*(h1-h2);
        printf("The pressure in the pipes is %f KPa\n",P2*0.001);
    }
void levelthree()
    {
        printf("\nLevel Three:\n");
        int na=0,nb=0;
        float d1a=0,d1b=0,d2a=0,d2b=0,v1a=0,v1b=0,v2a=0,v2b=0,A1a=0,A1b=0,A2a=0,A2b=0;
        printf("\nA house has n drainage pipes (na+nb). A certain number (na) of these pipes are d1a cm in diameter and the rest (nb) are d1b cm in diameter. Wastewater flows through some of these pipes (na) at v1a cm/s and through the rest (nb) at v1b cm/s to the main drain pipe. If the main drain pipe is divided into two pipes of diameter d2a cm and d2b cm, calculate the velocity of the wastewater in the main drain pipes. Also calculate the rate of flow in all pipes. Let the drainage pipes be h1 m above ground level and the main drain pipe be h2 m below ground level. If the pressure in the pipes in the house is P1 kPa, find the pressure in the main pipe. The density of the water waste is den kg/m3 (g=9.8m/s^2)\n");
        printf("\nSolution;\n");
        printf("\nEnter the value of na\n");
        scanf("%d",&na);
        printf("Enter the value of nb\n");
        scanf("%d",&nb);
        printf("Enter the value of d1a in centimetres\n");
        scanf("%f",&d1a);
        printf("Enter the value of d1b in centimetres\n");
        scanf("%f",&d1b);
         printf("Enter the value of d2a in centimetres\n");
        scanf("%f",&d2a);
        printf("Enter the value of d2b in centimetres\n");
        scanf("%f",&d2b);
        printf("Enter the value of v1a in centimetres per second\n");
        scanf("%f",&v1a);
        printf("Enter the value of v1b in centimetres per second\n");
        scanf("%f",&v1b);
        printf("Enter the value of d2 in centimetres\n");
        printf("Enter the value of v2a in centimetres per squared meter\n");
        scanf("%f",&v2a);
        d1a=d1a*0.01;
        d1b=d1b*0.01;
        d2a=d2a*0.01;
        d2b=d2b*0.01;
        v1a=v1a*0.01;
        v1b=v1b*0.01;
        A1a=(pi*d1a*d1a)/4;
        A1b=(pi*d1b*d1b)/4;
        A2a=(pi*d2a*d2a)/4;
        A2b=(pi*d2b*d2b)/4;
        v2b=((na*(A1a*v1a)+nb*(A1b*v1b))/A2b)-A2a*v2a;
        Q1=na*(A1a*v1a)+nb*(A1b*v1b);
        Q2=A2a*v2a+A2b*v2b;
        printf("The velocity of the wastewater in the main pipe is %f m/s.\nThe rate of flow in the drainage pipes is %f m^3/s and in the main pipe is %f m^3/s\n",v2a,Q1,Q2);
        printf("\nFor the second part:");
        printf("\nEnter the value of h1 in metres\n");
        scanf("%f",&h1);
        printf("Enter the value of h2 in metres\n");
        scanf("%f",&h2);
        printf("Enter the value of P1 in Kilo Pascals\n");
        scanf("%f",&P1);
        printf("Enter the value of den in kilograms per cubic metre\n");
        scanf("%f",&den);
        P1=P1*1000;
        P2=P1+0.5*den*(v1a*v1a+v1b*v1b-v2a*v2a-v2b*v2b)+den*g*(h1-h2);
        printf("The pressure in the pipes is %f KPa\n",P2*0.001);
    }
int main()
{   
    char ex;
    printf("\t\t\t\t\t\t\tWELCOME!\n");
    printf("Enter the level value: \n");
    scanf("%d",&lev);
    if(lev==1){
        levelone();
    }    
    else if (lev==2) leveltwo();
    else if (lev==3) levelthree();
    else{
    printf("Invalid entry!\n");
    }
    printf("Do you want to restart the program? (y/n)\n");
    exit:scanf("%c",&ex);
    if (ex=='Y'||ex=='y'){
        system("CLS");
       main();
    }
    else if(ex=='N'||ex=='n'){
         printf("\t\t\t\t\t\t\tThank You :)");      
    }
    else{
        goto exit;
    }
    return 0;
}

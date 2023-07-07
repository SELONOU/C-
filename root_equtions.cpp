//resolutionn de l'équation du second dégré ax2+bx+c
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
    // (this will create a new file called output.txt if none exists)
    freopen("output.txt", "w", stdout);
    float a, b, c, D, x1, x2, partie_rel, partie_imaginaire ;
    printf("Entrer la valeur de a, b et c \n");
    scanf("%f %f %f", &a, &b, &c);
    D = sqrt(b*b -4*a*c);
    if (D == 0)
    {
        printf("L'équation admet une solution double réelle égale à");


        x1 = -b/(2*a);
        x2 = -b/(2*a);
        printf("La solution 1 est %f et la solution 2 est %f \n", x1,x2);
        printf("Soit SR l'ensemble solutions de cette équation: SR ={%f; %f}" ,x1, x2);
    }
    else if (D>0)
    {
        printf("L'équation admet deux solutions réelles différentes\n");
        x1 = (-b-sqrt(D))/(2*a);
        x2= (-b+sqrt(D))/(2*a);
        printf("La solution 1 est %f et la solution 2 est %f \n", x1, x2);
        printf("Soit SR l'ensemble solutions de cette équation: SR ={%f; %f}" ,x1, x2);
    }
    else
    {
        printf("Les solutions sont complexes ou imaginaires\n");
        partie_rel = -b/(2*a);
        partie_imaginaire = sqrt(-b*b +4*a*c);
        printf("La solution complexe 1 est %f+%fi \n et la solution complexe 2 est %f-%fi \n", partie_rel,partie_imaginaire,partie_rel,partie_imaginaire);
        printf("Soit SR l'ensemble solutions de cette équation: SR ={%f+%fi; %f-%fi}" ,partie_rel,partie_imaginaire,partie_rel,partie_imaginaire);
    }
    return 0;
}

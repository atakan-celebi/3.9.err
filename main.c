#include <stdio.h>

int main(void) {
    float p, d, s;
    char lu;
    printf("inserire il peso");
    scanf("%f", &p);
    printf("inserire la distanza da percorrere (km)");
    scanf("%f", &d);
    printf("la spedizione e' urgente? (si/no)");
    scanf("%c",&lu);
    getchar();
    if (lu = "si") {
        if (d < 100) {
            s = 2.5*p;
            printf("la spesa e' di: %f", s);
        } else if (d > 300) {
            s = 4*p;
            printf("la spesa e' di: %f", s);
        } else {
            s = 3.5*p;
            printf("la spesa e' di: %f", s);
        }
        else {
            if (d < 100) {
                s = 1*p;
                printf("la spesa e' di: %f", s);
            } else if (d > 300) {
                s = 3*p;
                printf("la spesa e' di: %f", s);
            } else {
                s = 2*p;
                printf("la spesa e' di: %f", s);
            }

        }
    }
}





#define PRINT(x,y) printf("x: %d y: %d\n", x,y);
#define PIE 3.14
#define SQR(x) (x)*(x)
#define AOC PIE*(2)*(2)
#define CIRCLE(r) (3.14)*SQR(r)
#define AREA(r) PIE*(r)*(r)
#define ARRAYPF(a,size) \
       { \
           for (int i = 0; i < size; i++) \
           { \
                printf("%d ", a[i]);\
            } \
            printf("\n"); \
        } \

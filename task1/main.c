#include <stdio.h> 
int main(){
         double h=0.001;
         double a=1.0;
         double y;
         double z=a-y;
         double t=0;
         double w;
         double m=1.0;
         
         while(z>0.001*h&&w<m){
            y=a-a*h;
             w=t+h;
             t=w;
             z=a-y;
             a=y;
             printf("%f  %f   %f\n",w,y,z);
             }
         printf("%f   %f\n",y,w);
    return 0;
    }

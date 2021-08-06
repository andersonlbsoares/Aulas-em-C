#include <stdio.h>
#include <math.h>
  void main(){
    float ladoa, ladob, ladoc;
    scanf("%f\n",&ladoa);
    scanf("%f\n",&ladob);
    scanf("%f\n",&ladoc);

    float p = (ladoa + ladob + ladoc)/2;
    float area = p*(p-ladoa)*(p-ladob)*(p-ladoc);
    float areafinal = sqrt(area);
    printf("%.2f\n", areafinal);
}
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

void octagon(double *area, double *perimeter, int length){
  *area = 2 * (1 + sqrt(2)) * pow(length, 2);
  *perimeter = 8 * length; 
  return;
}

int main(){
  double octArea, octPerimeter;
  int sideLength;

  printf("Enter a length of one side of the octagon: \n");
  scanf("%d", &sideLength);

  octagon(&octArea, &octPerimeter, sideLength);
  printf("The perimeter of the octagon is %.2f\n The area of the octagon is %.2f\n",
octPerimeter, octArea);

  return 0;
}


#include<stdio.h>
#include<math.h>

/* Define the function to be integrated here: */
double f(double x){
  return 1/(1+x*x);
}

/*Program begins*/
main(){
  int n,i;
  double a,b,h,x,sum=0,integral;
  /*Ask the user for necessary input */
  printf("\nEnter the no. of sub-intervals(EVEN): ");
  scanf("%d",&n);
  printf("\nEnter the lower limit: ");
  scanf("%lf",&a);
  printf("\nEnter the upper limit: ");
  scanf("%lf",&b);
  /*Begin Simpson's 3/8 Procedure: */
  h=fabs(b-a)/n;
  for(i=1;i<n;i++){
    x=a+i*h;
    if(i%3==0){
      sum=sum+2*f(x);
    }
    else{
      sum=sum+3*f(x);
    }
  }
  integral=3*(h/8)*(f(a)+f(b)+sum);
   /*Print the answer */
  printf("\nThe integral is: %lf\n",integral);
}

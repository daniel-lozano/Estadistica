#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int  main (){

  double *r;
  int N=pow(10,5);
  int M=100;
  int i,j=0;
  FILE *f;
  double dim= rand();
  r=malloc(sizeof(float)*N);
  f=fopen("datos.dat","w");
 

  //  srand(time(NULL));



  //random walk------------------

  for(i=0;i<=N;i++){
    //haciendo un punto
    int x,y=0;
    srand48(i);

    for(j=0;j<=M;j++){
    
      float dim= drand48();
      float dir= drand48();
      //toma valores en x----------------------------
      if(dim<=0.5){
	
	if(dir<=0.5){
	  x=x+1;
	}
	if(dir>0.5){
	  x=x-1;
	}
      }
      //toma valores en y----------------------------
      if(dim>0.5){
	
	if(dir<=0.5){
	  y=y+1;
	}
	if(dir>0.5){
	  y=y-1;
	}
      }
}
    double radio= pow(x*x +y*y,0.5);
    fprintf(f,"%lf\n",radio);
    
}
  printf("numero de puntos %i numero de pasos %i \n",N,M);
 
  // double random=srand48(void);
  //printf("numero de srand 48  %lf \n",random);


  return 0;

}

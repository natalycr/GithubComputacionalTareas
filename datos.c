#include <stdlib.h>
#include <stdio.h>

double  main(){ //(int argc, char **argv){
  double x, y, n;
  int i;

  //double *X;
  //double *Y;

  n=30;// atof(argv[1]);



  X=malloc(n*sizeof(double));
  Y=malloc(n*sizeof(double));

  for(i=0;i<n;i++){

    X[i]= sdrand48(i+n);
    Y[i]= sdrand48(i*n);
}


  FILE *archivo;
  int j;

  archivo=fopen("datosPy.dat","a");
  fprintf(archivo, "%f %f\n", X, Y);
  fclose(archivo);
}

/*
se  pueden haces  array de dos dimenciones  en C 

  double array[n][n];
y  se  llenan con dos  for como en python 
*/

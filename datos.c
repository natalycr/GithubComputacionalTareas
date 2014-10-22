#include <stdlib.h>
#include <stdio.h>

double func_der1(x, y_1,y_2);
double func_der2(x, y_1,y_2);

double  main(){ //(int argc, char **argv){
  double x, y, n;
  int i;
  double *X;
  double *Y;

  n=30;// atof(argv[1]);



  X=malloc(n*sizeof(double));
  Y=malloc(n*sizeof(double));

  for(i=0;i<n;i++){

    x[i]= sdrand48(i+n);
    y_1[i]= sdrand48(i*n);
}

  //// condiciones Iniciales /// /// numneros  aleatorios  entre  menos 10  y 10
  minx=0.0;
  maxx=6.0;
  ale1=1.0;
  ale2=0.0;


  x[0]=minx;
  y_1[0]=ale1;
  y_2[0]=ale2;

  for (i=0;i<n;n++){
    Y_prime1 = func_der1(x, y_1,y_2); 
    y_prime2=fun_der2()
} 

  FILE *archivo;
  int j;

  archivo=fopen("datosPy.dat","a");
  fprintf(archivo, "%f %f\n", X, Y);
  fclose(archivo);
}

double func_der1(x, y_1,y_2){
  return y_2;
}

double fun_der2(x,y_1,y_2){
  return theta*(Y_1 - x);
}

/*
se  pueden haces  array de dos dimenciones  en C 

  double array[n][n];
y  se  llenan con dos  for como en python 
*/

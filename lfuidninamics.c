# include <stdio.h>
# include  <stdlib.h>


double main(){    //(argc*, argv){
  int n_x, n_t, i,j;
  double u,dx, dt, xif;
  FILE *datos;

  //Definimos todo

  n_x=80;
  n_t=300; // atoi(argv[1])

  double X[n_x], U[n_x];

  for (i=0; i<n_x; i++){
    X[i]=(2.0/n_x)*i;
    //printf("%f \n", X[i]);
}


  for (i=0; i<n_x; i++){
    U[i]=1;
    printf("%f \n", U[i]);
}
  
  dx=X[1]-X[0];
  dt=0.001; //atoi(argv[2]) 
  //  printf("%f \n", dt);

  // Condicion inicial  no plana

  for (i=0; i<n_x; i++){
    xif = X[i];
    if( xif<1.25 && xif>0.75 ){
      U[i]=2.0;
}
}

  datos = fopen("datos_c.dat", "w");

  for (j=0;j<n_x;j++){

    fprintf( datos, "%f %f \n",X[j],U[j]);
}
  fclose(datos);
}

//    x=srt(X[i])+ \n;
//  u=srt(U[i])+\n;
//  fprintf( datos, "%f %f \n",x,u);    




/*
 * @Author: Amaan Karim Ahmad <amaankahmad>
 * @Date:   08-03-2020
 * @Filename: LRC.c
 * @Last modified by:   amaankahmad
 * @Last modified time: 09-03-2020
 * @Copyright: @ 2020 Imperial. All rights reserved
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
  double R, L, C;
  double T, q0, i0;
  double Wn, Wd, gamma;
  double A, B, D;
  double mu1, mu2, phi;
  double light_damping, critical_damping, heavy_damping;
  int valid = 0;

  while(!valid) {
    //circuit component inputs
    printf("Enter a value for R in Ohms: ");
    scanf("%lf", &R);
    printf("\nEnter a value for L in Henrys:  ");
    scanf("%lf", &L);
    printf("\nEnter a value for C in Farads:  ");
    scanf("%lf", &C);
    printf("\nHow long is the circuit on for in seconds:  ");
    scanf("%lf", &T);
    printf("\nWhat is the initial charge flowing into the circuit in Coulombs:  ");
    scanf("%lf", &q0);
    printf("\nWhat is the initial current flowing into the circuit in Amps:  ");
    scanf("%lf", &i0);

    //variable calculations
    Wn = 1/sqrt(L*C);
    gamma = (R/2)*sqrt(C/L);
    Wd = Wn*sqrt(1-(gamma*gamma));
    phi = atan((2*gamma*Wn*Wd)/(Wn*Wn)-(Wd*Wd));
    mu1 = -gamma*Wn + Wn*sqrt((gamma*gamma)-1);
    mu2 = -gamma*Wn - Wn*sqrt((gamma*gamma)-1);
    A = (i0 - (q0*mu2))/(mu1 - mu2);
    B = q0 - A;
    D = q0/cos(phi);

    //3 cases
    light_damping = D*exp(gamma*Wn*T)*cos((Wd*T)+phi);
    critical_damping = (A + B)*exp(-Wn*gamma*T);
    heavy_damping = A*exp(mu1*T) + B*exp(mu2*T);

    //informing user of type of damping and outputting calculation values
    if (gamma < 1) { //light damping
      printf("\nSimple Harmonic Motion is LIGHT DAMPING:");
      printf("\nThe charge on the capacitor currently is %lfC", light_damping);
      printf("\nThe current flowing through the circuit currently is %lfA", light_damping/T);
      valid = 1;
    }
    else if (gamma == 1) { //critical_damping
      printf("\nSimple Harmonic Motion is CRITICAL DAMPING:");
      printf("\nThe charge on the capacitor currently is %lfC", critical_damping);
      printf("\nThe current flowing through the circuit currently is %lfA", critical_damping/T);
      valid = 1;
    }
    else if (gamma >1) { //heavy_damping
      printf("\nSimple Harmonic Motion is HEAVY DAMPING:");
      printf("\nThe charge on the capacitor currently is %lfC", heavy_damping);
      printf("\nThe current flowing through the circuit currently is %lfA\n", heavy_damping/T);
      valid = 1;
    }
    //may have to remove
    else; { //input errors
      return 0;
    }
  }

}

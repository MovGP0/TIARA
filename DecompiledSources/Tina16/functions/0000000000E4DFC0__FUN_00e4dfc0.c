/* Ghidra address: 00e4dfc0 */
/* Ghidra symbol: FUN_00e4dfc0 */


void FUN_00e4dfc0(double param_1,double *param_2,double *param_3)

{
  double dVar1;
  
  if (param_1 <= 34.0) {
    if (-34.0 <= param_1) {
      dVar1 = (double)FUN_0040af80();
      *param_2 = dVar1;
      *param_3 = *param_2;
    }
    else {
      *param_2 = 1.713908431e-15;
      *param_3 = 0.0;
    }
  }
  else {
    *param_2 = (param_1 + -33.0) * 583461742500000.0;
    *param_3 = 583461742500000.0;
  }
  return;
}


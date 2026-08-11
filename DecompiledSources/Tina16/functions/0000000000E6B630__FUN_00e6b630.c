/* Ghidra address: 00e6b630 */
/* Ghidra symbol: FUN_00e6b630 */


void FUN_00e6b630(double param_1,double *param_2)

{
  double dVar1;
  
  if (param_1 <= 34.0) {
    if (-34.0 <= param_1) {
      dVar1 = (double)FUN_0040af80();
      *param_2 = dVar1;
    }
    else {
      *param_2 = 1.713908431e-15;
    }
  }
  else {
    *param_2 = (param_1 + -33.0) * 583461742500000.0;
  }
  return;
}


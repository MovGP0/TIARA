/* Ghidra address: 010c93c0 */
/* Ghidra symbol: FUN_010c93c0 */


double FUN_010c93c0(double *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar3 = *param_1;
  dVar1 = param_1[1];
  if (dVar3 == 0.0) {
    if (dVar1 <= 0.0) {
      if (dVar1 == 0.0) {
        dVar2 = 0.0;
      }
      else {
        dVar2 = -1.5707963267948966;
      }
    }
    else {
      dVar2 = 1.5707963267948966;
    }
  }
  else {
    dVar2 = (double)FUN_0040c660(dVar1 / dVar3);
  }
  if (dVar3 < 0.0) {
    dVar3 = (double)FUN_0040c850(dVar1);
    if (1e-10 <= dVar3) {
      if (dVar1 <= 0.0) {
        dVar2 = dVar2 - 3.141592653589793;
      }
      else {
        dVar2 = dVar2 + 3.141592653589793;
      }
    }
    else {
      dVar2 = 3.141592653589793;
    }
  }
  return dVar2;
}


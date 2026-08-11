/* Ghidra address: 00c445d0 */
/* Ghidra symbol: FUN_00c445d0 */


double FUN_00c445d0(double *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = *param_1;
  dVar2 = param_1[1];
  if (dVar1 == 0.0) {
    if (dVar2 <= 0.0) {
      if (dVar2 == 0.0) {
        dVar3 = 0.0;
      }
      else {
        dVar3 = -1.5707963267948966;
      }
    }
    else {
      dVar3 = 1.5707963267948966;
    }
  }
  else {
    dVar3 = (double)FUN_0040c660(dVar2 / dVar1);
  }
  if (dVar1 < 0.0) {
    if (dVar2 == 0.0) {
      dVar3 = 3.141592653589793;
    }
    else if (dVar2 <= 0.0) {
      dVar3 = dVar3 - 3.141592653589793;
    }
    else {
      dVar3 = dVar3 + 3.141592653589793;
    }
  }
  return dVar3;
}


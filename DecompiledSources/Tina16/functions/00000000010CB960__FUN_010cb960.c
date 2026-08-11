/* Ghidra address: 010cb960 */
/* Ghidra symbol: FUN_010cb960 */


void FUN_010cb960(double param_1,double *param_2,double *param_3)

{
  byte bVar1;
  double dVar2;
  double dVar3;
  
  bVar1 = 0;
  if (param_1 == 0.0) {
    *param_2 = 0.0;
    *param_3 = 0.0;
  }
  else {
    dVar2 = (double)FUN_0040c850(param_1);
    dVar3 = param_1;
    if (dVar2 <= 1.0) {
      while (dVar2 = (double)FUN_0040c850(dVar3), dVar2 < 1.0) {
        dVar3 = dVar3 * 10.0;
        bVar1 = bVar1 + 1;
      }
      *param_3 = (double)(int)-(uint)bVar1;
    }
    else {
      while (dVar2 = (double)FUN_0040c850(dVar3), 10.0 <= dVar2) {
        bVar1 = bVar1 + 1;
        dVar3 = dVar3 / 10.0;
      }
      *param_3 = (double)bVar1;
    }
    *param_2 = dVar3;
  }
  dVar3 = (double)FUN_0040c850(param_1);
  if ((dVar3 < 1.0) && (dVar3 = (double)FUN_0040c850(*param_2 - 10.0), dVar3 < 1e-12)) {
    *param_2 = 1.0;
    *param_3 = *param_3 + 1.0;
  }
  return;
}


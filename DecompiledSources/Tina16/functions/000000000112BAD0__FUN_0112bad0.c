/* Ghidra address: 0112bad0 */
/* Ghidra symbol: FUN_0112bad0 */


double FUN_0112bad0(undefined2 *param_1)

{
  char cVar1;
  double dVar2;
  double dVar3;
  
  cVar1 = FUN_01129a60(param_1);
  if (cVar1 == '\0') {
    dVar2 = (double)FUN_00448c80(*param_1,param_1[1],param_1[2]);
    if (dVar2 < 0.0) {
      dVar3 = (double)FUN_00448a90(param_1[3],param_1[4],param_1[5],param_1[6]);
      dVar2 = dVar2 - dVar3;
    }
    else {
      dVar3 = (double)FUN_00448a90(param_1[3],param_1[4],param_1[5],param_1[6]);
      dVar2 = dVar2 + dVar3;
    }
  }
  else {
    dVar2 = 0.0;
  }
  return dVar2;
}


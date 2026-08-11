/* Ghidra address: 010c9000 */
/* Ghidra symbol: FUN_010c9000 */


double FUN_010c9000(double *param_1,double param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  
  dVar4 = 0.0;
  *param_4 = 0;
  iVar2 = 0;
  if (*param_1 < param_2) {
    iVar1 = param_3 + -1;
    if (param_2 < param_1[iVar1]) {
      iVar1 = 0;
      if (param_3 - 2U < 0x80000000) {
        iVar3 = param_3 + -1;
        iVar2 = 0;
        do {
          if ((param_1[iVar1] <= param_2) && (param_2 < param_1[iVar1 + 1])) {
            iVar2 = iVar1 + 1;
            if (param_1[iVar2] - param_2 < param_2 - param_1[iVar1]) {
              dVar4 = param_1[iVar2];
            }
            else {
              dVar4 = param_1[iVar1];
              iVar2 = iVar1;
            }
          }
          iVar1 = iVar1 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
    else {
      dVar4 = param_1[iVar1];
      iVar2 = iVar1;
    }
  }
  else {
    dVar4 = *param_1;
    iVar2 = 0;
  }
  if (iVar2 == param_3 + -1) {
    dVar4 = 1.0;
    *param_4 = 1;
  }
  return dVar4;
}


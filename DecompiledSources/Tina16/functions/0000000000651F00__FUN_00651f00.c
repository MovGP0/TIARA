/* Ghidra address: 00651f00 */
/* Ghidra symbol: FUN_00651f00 */


void FUN_00651f00(undefined8 param_1,double *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  double *pdVar3;
  
  iVar1 = 0;
  iVar2 = 1;
  pdVar3 = param_2;
  if (0 < param_3) {
    do {
      pdVar3 = pdVar3 + 1;
      if (*pdVar3 <= param_2[iVar1] && param_2[iVar1] != *pdVar3) {
        iVar1 = iVar2;
      }
      iVar2 = iVar2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}


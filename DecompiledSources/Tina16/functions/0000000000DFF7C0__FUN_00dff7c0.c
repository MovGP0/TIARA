/* Ghidra address: 00dff7c0 */
/* Ghidra symbol: FUN_00dff7c0 */


void FUN_00dff7c0(short *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  short sVar3;
  
  iVar2 = param_2;
  if (param_2 == 1) {
    *param_1 = *param_1 + 1;
  }
  else {
    do {
      iVar1 = iVar2;
      iVar2 = iVar1 + -1;
      if (iVar2 < 0) break;
    } while (param_1[iVar2] == 0);
    if (iVar2 < 0) {
      *param_1 = *param_1 + 1;
    }
    else if (iVar2 < param_2 + -1) {
      param_1[iVar2] = param_1[iVar2] + -1;
      param_1[iVar1] = param_1[iVar1] + 1;
    }
    else {
      for (iVar2 = 0; (iVar2 <= iVar1 + -2 && (param_1[iVar2] == 0)); iVar2 = iVar2 + 1) {
      }
      if (iVar1 + -2 < iVar2) {
        *param_1 = param_1[param_2 + -1] + 1;
        param_1[param_2 + -1] = 0;
      }
      else {
        sVar3 = 1;
        while (iVar2 = param_2 + -1, param_1[param_2 + -2] == 0) {
          sVar3 = sVar3 + param_1[iVar2];
          param_1[iVar2] = 0;
          param_2 = iVar2;
        }
        param_1[iVar2] = param_1[iVar2] + sVar3;
        param_1[param_2 + -2] = param_1[param_2 + -2] + -1;
      }
    }
  }
  return;
}


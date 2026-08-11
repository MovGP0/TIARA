/* Ghidra address: 00593df0 */
/* Ghidra symbol: FUN_00593df0 */


int FUN_00593df0(undefined8 param_1,byte *param_2,byte *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == param_3) {
    iVar1 = 0;
  }
  else if (param_2 == (byte *)0x0) {
    iVar1 = -*(int *)(param_3 + -4);
  }
  else if (param_3 == (byte *)0x0) {
    iVar1 = *(int *)(param_2 + -4);
  }
  else {
    iVar1 = (uint)*param_2 - (uint)*param_3;
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_2 + -4) + -1;
      iVar3 = *(int *)(param_3 + -4) + -1;
      iVar2 = iVar1;
      if (iVar3 < iVar1) {
        iVar2 = iVar3;
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + 1;
      for (; 0 < iVar2; iVar2 = iVar2 + -2) {
        if ((uint)*param_2 - (uint)*param_3 != 0) {
          return (uint)*param_2 - (uint)*param_3;
        }
        if (iVar2 == 1) break;
        if ((uint)param_2[1] - (uint)param_3[1] != 0) {
          return (uint)param_2[1] - (uint)param_3[1];
        }
        param_2 = param_2 + 2;
        param_3 = param_3 + 2;
      }
      iVar1 = iVar1 - iVar3;
    }
  }
  return iVar1;
}


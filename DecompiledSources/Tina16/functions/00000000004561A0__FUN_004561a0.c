/* Ghidra address: 004561a0 */
/* Ghidra symbol: FUN_004561a0 */


int FUN_004561a0(longlong param_1,int param_2,longlong param_3,int param_4,undefined4 param_5,
                undefined4 param_6,undefined2 param_7,undefined4 param_8)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  
  iVar1 = 0;
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + -4);
  }
  if (iVar1 == 0) {
    bVar3 = true;
  }
  else {
    iVar1 = 0;
    if (param_3 != 0) {
      iVar1 = *(int *)(param_3 + -4);
    }
    bVar3 = iVar1 == 0;
  }
  if (bVar3) {
    iVar1 = 0;
    if (param_1 != 0) {
      iVar1 = *(int *)(param_1 + -4);
    }
    if (iVar1 < 1) {
      iVar1 = 0;
      if (param_3 != 0) {
        iVar1 = *(int *)(param_3 + -4);
      }
      if (iVar1 < 1) {
        iVar1 = 0;
      }
      else {
        iVar1 = -1;
      }
    }
    else {
      iVar1 = 1;
    }
  }
  else {
    uVar2 = FUN_00456110(param_7);
    iVar1 = FUN_00427780(param_8,uVar2,param_1 + (longlong)param_2 * 2,param_5,
                         param_3 + (longlong)param_4 * 2,param_6);
    iVar1 = iVar1 + -2;
  }
  return iVar1;
}


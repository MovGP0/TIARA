/* Ghidra address: 00416ea0 */
/* Ghidra symbol: FUN_00416ea0 */


void FUN_00416ea0(longlong param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined4 local_2c;
  
  iVar2 = 0;
  if (param_1 != 0) {
    iVar2 = *(int *)(param_1 + -4);
  }
  if (0 < iVar2) {
    iVar3 = 0;
    lVar1 = *param_2;
    if (lVar1 != 0) {
      iVar3 = *(int *)(lVar1 + -4);
    }
    if (param_3 < 1) {
      local_2c = 0;
    }
    else {
      local_2c = param_3 + -1;
      if (iVar3 < param_3 + -1) {
        local_2c = iVar3;
      }
    }
    if (iVar3 + iVar2 < 0) {
      FUN_00410ab0();
    }
    FUN_004169f0(param_2,iVar3 + iVar2);
    if (local_2c < iVar3) {
      FUN_00409a70(*param_2 + (longlong)local_2c * 2,*param_2 + (longlong)(local_2c + iVar2) * 2,
                   (longlong)((iVar3 - local_2c) * 2));
    }
    if (param_1 == lVar1) {
      FUN_00409a70(*param_2,*param_2 + (longlong)local_2c * 2,(longlong)(iVar2 * 2));
    }
    else {
      FUN_00409a70(param_1,*param_2 + (longlong)local_2c * 2,(longlong)(iVar2 * 2));
    }
  }
  return;
}


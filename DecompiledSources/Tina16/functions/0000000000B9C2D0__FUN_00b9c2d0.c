/* Ghidra address: 00b9c2d0 */
/* Ghidra symbol: FUN_00b9c2d0 */


void FUN_00b9c2d0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    iVar3 = *(int *)(param_2 + -4);
  }
  if (iVar3 != 0) {
    if (*(int *)(param_1 + 0x14) < *(int *)(param_1 + 0x10) + iVar3 + -1) {
      FUN_00b9c140(param_1);
    }
    if (*(int *)(param_1 + 0x14) < iVar3) {
      FUN_00b9c360(param_1,param_2,0xffffffff);
    }
    else {
      uVar1 = FUN_00416740(param_2);
      lVar2 = FUN_00414de0(param_1 + 8);
      FUN_00409a70(uVar1,lVar2 + -2 + (longlong)*(int *)(param_1 + 0x10) * 2,(longlong)(iVar3 * 2));
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + iVar3;
    }
  }
  return;
}


/* Ghidra address: 01bb0550 */
/* Ghidra symbol: FUN_01bb0550 */


void FUN_01bb0550(longlong param_1,short param_2,longlong param_3)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_3 != 0) {
    iVar2 = *(int *)(param_3 + -4);
  }
  if (0xff < iVar2) {
    param_2 = param_2 + -5000;
  }
  FUN_01bb0040(param_1,param_2,iVar2);
  FUN_01baffe0(param_1,iVar2);
  uVar1 = FUN_00415ab0(param_3);
  FUN_00409a70(uVar1,*(longlong *)(param_1 + 0x10) + (longlong)*(int *)(param_1 + 0x18),
               (longlong)iVar2);
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + iVar2;
  return;
}


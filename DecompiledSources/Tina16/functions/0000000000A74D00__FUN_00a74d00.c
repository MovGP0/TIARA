/* Ghidra address: 00a74d00 */
/* Ghidra symbol: FUN_00a74d00 */


void FUN_00a74d00(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x14) + *(int *)(param_2 + 0x18);
  iVar1 = FUN_00a74da0(param_1);
  if (iVar1 <= iVar3) {
    FUN_00a74dc0(param_1,iVar3 + 0x32);
  }
  uVar2 = FUN_00414de0(param_2 + 8);
  FUN_00409a70(uVar2,*(longlong *)(param_1 + 0x18) + (longlong)(*(int *)(param_1 + 0x14) + 1) * 2,
               (longlong)(*(int *)(param_2 + 0x18) * 2));
  FUN_00409a70(*(longlong *)(param_2 + 0x10) + 4,
               *(longlong *)(param_1 + 0x20) + (longlong)(*(int *)(param_1 + 0x14) + 1) * 4,
               (longlong)(*(int *)(param_2 + 0x18) * 4));
  *(int *)(param_1 + 0x14) = iVar3;
  *(undefined1 *)(param_1 + 0x10) = 0;
  return;
}


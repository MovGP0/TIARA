/* Ghidra address: 00a74ad0 */
/* Ghidra symbol: FUN_00a74ad0 */


void FUN_00a74ad0(longlong param_1,longlong param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  if (param_2 != 0) {
    iVar5 = *(int *)(param_2 + -4);
  }
  if (0 < iVar5) {
    iVar4 = *(int *)(param_1 + 0x18) + iVar5;
    iVar1 = FUN_00a74940(param_1);
    if (iVar1 <= iVar4) {
      FUN_00a74a20(param_1,iVar4 + 0x32);
    }
    uVar2 = FUN_00416740(param_2);
    lVar3 = FUN_00414de0(param_1 + 8);
    FUN_00409a70(uVar2,lVar3 + -2 + (longlong)(*(int *)(param_1 + 0x18) + 1) * 2,
                 (longlong)(iVar5 * 2));
    while (*(int *)(param_1 + 0x18) < iVar4) {
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      *(undefined4 *)(*(longlong *)(param_1 + 0x10) + (longlong)*(int *)(param_1 + 0x18) * 4) =
           param_3;
    }
  }
  return;
}


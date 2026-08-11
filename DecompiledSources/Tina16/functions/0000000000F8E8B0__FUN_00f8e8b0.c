/* Ghidra address: 00f8e8b0 */
/* Ghidra symbol: FUN_00f8e8b0 */


void FUN_00f8e8b0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x34d8) + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x34d8),iVar2);
      _MCU_ToggleBreakPoint(*(undefined8 *)(param_1 + 0x60),*(undefined4 *)(lVar1 + 0x10));
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}


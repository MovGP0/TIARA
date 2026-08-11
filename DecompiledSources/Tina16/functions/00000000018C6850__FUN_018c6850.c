/* Ghidra address: 018c6850 */
/* Ghidra symbol: FUN_018c6850 */


void FUN_018c6850(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = 0;
  while (iVar2 < *(int *)(*(longlong *)(param_1 + 0xa8) + 0x10)) {
    lVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xa8),iVar2);
    if (lVar1 == 0) {
      FUN_004ae870(*(undefined8 *)(param_1 + 0xa8),iVar2);
    }
    else {
      iVar2 = iVar2 + 1;
    }
  }
  return;
}


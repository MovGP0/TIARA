/* Ghidra address: 00cf0e80 */
/* Ghidra symbol: FUN_00cf0e80 */


void FUN_00cf0e80(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  *(undefined8 *)(param_1 + 0x40) = 0;
  if (0 < *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x10) + 0x10)) {
    iVar2 = 0;
    iVar3 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x10) + 0x10);
    if (-1 < iVar3 + -1) {
      do {
        FUN_00cf1550(*(undefined8 *)(param_1 + 0x48),iVar2);
        lVar1 = FUN_00cf1b70();
        *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + lVar1;
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    iVar3 = 0;
    if (*(longlong *)(param_1 + 0x18) != 0) {
      iVar3 = *(int *)(*(longlong *)(param_1 + 0x18) + -4);
    }
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 6 + (longlong)iVar3;
  }
  return;
}


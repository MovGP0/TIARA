/* Ghidra address: 010b2860 */
/* Ghidra symbol: FUN_010b2860 */


void FUN_010b2860(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  *(undefined1 *)(param_1 + 0xc) = 0;
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x18),iVar2);
      *(undefined1 *)(lVar1 + 0x28) = 0;
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}


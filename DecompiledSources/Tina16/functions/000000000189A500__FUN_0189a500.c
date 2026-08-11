/* Ghidra address: 0189a500 */
/* Ghidra symbol: FUN_0189a500 */


int FUN_0189a500(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = 0;
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x4b8) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x4b8),iVar3);
      iVar2 = iVar2 + *(int *)(lVar1 + 0x98);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return iVar2;
}


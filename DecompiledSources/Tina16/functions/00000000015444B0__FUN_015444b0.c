/* Ghidra address: 015444b0 */
/* Ghidra symbol: FUN_015444b0 */


undefined8 FUN_015444b0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar1 = FUN_01d347d0(*(undefined8 *)(param_1 + 0x10),iVar2);
      if (*(int *)(lVar1 + 0x14) == 1) {
        return 1;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return 0;
}


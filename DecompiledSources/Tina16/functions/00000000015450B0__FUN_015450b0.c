/* Ghidra address: 015450b0 */
/* Ghidra symbol: FUN_015450b0 */


undefined8 FUN_015450b0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x28) + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar1 = FUN_01d347d0(*(undefined8 *)(param_1 + 0x28),iVar2);
      if (*(longlong *)(lVar1 + 0x18) == *(longlong *)(param_2 + 8)) {
        return 1;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return 0;
}


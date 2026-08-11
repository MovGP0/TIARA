/* Ghidra address: 01497e80 */
/* Ghidra symbol: FUN_01497e80 */


void FUN_01497e80(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(longlong *)(param_1 + 3000) + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 3000),iVar2);
      if (*(longlong *)(lVar1 + 8) != 0) {
        FUN_01d0a340(*(longlong *)(lVar1 + 8),0);
      }
      if (*(longlong *)(lVar1 + 0x10) != 0) {
        FUN_0149efc0(*(longlong *)(lVar1 + 0x10),0);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}


/* Ghidra address: 018b9500 */
/* Ghidra symbol: FUN_018b9500 */


int FUN_018b9500(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x88) + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar1 = FUN_004aeac0(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x88),iVar2);
      if (*(longlong *)(lVar1 + 0x110) == param_2) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return -1;
}


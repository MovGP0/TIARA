/* Ghidra address: 00a73ed0 */
/* Ghidra symbol: FUN_00a73ed0 */


int FUN_00a73ed0(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = 0x7fffffff;
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar1 = FUN_00a78410(*(undefined8 *)(param_1 + 0x20),iVar3);
      if ((((*(int *)(lVar1 + 0xc) <= param_2) && (param_2 < *(int *)(lVar1 + 0x10))) &&
          (*(int *)(lVar1 + 8) < iVar2)) &&
         ((*(longlong *)(lVar1 + 0x18) == 0 ||
          (*(longlong *)(lVar1 + 0x18) == *(longlong *)(param_1 + 0x28))))) {
        iVar2 = *(int *)(lVar1 + 8);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (iVar2 == 0x7fffffff) {
    iVar4 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x10) + -1;
    iVar2 = 0;
    if (-1 < iVar4) {
      do {
        lVar1 = FUN_00a78410(*(undefined8 *)(param_1 + 0x18),iVar4);
        if (*(longlong *)(lVar1 + 0x18) == *(longlong *)(param_1 + 0x28)) {
          iVar2 = *(int *)(lVar1 + 8);
          break;
        }
        iVar4 = iVar4 + -1;
        iVar2 = 0;
      } while (iVar4 != -1);
    }
    iVar2 = *(int *)(param_1 + 0xc) + iVar2;
  }
  return iVar2;
}


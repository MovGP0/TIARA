/* Ghidra address: 00a73fc0 */
/* Ghidra symbol: FUN_00a73fc0 */


int FUN_00a73fc0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = 0;
  iVar3 = 0;
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x10);
  if (-1 < iVar4 + -1) {
    do {
      lVar1 = FUN_00a78410(*(undefined8 *)(param_1 + 0x18),iVar3);
      if ((*(longlong *)(lVar1 + 0x18) == 0) && (iVar2 < *(int *)(lVar1 + 0x10))) {
        iVar2 = *(int *)(lVar1 + 0x10);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar1 = FUN_00a78410(*(undefined8 *)(param_1 + 0x20),iVar3);
      if ((*(longlong *)(lVar1 + 0x18) == 0) && (iVar2 < *(int *)(lVar1 + 0x10))) {
        iVar2 = *(int *)(lVar1 + 0x10);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return iVar2;
}


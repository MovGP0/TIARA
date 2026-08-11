/* Ghidra address: 00a74740 */
/* Ghidra symbol: FUN_00a74740 */


int FUN_00a74740(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = 0;
  iVar5 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x10);
  iVar4 = param_2;
  if (-1 < iVar5 + -1) {
    do {
      lVar1 = FUN_00a78410(*(undefined8 *)(param_1 + 0x18),iVar2);
      if (((*(longlong *)(lVar1 + 0x18) == 0) && (param_2 < *(int *)(lVar1 + 0x10))) &&
         ((*(int *)(lVar1 + 0x10) < iVar4 || (iVar4 == param_2)))) {
        iVar4 = *(int *)(lVar1 + 0x10);
      }
      iVar2 = iVar2 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  iVar5 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x10);
  iVar3 = 0;
  iVar2 = param_2;
  if (-1 < iVar5 + -1) {
    do {
      lVar1 = FUN_00a78410(*(undefined8 *)(param_1 + 0x20),iVar3);
      if (((*(longlong *)(lVar1 + 0x18) == 0) && (param_2 < *(int *)(lVar1 + 0x10))) &&
         ((*(int *)(lVar1 + 0x10) < iVar2 || (iVar2 == param_2)))) {
        iVar2 = *(int *)(lVar1 + 0x10);
      }
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  iVar5 = iVar2;
  if (((iVar4 != param_2) && (iVar5 = iVar4, iVar2 != param_2)) && (iVar5 = iVar2, iVar4 < iVar2)) {
    iVar5 = iVar4;
  }
  return iVar5;
}


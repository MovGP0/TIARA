/* Ghidra address: 00a73e00 */
/* Ghidra symbol: FUN_00a73e00 */


int FUN_00a73e00(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = -0x7fffffff;
  iVar4 = 0;
  iVar5 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x10);
  iVar3 = 0;
  if (-1 < iVar5 + -1) {
    do {
      lVar1 = FUN_00a78410(*(undefined8 *)(param_1 + 0x18),iVar3);
      if ((((*(int *)(lVar1 + 0xc) <= param_2) && (param_2 < *(int *)(lVar1 + 0x10))) &&
          (iVar2 < *(int *)(lVar1 + 8))) &&
         ((*(longlong *)(lVar1 + 0x18) == 0 ||
          (*(longlong *)(lVar1 + 0x18) == *(longlong *)(param_1 + 0x28))))) {
        iVar2 = *(int *)(lVar1 + 8);
      }
      if (*(longlong *)(lVar1 + 0x18) == *(longlong *)(param_1 + 0x28)) {
        iVar4 = *(int *)(lVar1 + 8);
      }
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if (iVar2 == -0x7fffffff) {
    iVar2 = iVar4;
  }
  return iVar2;
}


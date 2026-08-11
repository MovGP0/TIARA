/* Ghidra address: 00a79870 */
/* Ghidra symbol: FUN_00a79870 */


undefined8 FUN_00a79870(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(longlong *)(param_1 + 8) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar2 = FUN_00a79790(param_1,(longlong)iVar3);
      if (*(longlong *)(lVar2 + 8) == param_2) {
        lVar2 = FUN_00a79790(param_1,(longlong)iVar3);
        uVar1 = *(undefined8 *)(lVar2 + 0x10);
        FUN_004ae870(*(undefined8 *)(param_1 + 8),iVar3);
        return uVar1;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return 0;
}


/* Ghidra address: 00a79720 */
/* Ghidra symbol: FUN_00a79720 */


undefined8 FUN_00a79720(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(longlong *)(param_1 + 8) + 0x10);
  iVar2 = 0;
  if (iVar3 - 1U < 0x80000000) {
    do {
      lVar1 = FUN_00a79790(param_1,(longlong)iVar2);
      if (*(longlong *)(lVar1 + 8) == param_2) {
        lVar1 = FUN_00a79790(param_1,(longlong)iVar2);
        return *(undefined8 *)(lVar1 + 0x10);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return 0;
}


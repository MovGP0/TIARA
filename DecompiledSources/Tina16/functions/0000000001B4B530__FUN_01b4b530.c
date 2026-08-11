/* Ghidra address: 01b4b530 */
/* Ghidra symbol: FUN_01b4b530 */


undefined8 FUN_01b4b530(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar1 = FUN_01d347d0(param_1,iVar3);
      if (*(longlong *)(lVar1 + 0x10) == param_2) {
        uVar2 = FUN_01d347d0(param_1,iVar3);
        return uVar2;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return 0;
}


/* Ghidra address: 01571d50 */
/* Ghidra symbol: FUN_01571d50 */


undefined8 FUN_01571d50(longlong param_1,int param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar1 = FUN_004aeac0(param_1,iVar2);
      if ((*(int *)(lVar1 + 8) == param_2) && (*(int *)(lVar1 + 0x10) == param_3)) {
        return 1;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return 0;
}


/* Ghidra address: 00f75130 */
/* Ghidra symbol: FUN_00f75130 */


void FUN_00f75130(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar1 = FUN_004aeac0(param_1,iVar2);
      if (param_2 == lVar1) {
        FUN_00f6f900(lVar1,2);
      }
      else {
        FUN_00f6f910(lVar1,2);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}


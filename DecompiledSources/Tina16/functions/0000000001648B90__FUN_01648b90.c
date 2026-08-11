/* Ghidra address: 01648b90 */
/* Ghidra symbol: FUN_01648b90 */


int FUN_01648b90(longlong param_1,char param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = *(int *)(param_1 + 0x10);
  iVar2 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar1 = FUN_004aeac0(param_1,iVar2);
      if (param_2 == *(char *)(lVar1 + 0x28)) {
        iVar3 = iVar3 + 1;
      }
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return iVar3;
}


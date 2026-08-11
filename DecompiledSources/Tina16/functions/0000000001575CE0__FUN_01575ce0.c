/* Ghidra address: 01575ce0 */
/* Ghidra symbol: FUN_01575ce0 */


longlong FUN_01575ce0(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = *(int *)(param_1 + 0x10);
  if (-1 < iVar3 + -1) {
    do {
      lVar1 = FUN_004aeac0(param_1,iVar2);
      if (*(int *)(lVar1 + 8) == param_2) {
        return lVar1;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return 0;
}


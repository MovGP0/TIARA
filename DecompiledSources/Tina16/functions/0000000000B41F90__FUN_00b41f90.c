/* Ghidra address: 00b41f90 */
/* Ghidra symbol: FUN_00b41f90 */


int FUN_00b41f90(undefined8 param_1,int param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  iVar1 = FUN_00b41f80();
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar2 = FUN_00b41f60(param_1,iVar3);
      if ((*(int *)(lVar2 + 0x2c) == param_2) &&
         (lVar2 = FUN_00b41f60(param_1,iVar3), *(int *)(lVar2 + 8) == param_3)) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return -1;
}


/* Ghidra address: 0054ca20 */
/* Ghidra symbol: FUN_0054ca20 */


int FUN_0054ca20(void)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_00547190();
  iVar1 = *(int *)(lVar2 + 1);
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  return iVar1;
}


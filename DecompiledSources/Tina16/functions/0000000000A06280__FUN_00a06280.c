/* Ghidra address: 00a06280 */
/* Ghidra symbol: FUN_00a06280 */


int FUN_00a06280(void)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_00a07450();
  if (lVar2 == 0) {
    iVar1 = 1;
  }
  else {
    iVar1 = *(int *)(lVar2 + 0xc);
    if (iVar1 < 1) {
      iVar1 = 1;
    }
  }
  return iVar1;
}


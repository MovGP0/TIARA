/* Ghidra address: 0185f3a0 */
/* Ghidra symbol: FUN_0185f3a0 */


int FUN_0185f3a0(void)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_01860480();
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


/* Ghidra address: 006ddf30 */
/* Ghidra symbol: FUN_006ddf30 */


int FUN_006ddf30(void)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = 0;
  for (lVar1 = FUN_006dd390(); lVar1 != 0; lVar1 = FUN_006dd390(lVar1)) {
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}


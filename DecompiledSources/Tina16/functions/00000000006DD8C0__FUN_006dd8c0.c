/* Ghidra address: 006dd8c0 */
/* Ghidra symbol: FUN_006dd8c0 */


int FUN_006dd8c0(void)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = 0;
  for (lVar1 = FUN_006dd580(); lVar1 != 0; lVar1 = FUN_006dd540(lVar1,lVar1)) {
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}


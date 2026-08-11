/* Ghidra address: 006dd870 */
/* Ghidra symbol: FUN_006dd870 */


int FUN_006dd870(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = -1;
  for (lVar1 = FUN_006dd580(param_1); (lVar1 != 0 && (iVar2 = iVar2 + 1, lVar1 != param_2));
      lVar1 = FUN_006dd540(param_1,lVar1)) {
  }
  if (lVar1 == 0) {
    iVar2 = -1;
  }
  return iVar2;
}


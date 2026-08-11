/* Ghidra address: 006dcde0 */
/* Ghidra symbol: FUN_006dcde0 */


undefined8 FUN_006dcde0(undefined8 param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = 0;
  lVar1 = FUN_006dd580();
  do {
    if (lVar1 == 0) {
      if (iVar2 != param_2) {
        return 0;
      }
      return 1;
    }
    iVar2 = iVar2 + 1;
    lVar1 = FUN_006dd540(lVar1,lVar1);
  } while (iVar2 <= param_2);
  return 0;
}


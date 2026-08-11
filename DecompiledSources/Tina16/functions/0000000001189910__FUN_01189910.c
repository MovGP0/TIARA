/* Ghidra address: 01189910 */
/* Ghidra symbol: FUN_01189910 */


int FUN_01189910(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = FUN_0118aa70(param_1);
  if (iVar1 == 0) {
    iVar1 = FUN_0118ba10(param_1);
    if (iVar1 == 0) {
      iVar1 = FUN_01191740(param_1);
      if (iVar1 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = iVar1 * 10 + 3;
      }
    }
    else {
      iVar1 = iVar1 * 10 + 2;
    }
  }
  else {
    iVar1 = iVar1 * 10 + 1;
  }
  return iVar1;
}


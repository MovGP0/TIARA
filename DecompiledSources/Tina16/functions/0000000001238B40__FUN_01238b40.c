/* Ghidra address: 01238b40 */
/* Ghidra symbol: FUN_01238b40 */


int FUN_01238b40(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = FUN_01237010(param_1);
  if (iVar1 == 0) {
    iVar1 = FUN_01237590(param_1);
    if (iVar1 == 0) {
      iVar1 = FUN_01238910(param_1);
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


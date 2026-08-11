/* Ghidra address: 0118a3b0 */
/* Ghidra symbol: FUN_0118a3b0 */


int FUN_0118a3b0(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = FUN_01192ca0(param_1);
  if (iVar1 == 0) {
    iVar1 = FUN_0118aa70(param_1);
    if (iVar1 == 0) {
      iVar1 = FUN_0118ba10(param_1);
      if (iVar1 == 0) {
        iVar1 = FUN_01191740(param_1);
        if (iVar1 == 0) {
          iVar1 = FUN_011895a0(param_1);
          if (iVar1 == 0) {
            iVar1 = FUN_01192ab0(param_1);
            if (iVar1 == 0) {
              iVar1 = 0;
            }
            else {
              iVar1 = iVar1 * 10 + 6;
            }
          }
          else {
            iVar1 = iVar1 * 10 + 5;
          }
        }
        else {
          iVar1 = iVar1 * 10 + 4;
        }
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


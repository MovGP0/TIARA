/* Ghidra address: 00c1a350 */
/* Ghidra symbol: FUN_00c1a350 */


int FUN_00c1a350(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = 1;
    iVar2 = 2;
    if (2 < param_1) {
      do {
        iVar1 = iVar1 + 1;
        iVar2 = iVar2 * 2;
      } while (iVar2 < param_1);
    }
  }
  return iVar1;
}


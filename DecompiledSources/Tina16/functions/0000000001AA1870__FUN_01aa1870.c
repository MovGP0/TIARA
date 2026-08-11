/* Ghidra address: 01aa1870 */
/* Ghidra symbol: FUN_01aa1870 */


int FUN_01aa1870(undefined4 param_1,longlong param_2,int param_3)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 1;
  if (0 < param_3) {
    do {
      cVar1 = FUN_01aa1820(*(undefined4 *)(param_2 + -4 + (longlong)iVar2 * 4),param_1,4);
      if (cVar1 != '\0') {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return -1;
}


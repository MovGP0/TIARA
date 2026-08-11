/* Ghidra address: 0040f780 */
/* Ghidra symbol: FUN_0040f780 */


undefined8 FUN_0040f780(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_3 - 1U < 0x80000000) {
    do {
      if (*(char *)(param_1 + iVar1) != *(char *)(param_2 + iVar1)) {
        return 0;
      }
      iVar1 = iVar1 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return 1;
}


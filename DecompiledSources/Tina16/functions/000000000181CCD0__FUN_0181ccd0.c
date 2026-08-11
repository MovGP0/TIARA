/* Ghidra address: 0181ccd0 */
/* Ghidra symbol: FUN_0181ccd0 */


void FUN_0181ccd0(longlong param_1,char param_2)

{
  *(char *)(param_1 + 0x700) = param_2;
  if (param_2 != '\0') {
    FUN_00805200();
  }
  return;
}


/* Ghidra address: 007e7050 */
/* Ghidra symbol: FUN_007e7050 */


void FUN_007e7050(longlong param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x91)) {
    *(char *)(param_1 + 0x91) = param_2;
    FUN_007e7070();
  }
  return;
}


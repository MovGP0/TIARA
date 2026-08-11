/* Ghidra address: 0069fa90 */
/* Ghidra symbol: FUN_0069fa90 */


void FUN_0069fa90(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x490) != param_2) {
    *(char *)(param_1 + 0x490) = param_2;
    FUN_00655b90();
  }
  return;
}


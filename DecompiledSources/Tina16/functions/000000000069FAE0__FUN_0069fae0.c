/* Ghidra address: 0069fae0 */
/* Ghidra symbol: FUN_0069fae0 */


void FUN_0069fae0(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x492) != param_2) {
    *(char *)(param_1 + 0x492) = param_2;
    FUN_00655b90();
  }
  return;
}


/* Ghidra address: 0069fac0 */
/* Ghidra symbol: FUN_0069fac0 */


void FUN_0069fac0(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x491) != param_2) {
    *(char *)(param_1 + 0x491) = param_2;
    FUN_00655b90();
  }
  return;
}


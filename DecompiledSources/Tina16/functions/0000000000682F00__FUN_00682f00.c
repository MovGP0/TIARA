/* Ghidra address: 00682f00 */
/* Ghidra symbol: FUN_00682f00 */


void FUN_00682f00(longlong param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x4e1)) {
    *(char *)(param_1 + 0x4e1) = param_2;
    FUN_00655b90();
  }
  return;
}


/* Ghidra address: 0068bb60 */
/* Ghidra symbol: FUN_0068bb60 */


void FUN_0068bb60(longlong param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x4cf)) {
    *(char *)(param_1 + 0x4cf) = param_2;
    FUN_00655b90();
  }
  return;
}


/* Ghidra address: 007028a0 */
/* Ghidra symbol: FUN_007028a0 */


void FUN_007028a0(longlong param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x4c9)) {
    *(char *)(param_1 + 0x4c9) = param_2;
    FUN_00655b90();
  }
  return;
}


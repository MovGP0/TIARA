/* Ghidra address: 00822280 */
/* Ghidra symbol: FUN_00822280 */


void FUN_00822280(longlong *param_1,char param_2)

{
  if (param_2 != *(char *)((longlong)param_1 + 0x551)) {
    *(char *)((longlong)param_1 + 0x551) = param_2;
    (**(code **)(*param_1 + 0x180))(param_1);
  }
  return;
}


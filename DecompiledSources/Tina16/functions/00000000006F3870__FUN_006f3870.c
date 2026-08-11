/* Ghidra address: 006f3870 */
/* Ghidra symbol: FUN_006f3870 */


void FUN_006f3870(longlong param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x4a2)) {
    *(char *)(param_1 + 0x4a2) = param_2;
    FUN_006d3ef0(param_1,0x200,param_2 == '\0');
  }
  return;
}


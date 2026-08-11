/* Ghidra address: 00848870 */
/* Ghidra symbol: FUN_00848870 */


void FUN_00848870(longlong param_1,char param_2)

{
  if (param_2 == '\0') {
    FUN_0083f790(param_1);
  }
  else {
    FUN_0083f7b0(param_1);
    if (*(longlong *)(param_1 + 0x510) != 0) {
      FUN_0083e590(*(longlong *)(param_1 + 0x510));
    }
  }
  return;
}


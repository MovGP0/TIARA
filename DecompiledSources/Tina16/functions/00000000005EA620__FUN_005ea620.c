/* Ghidra address: 005ea620 */
/* Ghidra symbol: FUN_005ea620 */


bool FUN_005ea620(longlong param_1,int param_2)

{
  *(int *)(param_1 + 0x30) = param_2;
  return param_2 == 0;
}


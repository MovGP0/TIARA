/* Ghidra address: 01ba1620 */
/* Ghidra symbol: FUN_01ba1620 */


bool FUN_01ba1620(longlong param_1,int param_2,int param_3)

{
  return *(int *)(param_1 + 0x63c + (longlong)(param_2 * 8 + param_3) * 4) == 6;
}


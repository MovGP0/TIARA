/* Ghidra address: 01d2c610 */
/* Ghidra symbol: FUN_01d2c610 */


void FUN_01d2c610(longlong param_1,int param_2)

{
  *(int *)(param_1 + 0x58) = param_2;
  FUN_00409620(param_1 + 0x50,(longlong)(param_2 * 8));
  return;
}


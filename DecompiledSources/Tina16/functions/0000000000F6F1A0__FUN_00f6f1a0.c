/* Ghidra address: 00f6f1a0 */
/* Ghidra symbol: FUN_00f6f1a0 */


void FUN_00f6f1a0(longlong param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 0x98 + (longlong)param_2 * 8) = param_3;
  *(undefined4 *)(param_1 + 0x9c + (longlong)param_2 * 8) = param_4;
  return;
}


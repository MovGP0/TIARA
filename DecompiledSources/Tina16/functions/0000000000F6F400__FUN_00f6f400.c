/* Ghidra address: 00f6f400 */
/* Ghidra symbol: FUN_00f6f400 */


void FUN_00f6f400(longlong param_1,int param_2,undefined4 param_3,undefined1 param_4)

{
  *(undefined4 *)(param_1 + 0x44 + (longlong)param_2 * 8) = param_3;
  *(undefined1 *)(param_1 + 0x48 + (longlong)param_2 * 8) = param_4;
  return;
}


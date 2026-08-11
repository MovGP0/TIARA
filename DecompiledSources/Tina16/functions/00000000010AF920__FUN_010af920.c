/* Ghidra address: 010af920 */
/* Ghidra symbol: FUN_010af920 */


void FUN_010af920(longlong param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(*(longlong *)(param_1 + 0x10) + (longlong)param_2 * 4) = param_3;
  return;
}


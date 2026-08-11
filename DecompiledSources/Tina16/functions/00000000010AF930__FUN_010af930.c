/* Ghidra address: 010af930 */
/* Ghidra symbol: FUN_010af930 */


void FUN_010af930(longlong param_1,undefined4 param_2,int param_3)

{
  *(undefined4 *)(*(longlong *)(param_1 + 0x18) + (longlong)param_3 * 4) = param_2;
  return;
}


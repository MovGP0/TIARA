/* Ghidra address: 01d0f400 */
/* Ghidra symbol: FUN_01d0f400 */


void FUN_01d0f400(longlong param_1,int param_2,undefined8 param_3)

{
  if ((-1 < param_2) && (param_2 <= *(int *)(param_1 + 0x10))) {
    *(undefined8 *)(*(longlong *)(param_1 + 8) + (longlong)param_2 * 8) = param_3;
  }
  return;
}


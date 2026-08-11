/* Ghidra address: 01d34a00 */
/* Ghidra symbol: FUN_01d34a00 */


void FUN_01d34a00(longlong param_1,int param_2,undefined8 param_3)

{
  if ((param_2 < 0) || (*(int *)(param_1 + 0x10) <= param_2)) {
    FUN_01d34ef0(param_1);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 8) + (longlong)param_2 * 8) = param_3;
  return;
}


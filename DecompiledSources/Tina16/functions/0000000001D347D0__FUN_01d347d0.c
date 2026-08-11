/* Ghidra address: 01d347d0 */
/* Ghidra symbol: FUN_01d347d0 */


undefined8 FUN_01d347d0(longlong param_1,int param_2)

{
  if ((param_2 < 0) || (*(int *)(param_1 + 0x10) <= param_2)) {
    FUN_01d34ef0(param_1);
  }
  return *(undefined8 *)(*(longlong *)(param_1 + 8) + (longlong)param_2 * 8);
}


/* Ghidra address: 007069d0 */
/* Ghidra symbol: FUN_007069d0 */


undefined8 * FUN_007069d0(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x500);
  param_2[1] = *(undefined8 *)(param_1 + 0x508);
  return param_2;
}


/* Ghidra address: 007069b0 */
/* Ghidra symbol: FUN_007069b0 */


undefined8 * FUN_007069b0(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x4f0);
  param_2[1] = *(undefined8 *)(param_1 + 0x4f8);
  return param_2;
}


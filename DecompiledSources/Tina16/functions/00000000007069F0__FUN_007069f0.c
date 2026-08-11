/* Ghidra address: 007069f0 */
/* Ghidra symbol: FUN_007069f0 */


undefined8 * FUN_007069f0(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x520);
  param_2[1] = *(undefined8 *)(param_1 + 0x528);
  return param_2;
}


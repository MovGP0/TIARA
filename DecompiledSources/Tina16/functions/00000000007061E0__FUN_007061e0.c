/* Ghidra address: 007061e0 */
/* Ghidra symbol: FUN_007061e0 */


undefined8 * FUN_007061e0(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x4b0);
  param_2[1] = *(undefined8 *)(param_1 + 0x4b8);
  return param_2;
}


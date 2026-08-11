/* Ghidra address: 017b58b0 */
/* Ghidra symbol: FUN_017b58b0 */


undefined8 * FUN_017b58b0(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x40);
  param_2[1] = *(undefined8 *)(param_1 + 0x48);
  return param_2;
}


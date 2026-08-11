/* Ghidra address: 01d2b150 */
/* Ghidra symbol: FUN_01d2b150 */


undefined8 * FUN_01d2b150(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x14);
  param_2[1] = *(undefined8 *)(param_1 + 0x1c);
  return param_2;
}


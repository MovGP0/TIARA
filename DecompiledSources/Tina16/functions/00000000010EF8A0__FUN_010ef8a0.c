/* Ghidra address: 010ef8a0 */
/* Ghidra symbol: FUN_010ef8a0 */


undefined8 * FUN_010ef8a0(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x48);
  param_2[1] = *(undefined8 *)(param_1 + 0x50);
  return param_2;
}


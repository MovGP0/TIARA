/* Ghidra address: 01acfa40 */
/* Ghidra symbol: FUN_01acfa40 */


undefined8 * FUN_01acfa40(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0xa0);
  param_2[1] = *(undefined8 *)(param_1 + 0xa8);
  return param_2;
}


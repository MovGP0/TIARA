/* Ghidra address: 005882e0 */
/* Ghidra symbol: FUN_005882e0 */


undefined8 * FUN_005882e0(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 9);
  param_2[1] = *(undefined8 *)(param_1 + 0x11);
  return param_2;
}


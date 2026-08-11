/* Ghidra address: 01cc0aa0 */
/* Ghidra symbol: FUN_01cc0aa0 */


undefined8 * FUN_01cc0aa0(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x1a);
  param_2[1] = *(undefined8 *)(param_1 + 0x22);
  *(undefined1 *)(param_2 + 2) = *(undefined1 *)(param_1 + 0x2a);
  return param_2;
}


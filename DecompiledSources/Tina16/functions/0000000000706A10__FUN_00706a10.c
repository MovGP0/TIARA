/* Ghidra address: 00706a10 */
/* Ghidra symbol: FUN_00706a10 */


undefined8 * FUN_00706a10(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x530);
  param_2[1] = *(undefined8 *)(param_1 + 0x538);
  return param_2;
}


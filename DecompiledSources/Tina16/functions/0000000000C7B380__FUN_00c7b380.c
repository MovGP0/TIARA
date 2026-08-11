/* Ghidra address: 00c7b380 */
/* Ghidra symbol: FUN_00c7b380 */


undefined8 * FUN_00c7b380(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x2b8);
  param_2[1] = *(undefined8 *)(param_1 + 0x2c0);
  return param_2;
}


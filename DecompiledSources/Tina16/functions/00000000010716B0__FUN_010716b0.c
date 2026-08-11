/* Ghidra address: 010716b0 */
/* Ghidra symbol: FUN_010716b0 */


undefined4 * FUN_010716b0(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  *param_3 = *(undefined8 *)(param_1 + 0x748);
  *param_2 = *(undefined4 *)(param_1 + 0x718);
  *(undefined2 *)(param_2 + 1) = *(undefined2 *)(param_1 + 0x71c);
  return param_2;
}


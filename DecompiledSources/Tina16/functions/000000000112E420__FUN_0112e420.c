/* Ghidra address: 0112e420 */
/* Ghidra symbol: FUN_0112e420 */


undefined8 * FUN_0112e420(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_2 + 4);
  *(byte *)((longlong)param_1 + 1) = *(byte *)((longlong)param_1 + 1) ^ 0x80;
  return param_1;
}


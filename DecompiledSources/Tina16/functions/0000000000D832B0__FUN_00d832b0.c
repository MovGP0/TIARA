/* Ghidra address: 00d832b0 */
/* Ghidra symbol: FUN_00d832b0 */


undefined8 * FUN_00d832b0(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined1 *)(param_1 + 2) = param_3;
  return param_1;
}


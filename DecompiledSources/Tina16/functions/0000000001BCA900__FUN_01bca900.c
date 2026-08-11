/* Ghidra address: 01bca900 */
/* Ghidra symbol: FUN_01bca900 */


undefined8 FUN_01bca900(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x20;
  param_2[1] = 0;
  param_2[1] = param_2[1] | 4;
  param_2[1] = param_2[1] | 0x40000;
  FUN_01bcb060();
  return 0;
}


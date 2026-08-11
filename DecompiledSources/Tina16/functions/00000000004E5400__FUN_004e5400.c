/* Ghidra address: 004e5400 */
/* Ghidra symbol: FUN_004e5400 */


longlong FUN_004e5400(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00414ad0(param_1);
  *(undefined8 *)(param_1 + 8) = param_3;
  return param_1;
}


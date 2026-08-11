/* Ghidra address: 005e0050 */
/* Ghidra symbol: FUN_005e0050 */


longlong FUN_005e0050(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_00414ad0(param_1);
  *(undefined4 *)(param_1 + 8) = param_3;
  return param_1;
}


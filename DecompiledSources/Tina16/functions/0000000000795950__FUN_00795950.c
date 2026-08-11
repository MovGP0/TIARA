/* Ghidra address: 00795950 */
/* Ghidra symbol: FUN_00795950 */


longlong FUN_00795950(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  FUN_00414ad0(param_1);
  *(undefined8 *)(param_1 + 8) = *param_3;
  *(undefined8 *)(param_1 + 0x10) = param_3[1];
  return param_1;
}


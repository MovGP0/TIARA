/* Ghidra address: 00460d80 */
/* Ghidra symbol: FUN_00460d80 */


longlong FUN_00460d80(longlong param_1,undefined8 *param_2)

{
  *(undefined8 **)(param_1 + 8) = param_2;
  *(undefined8 *)(param_1 + 0x10) = 0;
  FUN_00415f40(param_1,*param_2);
  return param_1;
}


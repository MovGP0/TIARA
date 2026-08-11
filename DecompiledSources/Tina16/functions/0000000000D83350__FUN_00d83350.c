/* Ghidra address: 00d83350 */
/* Ghidra symbol: FUN_00d83350 */


undefined8 *
FUN_00d83350(undefined8 *param_1,undefined8 *param_2,undefined1 param_3,undefined1 param_4)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined1 *)((longlong)param_1 + 0x11) = param_3;
  *(undefined1 *)(param_1 + 2) = param_4;
  return param_1;
}


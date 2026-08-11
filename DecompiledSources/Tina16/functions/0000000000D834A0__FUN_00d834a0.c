/* Ghidra address: 00d834a0 */
/* Ghidra symbol: FUN_00d834a0 */


undefined8 *
FUN_00d834a0(undefined8 *param_1,undefined8 *param_2,undefined1 param_3,undefined1 param_4)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined1 *)((longlong)param_1 + 0x11) = param_4;
  *(undefined1 *)(param_1 + 2) = param_3;
  return param_1;
}


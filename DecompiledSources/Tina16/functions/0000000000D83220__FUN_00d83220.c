/* Ghidra address: 00d83220 */
/* Ghidra symbol: FUN_00d83220 */


undefined8 *
FUN_00d83220(undefined8 *param_1,undefined8 *param_2,undefined1 param_3,undefined8 *param_4,
            undefined2 param_5,undefined8 param_6,undefined1 param_7)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined8 *)((longlong)param_1 + 0x14) = *param_4;
  *(undefined8 *)((longlong)param_1 + 0x1c) = param_4[1];
  *(undefined1 *)(param_1 + 2) = param_3;
  *(undefined2 *)((longlong)param_1 + 0x11) = param_5;
  FUN_00414ad0(param_1 + 5,param_6);
  *(undefined1 *)(param_1 + 6) = param_7;
  return param_1;
}


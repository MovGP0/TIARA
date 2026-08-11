/* Ghidra address: 00d83540 */
/* Ghidra symbol: FUN_00d83540 */


undefined8 *
FUN_00d83540(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined1 param_4,
            undefined1 param_5)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_3;
  *(undefined1 *)(param_1 + 3) = param_4;
  *(undefined1 *)((longlong)param_1 + 0x19) = param_5;
  return param_1;
}


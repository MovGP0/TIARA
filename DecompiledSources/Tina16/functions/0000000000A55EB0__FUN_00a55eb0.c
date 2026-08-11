/* Ghidra address: 00a55eb0 */
/* Ghidra symbol: FUN_00a55eb0 */


undefined4 *
FUN_00a55eb0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  param_1[4] = param_6;
  param_1[5] = param_7;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x22) = 0;
  return param_1;
}


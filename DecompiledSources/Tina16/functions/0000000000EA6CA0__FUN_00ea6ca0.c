/* Ghidra address: 00ea6ca0 */
/* Ghidra symbol: FUN_00ea6ca0 */


undefined4 *
FUN_00ea6ca0(undefined4 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
            undefined1 param_5)

{
  *(undefined1 *)(param_1 + 2) = param_5;
  FUN_00414ad0(param_1 + 4);
  *param_1 = param_3;
  param_1[1] = param_4;
  return param_1;
}


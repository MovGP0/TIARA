/* Ghidra address: 00f792f0 */
/* Ghidra symbol: FUN_00f792f0 */


void FUN_00f792f0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_00414610(param_5);
  *(undefined4 *)(param_1 + 0x6c) = param_2;
  *(undefined4 *)(param_1 + 0x70) = param_3;
  *(undefined8 *)(param_1 + 0x78) = param_4;
  FUN_00414ad0(param_1 + 0x8e8,param_5);
  FUN_00414480(&param_5);
  return;
}


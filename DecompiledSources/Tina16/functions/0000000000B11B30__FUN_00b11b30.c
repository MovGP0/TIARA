/* Ghidra address: 00b11b30 */
/* Ghidra symbol: FUN_00b11b30 */


undefined8 FUN_00b11b30(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  (**(code **)(*param_1 + 0x2d8))(param_1,param_2,param_3,param_4);
  if (param_1[0xb5] != 0) {
    (*(code *)param_1[0xb5])(param_1[0xb6],param_1,param_3,param_4,param_2);
  }
  return param_2;
}


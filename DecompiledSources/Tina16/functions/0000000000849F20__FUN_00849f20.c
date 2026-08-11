/* Ghidra address: 00849f20 */
/* Ghidra symbol: FUN_00849f20 */


undefined8 FUN_00849f20(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00414480(param_2);
  if (*(longlong *)(param_1 + 0x598) != 0) {
    (**(code **)(param_1 + 0x598))(*(undefined8 *)(param_1 + 0x5a0),param_1,param_3,param_4,param_2)
    ;
  }
  return param_2;
}


/* Ghidra address: 00849f80 */
/* Ghidra symbol: FUN_00849f80 */


undefined8 FUN_00849f80(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00414480(param_2);
  if (*(longlong *)(param_1 + 0x5a8) != 0) {
    (**(code **)(param_1 + 0x5a8))(*(undefined8 *)(param_1 + 0x5b0),param_1,param_3,param_4,param_2)
    ;
  }
  return param_2;
}


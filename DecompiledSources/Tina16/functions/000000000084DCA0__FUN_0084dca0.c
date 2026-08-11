/* Ghidra address: 0084dca0 */
/* Ghidra symbol: FUN_0084dca0 */


undefined8 FUN_0084dca0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_0084e320(param_1,param_2,param_3,param_4);
  if (*(longlong *)(param_1 + 0x5a8) != 0) {
    (**(code **)(param_1 + 0x5a8))(*(undefined8 *)(param_1 + 0x5b0),param_1,param_3,param_4,param_2)
    ;
  }
  return param_2;
}


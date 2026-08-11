/* Ghidra address: 008e6ae0 */
/* Ghidra symbol: FUN_008e6ae0 */


undefined8 FUN_008e6ae0(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = (*(code *)*param_1)(param_1);
  if (lVar1 == 0) {
    FUN_00414480(param_2);
  }
  else {
    lVar1 = (*(code *)*param_1)(param_1);
    (**(code **)(lVar1 + 0x18))(lVar1,param_2);
  }
  return param_2;
}


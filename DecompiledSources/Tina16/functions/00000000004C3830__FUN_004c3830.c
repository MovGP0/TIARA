/* Ghidra address: 004c3830 */
/* Ghidra symbol: FUN_004c3830 */


longlong * FUN_004c3830(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_38 = *param_3;
  uStack_30 = param_3[1];
  FUN_00414480(param_2);
  if (*(longlong *)(param_1 + 0x80) != 0) {
    (**(code **)(param_1 + 0x80))(*(undefined8 *)(param_1 + 0x88),param_1,&local_38,param_2);
  }
  if (*param_2 == 0) {
    FUN_00411870(**(undefined8 **)(param_1 + 0x38),param_2,local_38);
  }
  return param_2;
}


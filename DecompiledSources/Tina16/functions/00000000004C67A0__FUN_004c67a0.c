/* Ghidra address: 004c67a0 */
/* Ghidra symbol: FUN_004c67a0 */


longlong * FUN_004c67a0(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_38 = *param_3;
  uStack_30 = param_3[1];
  FUN_00414480(param_2);
  if (*(longlong *)(param_1 + 0x50) != 0) {
    (**(code **)(param_1 + 0x50))
              (*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 200),&local_38,param_2);
  }
  if (*param_2 == 0) {
    FUN_00411870(**(undefined8 **)(param_1 + 0x48),param_2,local_38);
  }
  return param_2;
}


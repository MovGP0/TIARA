/* Ghidra address: 01bf7160 */
/* Ghidra symbol: FUN_01bf7160 */


undefined8 FUN_01bf7160(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  *(longlong *)(param_1 + 0xf8) = param_1;
  *(code **)(param_1 + 0xf0) = FUN_01bf6d90;
  FUN_00414ad0(param_1 + 0xe8,local_res10[0]);
  uVar1 = FUN_01bf70e0(param_1);
  FUN_00414480(local_res10);
  return uVar1;
}


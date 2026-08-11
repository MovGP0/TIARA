/* Ghidra address: 00cd91c0 */
/* Ghidra symbol: FUN_00cd91c0 */


undefined8 * FUN_00cd91c0(longlong *param_1,undefined8 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  (**(code **)(*param_1 + 0x18))(param_1,param_2,param_3);
  FUN_0043eb80(local_20,param_1[0xf]);
  iVar1 = (**(code **)PTR_PTR_020018b0)(local_20[0],*param_2);
  if (iVar1 == 0) {
    FUN_00414480(param_2);
  }
  else {
    FUN_004169f0(param_2,iVar1 + -1);
  }
  FUN_00414480(local_20);
  return param_2;
}


/* Ghidra address: 008ac100 */
/* Ghidra symbol: FUN_008ac100 */


undefined8 FUN_008ac100(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  FUN_00879190(local_20,param_3);
  iVar1 = (**(code **)(*(longlong *)param_1[4] + 0xb0))((longlong *)param_1[4],local_20[0]);
  if (iVar1 == -1) {
    (**(code **)(*param_1 + 8))(param_1);
    iVar1 = (**(code **)(*(longlong *)param_1[4] + 0xb0))((longlong *)param_1[4],local_20[0]);
  }
  if (iVar1 == -1) {
    FUN_00414480(param_2);
  }
  else {
    (**(code **)(*(longlong *)param_1[5] + 0x18))((longlong *)param_1[5],param_2,iVar1);
  }
  FUN_00414480(local_20);
  return param_2;
}


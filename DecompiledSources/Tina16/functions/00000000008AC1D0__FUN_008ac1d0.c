/* Ghidra address: 008ac1d0 */
/* Ghidra symbol: FUN_008ac1d0 */


undefined8 FUN_008ac1d0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_30[0] = 0;
  local_20[0] = 0;
  FUN_00441a10(local_30,param_3);
  FUN_00879190(local_20,local_30[0]);
  iVar1 = (**(code **)(*(longlong *)param_1[5] + 0xb0))((longlong *)param_1[5],local_20[0]);
  if (iVar1 == -1) {
    (**(code **)(*param_1 + 8))(param_1);
    iVar1 = (**(code **)(*(longlong *)param_1[5] + 0xb0))((longlong *)param_1[5],local_20[0]);
  }
  if (iVar1 == -1) {
    FUN_00414ad0(param_2,L"application/octet-stream");
  }
  else {
    (**(code **)(*(longlong *)param_1[4] + 0x18))((longlong *)param_1[4],param_2,iVar1);
  }
  FUN_00414480(local_30);
  FUN_00414480(local_20);
  return param_2;
}


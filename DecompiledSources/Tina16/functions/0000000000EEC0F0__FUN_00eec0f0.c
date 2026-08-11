/* Ghidra address: 00eec0f0 */
/* Ghidra symbol: FUN_00eec0f0 */


undefined8 FUN_00eec0f0(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 local_res18 [2];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20;
  
  local_48 = 0;
  local_50 = 0;
  local_40 = 0;
  local_30[0] = 0;
  local_38 = 0;
  local_20 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  iVar2 = 0;
  FUN_00416910(param_1,local_res18[0],0xff);
  while( true ) {
    iVar1 = (**(code **)(*param_2 + 0x28))(param_2);
    if (iVar1 <= iVar2) break;
    (**(code **)(*param_2 + 0x18))(param_2,&local_38,iVar2);
    FUN_0043e130(local_30,local_38);
    iVar1 = FUN_004170c0(L".MODEL",local_30[0],1);
    if (iVar1 == 1) break;
    iVar2 = iVar2 + 1;
  }
  iVar1 = (**(code **)(*param_2 + 0x28))(param_2);
  if (iVar2 < iVar1) {
    (**(code **)(*param_2 + 0x18))(param_2,&local_20,iVar2);
    FUN_00b90870(&local_40,&local_20);
    FUN_00b90870(&local_50,&local_20);
    FUN_0043e130(&local_48,local_50);
    FUN_00416910(param_1,local_48,0xff);
  }
  FUN_00414560(&local_50,5);
  FUN_00414480(&local_20);
  FUN_00414480(local_res18);
  return param_1;
}


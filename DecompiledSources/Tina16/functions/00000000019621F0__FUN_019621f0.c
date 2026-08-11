/* Ghidra address: 019621f0 */
/* Ghidra symbol: FUN_019621f0 */


undefined8 FUN_019621f0(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_48 = 0;
  local_50 = 0;
  local_30[0] = 0;
  local_38 = 0;
  local_40 = 0;
  local_20[0] = 0;
  iVar1 = (**(code **)(*(longlong *)param_1[0x61] + 0x28))((longlong *)param_1[0x61]);
  if (iVar1 == 0) {
    FUN_00414ad0(param_2,L" u=\"\"");
  }
  else if (iVar1 == 1) {
    (**(code **)(*(longlong *)param_1[0x61] + 0x18))((longlong *)param_1[0x61],&local_38,0);
    FUN_004168b0(&local_40,local_38);
    FUN_01802f80(local_30,local_40);
    FUN_00416cd0(param_2,3,L" u=\"",local_30[0],&LAB_019623e8);
  }
  else {
    (**(code **)(*param_1 + 0x348))(param_1,local_20);
    iVar1 = FUN_00414cc0(local_20[0]);
    FUN_00416660(local_20,iVar1 + -2);
    FUN_004168b0(&local_50,local_20[0]);
    FUN_01802f80(&local_48,local_50);
    FUN_00416cd0(param_2,3,L" u=\"",local_48,&LAB_019623e8);
  }
  FUN_00414560(&local_50,3);
  FUN_00414520(&local_38);
  FUN_00414480(local_30);
  FUN_00414520(local_20);
  return param_2;
}


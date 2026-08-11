/* Ghidra address: 016fa170 */
/* Ghidra symbol: FUN_016fa170 */


void FUN_016fa170(undefined8 param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4)

{
  int iVar1;
  longlong *plVar2;
  undefined8 local_res18 [2];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20;
  
  local_30[0] = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_20 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  plVar2 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  if (param_4 == (longlong *)0x0) {
    (**(code **)(*plVar2 + 0xd8))(plVar2,local_res18[0]);
  }
  else {
    iVar1 = FUN_016fa0c0(param_1,param_4);
    (**(code **)(*param_4 + 0x48))(param_4,-4 - iVar1,2);
    (**(code **)(*plVar2 + 0xe8))(plVar2,param_4);
  }
  (**(code **)(*plVar2 + 0x38))(plVar2,&local_48);
  FUN_00415dd0(&local_50,local_48,0);
  FUN_00b698f0(&local_40,local_50);
  FUN_016f9db0(param_1,&local_38,local_40);
  FUN_00b698f0(local_30,local_38);
  FUN_00416880(&local_20,local_30[0]);
  (**(code **)(*(longlong *)*param_2 + 0x60))((longlong *)*param_2,local_20);
  FUN_00410f20(plVar2);
  FUN_004144d0(&local_50);
  FUN_00414480(&local_48);
  FUN_00414590(&local_40,3);
  FUN_00414480(&local_20);
  FUN_00414480(local_res18);
  return;
}


/* Ghidra address: 01064420 */
/* Ghidra symbol: FUN_01064420 */


void FUN_01064420(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  longlong *plVar1;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_1);
  FUN_00414610(local_res10);
  FUN_00414610(local_res18);
  FUN_00414610(local_res20);
  FUN_00414610(param_5);
  plVar1 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  (**(code **)(*plVar1 + 0x78))(plVar1,L"directories:");
  FUN_00416ba0(&local_20,L"  data: ",local_res10);
  (**(code **)(*plVar1 + 0x78))(plVar1,local_20);
  FUN_00416ba0(&local_28,L"  user: ",local_res18);
  (**(code **)(*plVar1 + 0x78))(plVar1,local_28);
  (**(code **)(*plVar1 + 0x78))(plVar1,L"build_cache:");
  FUN_00416ba0(&local_30,L"  path: ",local_res20);
  (**(code **)(*plVar1 + 0x78))(plVar1,local_30);
  (**(code **)(*plVar1 + 0x100))(plVar1,local_res8);
  FUN_00410f20(plVar1);
  FUN_00414560(&local_30,3);
  FUN_00414560(&local_res8,5);
  return;
}


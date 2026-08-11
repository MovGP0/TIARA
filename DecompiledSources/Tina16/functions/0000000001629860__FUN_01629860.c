/* Ghidra address: 01629860 */
/* Ghidra symbol: FUN_01629860 */


undefined1 FUN_01629860(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined1 local_49;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  iVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))(*(longlong **)(param_1 + 8));
  if (iVar1 < 2) {
    local_49 = 0;
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x18))(*(longlong **)(param_1 + 8),local_20,0);
    FUN_01615910(local_20[0],&local_38,&local_40,&LAB_01629a30);
    FUN_00416cd0(&local_28,3,local_38,&LAB_01629a30,local_40);
    (**(code **)(**(longlong **)(param_1 + 8) + 0x18))(*(longlong **)(param_1 + 8),local_20,1);
    FUN_01615910(local_20[0],&local_38,&local_40,&LAB_01629a30);
    FUN_00416cd0(&local_30,3,local_38,&LAB_01629a30,local_40);
    iVar1 = FUN_00416db0(local_28,local_res10);
    if ((iVar1 == 0) && (iVar1 = FUN_00416db0(local_30,local_res18), iVar1 == 0)) {
      local_49 = 1;
    }
    else {
      local_49 = 0;
    }
  }
  FUN_00414560(&local_40,5);
  FUN_00414560(&local_res10,2);
  return local_49;
}


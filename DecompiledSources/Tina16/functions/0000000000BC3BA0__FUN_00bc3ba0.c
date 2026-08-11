/* Ghidra address: 00bc3ba0 */
/* Ghidra symbol: FUN_00bc3ba0 */


undefined4 FUN_00bc3ba0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_30 = 0;
  local_38 = 0;
  local_20 = 0;
  local_28 = 0;
  local_10 = 0;
  local_18 = 0;
  FUN_004167d0(&local_10,param_1);
  FUN_004167d0(&local_18,param_2);
  FUN_00416dc0(&local_20,local_10,1,param_3);
  FUN_00416dc0(&local_28,local_18,1,param_3);
  iVar1 = FUN_00416d10(local_20,local_28);
  if (iVar1 < 1) {
    FUN_00416dc0(&local_30,local_10,1,param_3);
    FUN_00416dc0(&local_38,local_18,1,param_3);
    iVar1 = FUN_00416d10(local_30,local_38);
    if (iVar1 < 0) {
      local_3c = 0xffffffff;
    }
    else {
      local_3c = 0;
    }
  }
  else {
    local_3c = 1;
  }
  FUN_00414560(&local_38,6);
  return local_3c;
}


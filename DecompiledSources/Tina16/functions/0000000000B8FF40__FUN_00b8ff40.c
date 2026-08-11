/* Ghidra address: 00b8ff40 */
/* Ghidra symbol: FUN_00b8ff40 */


void FUN_00b8ff40(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 local_res10 [3];
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  local_40 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  lVar1 = *(longlong *)(param_1 + 0x4e8);
  if (lVar1 == 0) {
    FUN_00414ad0(param_1 + 0x4e0,local_res10[0]);
  }
  else {
    FUN_00416ba0(&local_28,local_res10[0],L" (%s)");
    FUN_0064dd90(lVar1,&local_40);
    local_38 = local_40;
    local_30 = 0x11;
    FUN_00442f70(local_20,local_28,&local_38,0);
    FUN_00414ad0(param_1 + 0x4e0,local_20[0]);
  }
  if (*(longlong *)(param_1 + 0x4f0) != 0) {
    (**(code **)(param_1 + 0x4f0))(*(undefined8 *)(param_1 + 0x4f8),param_1);
  }
  FUN_00414480(&local_40);
  FUN_00414560(&local_28,2);
  FUN_00414480(local_res10);
  return;
}


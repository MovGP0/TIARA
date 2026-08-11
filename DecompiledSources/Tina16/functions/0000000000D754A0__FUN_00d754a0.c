/* Ghidra address: 00d754a0 */
/* Ghidra symbol: FUN_00d754a0 */


longlong * FUN_00d754a0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_88 [40];
  undefined1 *local_60;
  int local_50;
  int local_4c;
  longlong local_48;
  undefined8 local_40;
  longlong local_38;
  longlong *local_30;
  undefined8 local_28;
  longlong *local_20;
  
  local_60 = auStack_88;
  local_40 = 0;
  local_48 = 0;
  local_30 = (longlong *)0x0;
  FUN_00d57480(&local_48,param_1);
  local_38 = FUN_00d753e0(local_48);
  if (local_38 == 0) {
    local_4c = 0;
    if (local_48 != 0) {
      local_4c = *(int *)(local_48 + -4);
    }
    if (3 < local_4c) {
      lVar1 = FUN_00414de0(&local_48);
      *(undefined2 *)(lVar1 + 2) = 0x53;
      lVar1 = FUN_00414de0(&local_48);
      *(undefined2 *)(lVar1 + 4) = 0x65;
      local_38 = FUN_00d753e0(local_48);
    }
  }
  if (local_38 == 0) {
    local_50 = 0;
    if (local_48 != 0) {
      local_50 = *(int *)(local_48 + -4);
    }
    if (3 < local_50) {
      lVar1 = FUN_00414de0(&local_48);
      *(undefined2 *)(lVar1 + 2) = 0x54;
      lVar1 = FUN_00414de0(&local_48);
      *(undefined2 *)(lVar1 + 4) = 0x77;
      local_38 = FUN_00d753e0(local_48);
    }
  }
  if (local_38 != 0) {
    local_30 = (longlong *)(**(code **)(local_38 + 0x78))(local_38,1,param_2);
  }
  if (local_30 != (longlong *)0x0) {
    FUN_00d57480(&local_40,param_1);
    local_28 = FUN_004ba3c0(&PTR_FUN_0047d288,1,local_40);
    local_20 = (longlong *)FUN_00410e60(&PTR_FUN_0047cbc0,1);
    FUN_004cdee0(local_28,local_20);
    (**(code **)(*local_20 + 0x48))(local_20,0,0);
    FUN_004b8d00(local_20,local_30);
    (**(code **)(*local_30 + 0xf0))(local_30,1);
    FUN_00410f20(local_20);
    FUN_00410f20(local_28);
  }
  FUN_00414560(&local_48,2);
  return local_30;
}


/* Ghidra address: 013a6620 */
/* Ghidra symbol: FUN_013a6620 */


void FUN_013a6620(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined1 *local_70;
  undefined1 local_5a;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_40;
  undefined4 local_28;
  int local_24;
  longlong local_20;
  longlong *local_10;
  
  local_70 = auStack_98;
  local_78 = 0;
  local_50 = 0;
  local_58 = 0;
  local_10 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_20 = FUN_013a5cd0(param_2,param_3);
  FUN_01776810(param_2,local_20);
  local_40 = *(longlong *)(local_20 + 8);
  local_28 = 0x3ff;
  if (local_40 != 0) {
    local_24 = 0x3ff;
    do {
      local_5a = *(undefined1 *)(local_40 + (longlong)local_24 * 2);
      local_5a = FUN_013a5c90(local_5a);
      FUN_0043f750(&local_58,local_5a);
      (**(code **)(*local_10 + 0x78))(local_10,local_58);
      local_24 = local_24 + -1;
    } while (local_24 != -1);
  }
  FUN_004b37d0(local_10,&local_78);
  FUN_00415dd0(param_1,local_78,0);
  FUN_00410f20(local_10);
  if (*(longlong *)(local_20 + 8) != 0) {
    FUN_004095f0(*(longlong *)(local_20 + 8));
  }
  FUN_004095f0(local_20);
  FUN_00414480(&local_78);
  FUN_00414560(&local_58,2);
  return;
}


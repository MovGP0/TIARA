/* Ghidra address: 014cdde0 */
/* Ghidra symbol: FUN_014cdde0 */


void FUN_014cdde0(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  char cVar2;
  undefined8 local_res20;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 *local_a0;
  undefined8 local_90;
  undefined4 local_84;
  undefined8 local_80;
  undefined8 local_78;
  longlong *local_28;
  undefined8 local_20 [2];
  
  local_a0 = auStack_d8;
  local_b8 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_20[0] = 0;
  local_res20 = param_4;
  FUN_00414610(param_4);
  local_28 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  lVar1 = *(longlong *)(param_3 + 0x840);
  if (lVar1 != 0) {
    local_78 = *(undefined8 *)(lVar1 + 0x1a8);
    cVar2 = FUN_01d3f210(lVar1);
    if (cVar2 != '\0') {
      local_80 = local_78;
      FUN_01776490(local_78,&local_84,&local_90);
      FUN_0043f750(&local_b0,local_84);
      FUN_00416ba0(&local_a8,L"pll_speed ",local_b0);
      (**(code **)(*local_28 + 0x78))(local_28,local_a8);
      FUN_00414480(local_20);
      FUN_00448450(local_20,local_90,PTR_DAT_02004830);
      FUN_00416ba0(&local_b8,L"pll_max_jitter ",local_20[0]);
      (**(code **)(*local_28 + 0x78))(local_28,local_b8);
      FUN_00414480(local_20);
    }
  }
  (**(code **)(*local_28 + 0x100))(local_28,local_res20);
  FUN_00410f20(local_28);
  FUN_00414560(&local_b8,3);
  FUN_00414480(local_20);
  FUN_00414480(&local_res20);
  return;
}


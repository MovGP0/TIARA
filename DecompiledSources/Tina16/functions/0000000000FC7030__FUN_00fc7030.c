/* Ghidra address: 00fc7030 */
/* Ghidra symbol: FUN_00fc7030 */


void FUN_00fc7030(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 *local_80;
  double local_70;
  double local_68;
  double local_50;
  int local_48;
  int local_44;
  double local_40;
  double local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_80 = auStack_e8;
  local_b8 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  FUN_0043f750(&local_88,*(undefined4 *)(param_1 + 0xbb0));
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6f0),local_88);
  (**(code **)(**(longlong **)(param_1 + 0x6c8) + 0x268))
            (*(longlong **)(param_1 + 0x6c8),*(undefined4 *)(param_1 + 0xbc0));
  *(undefined4 *)(param_1 + 0x7c8) = *(undefined4 *)(param_1 + 3000);
  *(undefined4 *)(param_1 + 0x7cc) = *(undefined4 *)(param_1 + 0xbbc);
  *(undefined8 *)(param_1 + 0x750) = 0x4062c00000000000;
  *(undefined8 *)(param_1 + 0x758) = 0x4072c00000000000;
  *(undefined8 *)(param_1 + 0x760) = 0x4082c00000000000;
  *(undefined8 *)(param_1 + 0x768) = 0x4092c00000000000;
  *(undefined8 *)(param_1 + 0x770) = 0x40a2c00000000000;
  *(undefined8 *)(param_1 + 0x778) = 0x40b2c00000000000;
  *(undefined8 *)(param_1 + 0x780) = 0x40c2c00000000000;
  *(undefined8 *)(param_1 + 0x788) = 0x40d2c00000000000;
  *(undefined8 *)(param_1 + 0x790) = 0x40e2c00000000000;
  *(undefined8 *)(param_1 + 0x798) = 0x40ec200000000000;
  *(undefined8 *)(param_1 + 0x7a0) = 0x40f2c00000000000;
  *(undefined8 *)(param_1 + 0x7a8) = 0x40fc200000000000;
  if ((*(char *)(param_1 + 0x7d1) == '\b') || (*(char *)(param_1 + 0x7d1) == '\t')) {
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x730),1);
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x738),1);
    (**(code **)(**(longlong **)(param_1 + 0x740) + 0x128))(*(longlong **)(param_1 + 0x740),0);
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x740),1);
    (**(code **)(**(longlong **)(param_1 + 0x728) + 0x128))(*(longlong **)(param_1 + 0x728),0);
    if (*(char *)(param_1 + 0x7d1) == '\b') {
      *(undefined8 *)(param_1 + 0x7b0) =
           *(undefined8 *)(param_1 + 0x750 + (longlong)*(int *)(param_1 + 0xc00) * 8);
      FUN_00414480(local_20);
      lVar2 = FUN_0040c840(*(double *)(param_1 + 0x7b0) + 0.5);
      local_68 = (double)lVar2;
      FUN_00448450(local_20,local_68,PTR_DAT_02004830);
      FUN_0064de00(*(undefined8 *)(param_1 + 0x738),local_20[0]);
      FUN_00414480(local_20);
    }
    else {
      *(undefined8 *)(param_1 + 0x7b0) =
           *(undefined8 *)(param_1 + 0x750 + (longlong)*(int *)(param_1 + 0xbfc) * 8);
      FUN_00414480(&local_28);
      lVar2 = FUN_0040c840(*(double *)(param_1 + 0x7b0) + 0.5);
      local_70 = (double)lVar2;
      FUN_00448450(&local_28,local_70,PTR_DAT_02004830);
      FUN_0064de00(*(undefined8 *)(param_1 + 0x738),local_28);
      FUN_00414480(&local_28);
    }
    local_40 = 1.0 / *(double *)(param_1 + 0x7b0);
    (**(code **)(**(longlong **)(param_1 + 0x6c8) + 0x268))(*(longlong **)(param_1 + 0x6c8),2);
    (**(code **)(**(longlong **)(param_1 + 0x6c8) + 0x128))(*(longlong **)(param_1 + 0x6c8),0);
    local_50 = (double)FUN_00fc7870(param_1,local_40);
    *(undefined4 *)(param_1 + 0xbbc) = 0;
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x6f0),&local_90);
    FUN_00f60f70(local_90);
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x6f0),&local_98);
    uVar1 = FUN_00f60f70(local_98);
    *(undefined4 *)(param_1 + 0xbb0) = uVar1;
    FUN_00414480(&local_30);
    lVar2 = FUN_0040c840(local_50 + 0.5);
    FUN_00448450(&local_30,(double)lVar2,PTR_DAT_02004830);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x740),local_30);
    FUN_00414480(&local_30);
    *(undefined4 *)(param_1 + 0x7c8) = 0x34;
  }
  else {
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x730),0);
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x738),0);
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x740),0);
    (**(code **)(**(longlong **)(param_1 + 0x728) + 0x128))(*(longlong **)(param_1 + 0x728),1);
  }
  FUN_00fc7e10(param_1,param_2);
  local_38 = *(double *)(param_1 + 0xc68) / 6.0;
  local_44 = 0x10000;
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6f0),&local_a0);
  local_48 = FUN_00f60f70(local_a0);
  local_48 = local_44 - local_48;
  local_40 = (1.0 / local_38) * (double)local_48;
  FUN_00b90440(*(undefined8 *)(param_1 + 0x728),local_40);
  local_c8 = 1;
  FUN_00b8fd60(&local_b0,local_40,*PTR_DAT_02005310,0);
  FUN_00416ba0(&local_a8,L"Time: ",local_b0);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x720),local_a8);
  local_c8 = 1;
  FUN_00b8fd60(&local_b8,*(undefined8 *)(param_1 + 0xc68),*PTR_DAT_02005310,0);
  FUN_00416ad0(&local_b8,&LAB_00fc7864);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x700),local_b8);
  FUN_00414560(&local_b8,3);
  FUN_00414560(&local_a0,3);
  FUN_00414480(&local_88);
  FUN_00414560(&local_30,3);
  return;
}


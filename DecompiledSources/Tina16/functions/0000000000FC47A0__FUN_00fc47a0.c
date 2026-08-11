/* Ghidra address: 00fc47a0 */
/* Ghidra symbol: FUN_00fc47a0 */


void FUN_00fc47a0(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 *local_a0;
  undefined8 local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  undefined4 local_64;
  int local_54;
  int local_50;
  int local_4c;
  double local_48;
  double local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_a0 = auStack_108;
  local_d8 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x6d8) + 0x268))
            (*(longlong **)(param_1 + 0x6d8),*(undefined4 *)(param_1 + 0xba8));
  FUN_00f61040(&local_a8,*(undefined4 *)(param_1 + 0xbac));
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6b8),local_a8);
  *(undefined8 *)(param_1 + 0x770) = 0x4062c00000000000;
  *(undefined8 *)(param_1 + 0x778) = 0x4072c00000000000;
  *(undefined8 *)(param_1 + 0x780) = 0x4082c00000000000;
  *(undefined8 *)(param_1 + 0x788) = 0x4092c00000000000;
  *(undefined8 *)(param_1 + 0x790) = 0x40a2c00000000000;
  *(undefined8 *)(param_1 + 0x798) = 0x40b2c00000000000;
  *(undefined8 *)(param_1 + 0x7a0) = 0x40c2c00000000000;
  *(undefined8 *)(param_1 + 0x7a8) = 0x40d2c00000000000;
  *(undefined8 *)(param_1 + 0x7b0) = 0x40e2c00000000000;
  *(undefined8 *)(param_1 + 0x7b8) = 0x40ec200000000000;
  *(undefined8 *)(param_1 + 0x7c0) = 0x40f2c00000000000;
  *(undefined8 *)(param_1 + 0x7c8) = 0x40fc200000000000;
  if ((*(char *)(param_1 + 0x7d9) == '\b') || (*(char *)(param_1 + 0x7d9) == '\t')) {
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x750),1);
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x758),1);
    (**(code **)(**(longlong **)(param_1 + 0x760) + 0x128))(*(longlong **)(param_1 + 0x760),0);
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x760),1);
    (**(code **)(**(longlong **)(param_1 + 0x748) + 0x128))(*(longlong **)(param_1 + 0x748),0);
    if (*(char *)(param_1 + 0x7d9) == '\b') {
      *(undefined8 *)(param_1 + 2000) =
           *(undefined8 *)(param_1 + 0x770 + (longlong)*(int *)(param_1 + 0xc08) * 8);
      FUN_00414480(local_20);
      lVar2 = FUN_0040c840(*(double *)(param_1 + 2000) + 0.5);
      local_80 = (double)lVar2;
      FUN_00448450(local_20,local_80,PTR_DAT_02004830);
      FUN_0064de00(*(undefined8 *)(param_1 + 0x758),local_20[0]);
      FUN_00414480(local_20);
    }
    else {
      *(undefined8 *)(param_1 + 2000) =
           *(undefined8 *)(param_1 + 0x770 + (longlong)*(int *)(param_1 + 0xc04) * 8);
      FUN_00414480(&local_28);
      lVar2 = FUN_0040c840(*(double *)(param_1 + 2000) + 0.5);
      local_88 = (double)lVar2;
      FUN_00448450(&local_28,local_88,PTR_DAT_02004830);
      FUN_0064de00(*(undefined8 *)(param_1 + 0x758),local_28);
      FUN_00414480(&local_28);
    }
    local_48 = 1.0 / *(double *)(param_1 + 2000);
    local_64 = 0;
    local_70 = (double)FUN_00fc5910(param_1,0,local_48);
    *(undefined4 *)(param_1 + 0xba8) = 0;
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x6b8),&local_b0);
    FUN_00f60f70(local_b0);
    local_78 = (double)FUN_0040c850(((local_70 - *(double *)(param_1 + 2000)) /
                                    *(double *)(param_1 + 2000)) * 100.0);
    if (2.0 < local_78) {
      local_64 = 1;
      local_70 = (double)FUN_00fc5910(param_1,1,local_48);
      *(undefined4 *)(param_1 + 0xba8) = 1;
    }
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x6b8),&local_b8);
    uVar1 = FUN_00f60f70(local_b8);
    *(undefined4 *)(param_1 + 0xbac) = uVar1;
    FUN_00414480(&local_30);
    lVar2 = FUN_0040c840(local_70 + 0.5);
    FUN_00448450(&local_30,(double)lVar2,PTR_DAT_02004830);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x760),local_30);
    FUN_00414480(&local_30);
  }
  else {
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x750),0);
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x758),0);
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x760),0);
    (**(code **)(**(longlong **)(param_1 + 0x748) + 0x128))(*(longlong **)(param_1 + 0x748),1);
  }
  if (*(int *)(param_1 + 0xbb0) == 1) {
    (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x268))(*(longlong **)(param_1 + 0x6f0),1);
    (**(code **)(**(longlong **)(param_1 + 0x6f8) + 0x268))(*(longlong **)(param_1 + 0x6f8),0);
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x268))(*(longlong **)(param_1 + 0x6f0),0);
    (**(code **)(**(longlong **)(param_1 + 0x6f8) + 0x268))(*(longlong **)(param_1 + 0x6f8),1);
  }
  if (*(int *)(param_1 + 0xbb4) == 1) {
    (**(code **)(**(longlong **)(param_1 + 0x708) + 0x268))(*(longlong **)(param_1 + 0x708),1);
    (**(code **)(**(longlong **)(param_1 + 0x710) + 0x268))(*(longlong **)(param_1 + 0x710),0);
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x708) + 0x268))(*(longlong **)(param_1 + 0x708),0);
    (**(code **)(**(longlong **)(param_1 + 0x710) + 0x268))(*(longlong **)(param_1 + 0x710),1);
  }
  local_40 = *(double *)(param_1 + 0xc70) / 6.0;
  if (*(int *)(param_1 + 0xba8) == 0) {
    local_54 = 0x20;
  }
  else {
    local_54 = 1;
  }
  if (*(int *)(param_1 + 0xba8) == 1) {
    local_50 = 0x10000;
  }
  else {
    local_50 = 0x100;
  }
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6b8),&local_c0);
  local_4c = FUN_00f60f70(local_c0);
  local_4c = local_50 - local_4c;
  local_48 = (1.0 / local_40) * (double)local_4c * (double)local_54;
  FUN_00b90440(*(undefined8 *)(param_1 + 0x748),local_48);
  local_e8 = 1;
  FUN_00b8fd60(&local_d0,local_48,*PTR_DAT_02005310,0);
  FUN_00416ba0(&local_c8,L"Time: ",local_d0);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x738),local_c8);
  FUN_00414480(&local_38);
  local_90 = *(undefined8 *)(param_1 + 0xc70);
  FUN_00448450(&local_38,local_90,PTR_DAT_02004830);
  FUN_00416ba0(&local_d8,local_38,&LAB_00fc5184);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x740),local_d8);
  FUN_00414480(&local_38);
  FUN_00414560(&local_d8,3);
  FUN_00414560(&local_c0,3);
  FUN_00414480(&local_a8);
  FUN_00414560(&local_38,4);
  return;
}


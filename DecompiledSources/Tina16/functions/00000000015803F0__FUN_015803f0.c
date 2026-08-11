/* Ghidra address: 015803f0 */
/* Ghidra symbol: FUN_015803f0 */


void FUN_015803f0(longlong *param_1,uint param_2,undefined8 param_3,char param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_368 [32];
  undefined8 local_348;
  undefined8 local_338;
  undefined8 local_330;
  undefined8 local_328;
  undefined1 *local_320;
  undefined2 local_30a;
  longlong local_308;
  char local_2f9;
  longlong local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  longlong local_2e0;
  longlong local_2d8;
  char local_2c9;
  longlong local_2c8;
  int local_2bc;
  undefined8 local_2b8;
  longlong local_2b0;
  longlong local_2a8;
  undefined8 local_2a0;
  longlong local_298;
  longlong local_290;
  undefined8 local_288;
  longlong local_280;
  longlong local_278;
  undefined1 local_26a [4];
  ushort local_266;
  undefined4 local_262;
  undefined8 local_228;
  undefined1 local_21c [34];
  uint local_1fa;
  ushort local_1da [33];
  undefined8 local_198;
  undefined1 local_18e [20];
  undefined4 local_17a;
  undefined1 local_14c [20];
  undefined4 local_138;
  undefined1 local_10a [20];
  int local_f6;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 local_b4 [66];
  undefined1 local_72 [42];
  longlong local_48;
  undefined8 local_30 [2];
  
  local_320 = auStack_368;
  local_338 = 0;
  local_330 = 0;
  local_328 = 0;
  local_278 = 0;
  local_280 = 0;
  local_30[0] = 0;
  local_c0 = 0;
  local_c8 = 0;
  FUN_00417580(local_26a,&DAT_015764a8);
  FUN_00417580(local_b4,&DAT_015764a8);
  FUN_00417580(local_72,&DAT_015764a8);
  FUN_00417580(local_10a,&DAT_015764a8);
  FUN_00417580(local_14c,&DAT_015764a8);
  FUN_00417580(local_18e,&DAT_015764a8);
  FUN_00417580(local_1da,&DAT_015764a8);
  FUN_00417580(local_21c,&DAT_015764a8);
  uVar3 = FUN_00417740(local_26a,&DAT_015764a8);
  FUN_01581660(param_1,param_2,&local_228,uVar3);
  FUN_00417c40(param_1 + 0xd,local_26a,&DAT_015764a8);
  uVar3 = FUN_00414480(&local_280);
  cVar1 = FUN_0157f7f0(*param_1,local_26a,uVar3);
  if (cVar1 == '\0') {
    FUN_00417740(local_b4,&DAT_015764a8);
    local_290 = param_1[6];
    if (*(uint *)(local_290 + 0x10) <= param_2) {
      FUN_00594f90();
    }
    FUN_00417c40(local_b4,*(longlong *)(local_290 + 8) + (longlong)(int)param_2 * 0x42,&DAT_015764a8
                );
    local_2a0 = (**(code **)(*param_1 + 0x28))(param_1,local_b4);
    FUN_00417740(local_72,&DAT_015764a8);
    local_298 = param_1[6];
    if (*(uint *)(local_298 + 0x10) <= param_2) {
      FUN_00594f90();
    }
    FUN_00417c40(local_72,*(longlong *)(local_298 + 8) + (longlong)(int)param_2 * 0x42,&DAT_015764a8
                );
    FUN_00414480(local_30);
    local_2a8 = local_48;
    local_2b0 = local_48;
    if (local_48 != 0) {
      local_2b0 = *(longlong *)(local_48 + -8);
    }
    local_348 = CONCAT44(local_348._4_4_,(undefined4)local_2b0);
    FUN_0045aba0(local_2a0,local_30,local_48,0);
    FUN_00414b50(&local_280,local_30[0]);
    FUN_00414480(local_30);
    FUN_00417740(local_72,&DAT_015764a8);
    FUN_00417740(local_b4,&DAT_015764a8);
  }
  local_348 = CONCAT71(local_348._1_7_,1);
  FUN_00450070(&local_328,local_280,&DAT_015810cc,&DAT_015810dc);
  FUN_00414b50(&local_280,local_328);
  if (param_4 == '\0') {
    FUN_00414480(&local_c8);
    FUN_00441920(&local_330,local_280);
    local_2b8 = local_330;
    FUN_005d1ea0(&local_c8,param_3,local_330,1);
    FUN_00414b50(&local_280,local_c8);
    FUN_00414480(&local_c8);
  }
  else {
    FUN_00414480(&local_c0);
    FUN_005d1ea0(&local_c0,param_3,local_280,1);
    FUN_00414b50(&local_280,local_c0);
    FUN_00414480(&local_c0);
  }
  FUN_00441710(&local_278,local_280);
  if ((param_4 != '\0') && (local_278 != 0)) {
    FUN_00441710(&local_338,local_280);
    FUN_005d03b0(local_338);
  }
  local_2bc = 0;
  if (local_280 != 0) {
    local_2bc = *(int *)(local_280 + -4);
  }
  if (*(short *)(local_280 + (longlong)(local_2bc + -1) * 2) == 0x5c) {
    FUN_01580fc0(0,local_320);
  }
  else {
    local_198 = FUN_004b9860(&PTR_FUN_0047c498,1,local_280,0xff00);
    FUN_00414ad0(param_1 + 0xc,local_280);
    if ((local_266 & 8) == 0) {
      FUN_00417740(local_10a,&DAT_015764a8);
      local_2c8 = param_1[6];
      if (*(uint *)(local_2c8 + 0x10) <= param_2) {
        FUN_00594f90();
      }
      FUN_00417c40(local_10a,*(longlong *)(local_2c8 + 8) + (longlong)(int)param_2 * 0x42,
                   &DAT_015764a8);
      local_2c9 = local_f6 != 0;
      FUN_00417740(local_10a,&DAT_015764a8);
      if (local_2c9 != '\0') {
        FUN_00417740(local_14c,&DAT_015764a8);
        local_2d8 = param_1[6];
        if (*(uint *)(local_2d8 + 0x10) <= param_2) {
          FUN_00594f90();
        }
        FUN_00417c40(local_14c,*(longlong *)(local_2d8 + 8) + (longlong)(int)param_2 * 0x42,
                     &DAT_015764a8);
        FUN_004b8ba0(local_198,local_228,local_138);
        FUN_00417740(local_14c,&DAT_015764a8);
      }
    }
    else {
      FUN_00417740(local_18e,&DAT_015764a8);
      local_2e0 = param_1[6];
      if (*(uint *)(local_2e0 + 0x10) <= param_2) {
        FUN_00594f90();
      }
      FUN_00417c40(local_18e,*(longlong *)(local_2e0 + 8) + (longlong)(int)param_2 * 0x42,
                   &DAT_015764a8);
      FUN_004b8ba0(local_198,local_228,local_17a);
      FUN_00417740(local_18e,&DAT_015764a8);
    }
    if (param_1[10] != 0) {
      local_348 = FUN_004b6da0(local_198);
      (*(code *)param_1[10])(param_1[0xb],param_1,param_1[0xc],param_1 + 0xd);
    }
    FUN_00410f20(local_198);
    FUN_00414480(param_1 + 0xc);
    cVar1 = FUN_00440a20(local_280,1);
    if (cVar1 != '\0') {
      cVar1 = FUN_0157c840(local_262,&local_288);
      if (cVar1 != '\0') {
        FUN_005d1640(local_280,1);
        local_2e8 = local_288;
        local_348._0_1_ = 1;
        FUN_005d0e50(local_280,&local_2e8,0,0);
        FUN_005d1640(local_280,1);
        local_2f0 = local_288;
        local_348 = CONCAT71(local_348._1_7_,1);
        FUN_005d0e50(local_280,0,0,&local_2f0);
      }
      FUN_00417740(local_1da,&DAT_015764a8);
      local_2f8 = param_1[6];
      if (*(uint *)(local_2f8 + 0x10) <= param_2) {
        FUN_00594f90();
      }
      FUN_00417c40(local_1da,*(longlong *)(local_2f8 + 8) + (longlong)(int)param_2 * 0x42,
                   &DAT_015764a8);
      local_2f9 = local_1da[0] >> 8 == 0;
      FUN_00417740(local_1da,&DAT_015764a8);
      if (local_2f9 != '\0') {
        FUN_00417740(local_21c,&DAT_015764a8);
        local_308 = param_1[6];
        if (*(uint *)(local_308 + 0x10) <= param_2) {
          FUN_00594f90();
        }
        FUN_00417c40(local_21c,*(longlong *)(local_308 + 8) + (longlong)(int)param_2 * 0x42,
                     &DAT_015764a8);
        local_30a = FUN_005d1570(local_1fa & 0xff);
        FUN_005d1640(local_280,1);
        uVar2 = FUN_005d1460(local_30a);
        FUN_00441070(local_280,uVar2,1);
        FUN_00417740(local_21c,&DAT_015764a8);
      }
    }
    FUN_00417740(param_1 + 0xd,&DAT_015764a8);
    plVar5 = param_1 + 0xd;
    for (lVar4 = 8; lVar4 != 0; lVar4 = lVar4 + -1) {
      *plVar5 = 0;
      plVar5 = plVar5 + 1;
    }
    *(undefined2 *)plVar5 = 0;
    FUN_00410f20(local_228);
  }
  FUN_00414560(&local_338,3);
  FUN_00414560(&local_280,2);
  FUN_00417740(local_26a,&DAT_015764a8);
  FUN_00417840(local_21c,&DAT_015764a8,2);
  FUN_00417840(local_18e,&DAT_015764a8,3);
  FUN_00414560(&local_c8,2);
  FUN_00417840(local_b4,&DAT_015764a8,2);
  FUN_00414480(local_30);
  return;
}


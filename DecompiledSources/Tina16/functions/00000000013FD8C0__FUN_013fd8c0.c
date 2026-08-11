/* Ghidra address: 013fd8c0 */
/* Ghidra symbol: FUN_013fd8c0 */


undefined8
FUN_013fd8c0(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4,
            undefined8 param_5,longlong param_6)

{
  short sVar1;
  char cVar2;
  undefined8 uVar3;
  ushort uVar4;
  longlong *plVar5;
  int iVar6;
  bool bVar7;
  longlong local_res8;
  longlong *local_res10;
  longlong *local_res18;
  longlong *local_res20;
  undefined1 auStack_2b8 [32];
  longlong *local_298;
  undefined8 local_290;
  undefined8 local_288;
  longlong *local_280;
  undefined8 local_278;
  undefined1 local_270;
  undefined8 local_268;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined1 local_1f8 [256];
  undefined8 local_f8;
  undefined8 local_f0;
  longlong *local_e8;
  longlong *local_e0;
  undefined8 local_d8;
  undefined1 *local_d0;
  int local_c8;
  int local_c4;
  longlong *local_c0;
  undefined8 local_b8;
  bool local_a9;
  int local_a8;
  int local_a4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90 [2];
  longlong local_80;
  undefined8 local_78;
  longlong local_70;
  uint local_64;
  uint local_60;
  uint local_5c;
  undefined8 local_58;
  undefined8 local_48;
  longlong *local_40;
  longlong *local_38;
  undefined8 local_30;
  undefined8 local_28;
  longlong *local_20;
  
  local_d0 = auStack_2b8;
  local_248 = 0;
  local_250 = 0;
  local_240 = 0;
  local_238 = 0;
  local_230 = 0;
  local_220 = 0;
  local_228 = 0;
  local_210 = 0;
  local_218 = 0;
  local_200 = 0;
  local_208 = 0;
  local_f0 = 0;
  local_f8 = 0;
  local_e8 = (longlong *)0x0;
  local_e0 = (longlong *)0x0;
  local_d8 = 0;
  local_70 = 0;
  local_78 = 0;
  local_90[0] = 0;
  local_98 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_1);
  local_58 = 0;
  if (local_res8 != 0) {
    local_a4 = 0;
    if (local_res8 != 0) {
      local_a4 = *(int *)(local_res8 + -4);
    }
    local_5c = 1;
    iVar6 = local_a4;
    if (0 < local_a4) {
      do {
        if (*(short *)(local_res8 + -2 + (longlong)(int)local_5c * 2) == 0x20) {
          FUN_00416e20(&local_res8,local_5c,1);
        }
        local_5c = local_5c + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    local_5c = 1;
    (**(code **)(*local_res10 + 0x90))(local_res10);
    while( true ) {
      if (local_5c == 0) {
        local_a9 = false;
      }
      else {
        local_a8 = 0;
        if (local_res8 != 0) {
          local_a8 = *(int *)(local_res8 + -4);
        }
        local_a9 = (int)local_5c < local_a8;
      }
      if (local_a9 == false) break;
      FUN_0043e130(&local_d8,local_res8);
      local_b8 = local_d8;
      local_60 = FUN_004170c0(&DAT_013fe514,local_d8,local_5c);
      FUN_0043e130(&local_e0,local_res8);
      local_c0 = local_e0;
      plVar5 = local_e0;
      local_64 = FUN_004170c0(&DAT_013fe528,local_e0,local_5c);
      if (((int)local_60 < 1) || ((int)local_64 < 1)) {
        local_5c = local_64;
        if (local_60 != 0) {
          local_5c = local_60;
        }
      }
      else {
        plVar5 = (longlong *)(ulonglong)local_64;
        local_5c = FUN_00b905f0(local_60,plVar5);
      }
      if (local_5c != 0) {
        local_60 = local_5c;
        local_64 = 0;
        FUN_00414480(&local_70);
        while( true ) {
          local_c4 = 0;
          if (local_res8 != 0) {
            local_c4 = *(int *)(local_res8 + -4);
          }
          if ((local_c4 < (int)local_5c) ||
             (*(short *)(local_res8 + -2 + (longlong)(int)local_5c * 2) == 0x29)) break;
          sVar1 = *(short *)(local_res8 + -2 + (longlong)(int)local_5c * 2);
          uVar4 = sVar1 - 0x28;
          if (uVar4 < 8) {
            bVar7 = ((int)CONCAT71((int7)((ulonglong)plVar5 >> 8),1) << ((byte)uVar4 & 0x1f) & 0x11U
                    ) != 0;
          }
          else {
            bVar7 = false;
          }
          if (bVar7) {
            plVar5 = (longlong *)&DAT_013fe53c;
            FUN_00416ad0(&local_70,&DAT_013fe53c);
          }
          else {
            FUN_00416780(&local_e8,sVar1);
            plVar5 = local_e8;
            FUN_00416ad0(&local_70,local_e8);
          }
          local_64 = local_64 + 1;
          local_5c = local_5c + 1;
        }
        FUN_00416e20(&local_res8,local_60,local_64 + 1);
        iVar6 = (**(code **)(*local_res10 + 0xb0))(local_res10,local_70);
        if (iVar6 == -1) {
          (**(code **)(*local_res10 + 0x78))(local_res10,local_70);
        }
        FUN_00416ea0(local_70,&local_res8,local_60);
        local_c8 = 0;
        if (local_70 != 0) {
          local_c8 = *(int *)(local_70 + -4);
        }
        local_5c = local_60 + local_c8;
      }
    }
    local_48 = FUN_004b6930(&PTR_FUN_00478280,1);
    local_38 = (longlong *)FUN_01d34560(&PTR_FUN_016a2078,1,10,10);
    local_40 = (longlong *)FUN_01d34560(&PTR_FUN_016a2078,1,10,10);
    if (local_res20 != (longlong *)0x0) {
      iVar6 = (**(code **)(*local_res20 + 0x28))();
      local_5c = 0;
      if (-1 < iVar6 + -1) {
        do {
          FUN_004b3cf0(local_res20,&local_f8,local_5c);
          FUN_0043e130(&local_f0,local_f8);
          FUN_00416910(local_1f8,local_f0,0xff);
          local_80 = FUN_016a61f0(&PTR_FUN_016a1ed0,1,local_1f8,0);
          FUN_004b5390(local_res20,&local_208,local_5c);
          FUN_0043e130(local_90,local_208);
          local_298 = (longlong *)CONCAT71(local_298._1_7_,1);
          FUN_00456a50(local_90,&local_200,&DAT_013fe54c);
          FUN_00415dd0(local_80 + 0x10,local_200,0);
          *(undefined8 *)(local_80 + 0x28) = 0;
          (**(code **)(*local_38 + 0x50))(local_38,local_80);
          local_5c = local_5c + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
    }
    if ((local_res18 != (longlong *)0x0) && (local_res20 != local_res18)) {
      iVar6 = (**(code **)(*local_res18 + 0x28))();
      local_5c = 0;
      if (-1 < iVar6 + -1) {
        do {
          FUN_004b3cf0(local_res18,&local_218,local_5c);
          FUN_0043e130(&local_210,local_218);
          FUN_00416910(local_1f8,local_210,0xff);
          local_80 = FUN_016a61f0(&PTR_FUN_016a1ed0,1,local_1f8,0);
          FUN_004b5390(local_res18,&local_228,local_5c);
          FUN_0043e130(&local_98,local_228);
          local_298 = (longlong *)CONCAT71(local_298._1_7_,1);
          FUN_00456a50(&local_98,&local_220,&DAT_013fe54c);
          FUN_00415dd0(local_80 + 0x10,local_220,0);
          *(undefined8 *)(local_80 + 0x28) = 0;
          (**(code **)(*local_40 + 0x50))(local_40,local_80);
          local_5c = local_5c + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
    }
    FUN_013fd880(param_5,param_6,local_38,local_48);
    if ((param_6 != 0) && (cVar2 = FUN_01d04d50(param_6), cVar2 != '\0')) {
      local_a0 = *(undefined8 *)(*(longlong *)(param_6 + 0x1a8) + 0xc0);
      uVar3 = FUN_0177aa70(local_a0);
      local_20 = (longlong *)FUN_0177ae90(uVar3);
      while (cVar2 = thunk_FUN_0177b033(local_20), cVar2 != '\0') {
        FUN_0177aee0(local_20,&local_230);
        FUN_00416880(&local_78,local_230);
        FUN_0043e130(&local_238,local_78);
        FUN_00416910(local_1f8,local_238,0xff);
        local_80 = FUN_016a61f0(&PTR_FUN_016a1ed0,1,local_1f8,0);
        FUN_004144d0(local_80 + 0x10);
        FUN_00415dd0(&local_240,local_78,0);
        uVar3 = FUN_01779a20(local_a0,local_240);
        *(undefined8 *)(local_80 + 0x28) = uVar3;
        (**(code **)(*local_40 + 0x50))(local_40,local_80);
      }
      if (local_20 != (longlong *)0x0) {
        (**(code **)(*local_20 + -0x20))(local_20,1);
      }
    }
    local_28 = FUN_016b97f0(&DAT_016b45f0,1,0);
    FUN_0043e130(&local_248,local_res8);
    FUN_00415dd0(&local_250,local_248,0);
    local_298 = local_38;
    local_290 = 0;
    local_288 = 0;
    local_280 = local_res10;
    local_278 = local_28;
    local_270 = 0;
    local_268 = local_48;
    local_30 = FUN_016a67c0(&DAT_016a2760,1,local_250,local_40);
    local_58 = FUN_016a9250(local_30);
    FUN_00410f20(local_28);
    FUN_00410f20(local_30);
    FUN_00410f20(local_38);
    FUN_00410f20(local_40);
    FUN_00410f20(local_48);
  }
  FUN_004144d0(&local_250);
  FUN_00414480(&local_248);
  FUN_004144d0(&local_240);
  FUN_00414480(&local_238);
  FUN_004144d0(&local_230);
  FUN_00414560(&local_228,6);
  FUN_00414560(&local_f8,5);
  FUN_00414560(&local_98,2);
  FUN_00414560(&local_78,2);
  FUN_00414480(&local_res8);
  return local_58;
}


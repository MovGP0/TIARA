/* Ghidra address: 01290c30 */
/* Ghidra symbol: FUN_01290c30 */


void FUN_01290c30(longlong *param_1,longlong *param_2,longlong param_3,undefined8 param_4)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *local_res8;
  longlong *local_res10;
  longlong local_res18;
  undefined8 local_res20;
  undefined1 auStack_258 [32];
  undefined4 *local_238;
  undefined4 local_230;
  undefined1 local_228;
  undefined8 local_218;
  undefined8 local_210;
  undefined1 local_208 [16];
  undefined8 local_1f8;
  undefined8 local_1f0;
  longlong local_1e8;
  wchar_t *local_1e0;
  undefined8 local_1d8;
  longlong local_1d0;
  wchar_t *local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  wchar_t *local_1b0;
  undefined8 local_1a8;
  undefined1 *local_1a0;
  bool local_189;
  wchar_t *local_188;
  bool local_179;
  wchar_t *local_178;
  bool local_169;
  wchar_t *local_168;
  longlong local_160;
  longlong local_158;
  char local_149;
  undefined4 local_148;
  undefined4 local_144;
  undefined8 local_140;
  longlong local_138;
  longlong local_130;
  longlong local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  longlong local_100;
  longlong local_f8;
  undefined8 *local_f0;
  undefined1 local_e4 [72];
  undefined4 local_9c;
  undefined4 local_98;
  int local_94;
  int local_90;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined8 local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong *local_48;
  undefined8 local_40;
  longlong local_30;
  longlong *local_28;
  undefined8 local_20;
  
  local_1a0 = auStack_258;
  local_218 = 0;
  local_210 = 0;
  local_1f8 = 0;
  local_1f0 = 0;
  local_1e8 = 0;
  local_1e0 = (wchar_t *)0x0;
  local_1d8 = 0;
  local_1d0 = 0;
  local_1c8 = (wchar_t *)0x0;
  local_1c0 = 0;
  local_1b8 = 0;
  local_1b0 = (wchar_t *)0x0;
  local_1a8 = 0;
  local_f8 = 0;
  local_100 = 0;
  local_108 = 0;
  local_110 = 0;
  local_118 = 0;
  local_120 = 0;
  local_128 = 0;
  local_130 = 0;
  local_138 = 0;
  local_140 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_0041b910(param_1);
  FUN_00414610(local_res20);
  local_50 = 0;
  (**(code **)(*local_res8 + 0x100))(local_res8,&local_f8,&PTR_DAT_01291cf4);
  (**(code **)(*local_res8 + 0x100))(local_res8,&local_100,L"groupid");
  (**(code **)(*local_res8 + 0x100))(local_res8,&local_128,L"source");
  local_149 = '\0';
  (**(code **)(*local_res8 + 0x100))(local_res8,&local_1a8,L"position");
  FUN_00416ba0(&local_108,local_1a8,&DAT_01291d60);
  local_144 = FUN_012421e0(&local_108);
  local_148 = FUN_012421e0(&local_108);
  FUN_00441a10(&local_1b0,local_128);
  local_168 = local_1b0;
  if (local_1b0 == L".tsc") {
    local_169 = true;
  }
  else if (local_1b0 == (wchar_t *)0x0) {
    local_169 = false;
  }
  else {
    iVar3 = FUN_0043e420(local_1b0,L".tsc");
    local_169 = iVar3 == 0;
  }
  if (local_169 != false) {
    local_238 = (undefined4 *)CONCAT71(local_238._1_7_,1);
    FUN_00450070(&local_1b8,local_128,&DAT_01291d88,&DAT_01291d98);
    FUN_00414b50(&local_128,local_1b8);
    cVar1 = FUN_00440a20(local_128,1);
    if (cVar1 != '\0') {
      local_f0 = (undefined8 *)FUN_0198b200(0,&PTR_FUN_01984d18,1,0);
      local_238 = (undefined4 *)((ulonglong)local_238 & 0xffffffffffffff00);
      lVar6 = FUN_014a74d0(local_128,local_f0,local_res18,1);
      if ((lVar6 != 0) && (local_58 = FUN_019ac6a0(local_f0,local_f8), local_58 != 0)) {
        local_78 = 8;
        local_68 = *(undefined8 *)(local_58 + 0x38);
        (**(code **)(*local_res8 + 0x100))(local_res8,&local_1c0,L"size");
        FUN_00416ba0(&local_110,local_1c0,&DAT_01291d60);
        iVar3 = FUN_00416db0(local_110,&DAT_01291d60);
        if (iVar3 == 0) {
          local_74 = *(undefined4 *)(local_58 + 0x2c);
          local_70 = *(undefined4 *)(local_58 + 0x30);
        }
        else {
          thunk_FUN_04079bf6(*(undefined8 *)(local_58 + 0x38),0x6c,local_e4);
          uVar4 = FUN_012421e0(&local_110);
          iVar3 = thunk_FUN_03f3ed25(uVar4,local_94 * 100,local_9c);
          local_74 = FUN_0040c770((double)iVar3 / *(double *)(local_58 + 0x58));
          uVar4 = FUN_012421e0(&local_110);
          iVar3 = thunk_FUN_03f3ed25(uVar4,local_90 * 100,local_98);
          local_70 = FUN_0040c770((double)iVar3 / *(double *)(local_58 + 0x60));
        }
        local_238 = &local_78;
        local_50 = FUN_010b7590(0,&PTR_FUN_010b6978,local_144,local_148);
        *(undefined8 *)(local_50 + 0x58) = *(undefined8 *)(local_58 + 0x58);
        *(undefined8 *)(local_50 + 0x60) = *(undefined8 *)(local_58 + 0x60);
        *(undefined4 *)(local_50 + 0x6c) = *(undefined4 *)(local_58 + 0x6c);
        *(undefined4 *)(local_50 + 0x68) = *(undefined4 *)(local_58 + 0x68);
        *(undefined1 *)(local_50 + 0x80) = *(undefined1 *)(local_58 + 0x80);
        local_149 = '\x01';
      }
      uVar7 = (**(code **)*local_f0)(local_f0);
      FUN_00418590(uVar7,&DAT_01984da0);
    }
  }
  FUN_00441a10(&local_1c8,local_128);
  local_178 = local_1c8;
  if (local_1c8 == L".tdr") {
    local_179 = true;
  }
  else if (local_1c8 == (wchar_t *)0x0) {
    local_179 = false;
  }
  else {
    iVar3 = FUN_0043e420(local_1c8,L".tdr");
    local_179 = iVar3 == 0;
  }
  if (local_179 != false) {
    if (local_res18 != 0) {
      FUN_00441640(&local_1d0,*(undefined8 *)(local_res18 + 8));
      FUN_00416ba0(&local_128,local_1d0,local_128);
    }
    cVar1 = FUN_00440a20(local_128,1);
    if (cVar1 != '\0') {
      local_20 = FUN_00605cc0(&PTR_FUN_005f86c8,1);
      local_28 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
      local_30 = 0;
      (**(code **)(*local_res8 + 0x100))(local_res8,&local_1d8,L"size");
      FUN_00416ba0(&local_110,local_1d8,&DAT_01291d60);
      uVar4 = FUN_012421e0(&local_110);
      (**(code **)(*local_28 + 0x88))(local_28,uVar4);
      uVar4 = FUN_012421e0(&local_110);
      (**(code **)(*local_28 + 0x70))(local_28,uVar4);
      FUN_011568e0(local_128,local_res18,&local_30);
      if (local_30 != 0) {
        uVar7 = FUN_00609e10(local_28);
        uVar4 = (**(code **)(*local_28 + 0x60))(local_28);
        local_230 = (**(code **)(*local_28 + 0x48))(local_28);
        local_238 = (undefined4 *)CONCAT44(local_238._4_4_,uVar4);
        local_228 = 1;
        FUN_01156bd0(0,local_30,local_20,uVar7);
        local_78 = 8;
        local_74 = FUN_006061d0(local_20);
        local_70 = FUN_006061a0(local_20);
        local_68 = FUN_006060c0(local_20);
        local_238 = &local_78;
        local_50 = FUN_010b7590(0,&PTR_FUN_010b6978,local_144,local_148);
        *(undefined4 *)(local_50 + 0x6c) = 0x3000000;
        *(undefined4 *)(local_50 + 0x68) = 0x808080;
        *(undefined1 *)(local_50 + 0x80) = 1;
        local_149 = '\x01';
      }
      FUN_00410f20(local_20);
      FUN_00410f20(local_28);
      FUN_00410f20(local_30);
    }
  }
  FUN_00441a10(&local_1e0,local_128);
  local_188 = local_1e0;
  if (local_1e0 == L".txt") {
    local_189 = true;
  }
  else if (local_1e0 == (wchar_t *)0x0) {
    local_189 = false;
  }
  else {
    iVar3 = FUN_0043e420(local_1e0,L".txt");
    local_189 = iVar3 == 0;
  }
  if (local_189 != false) {
    if (local_res18 != 0) {
      FUN_00441640(&local_1e8,*(undefined8 *)(local_res18 + 8));
      FUN_00416ba0(&local_128,local_1e8,local_128);
    }
    cVar1 = FUN_00440a20(local_128,1);
    if (cVar1 != '\0') {
      local_158 = FUN_0149d160(0,&PTR_FUN_0149cf30);
      *(undefined4 *)(local_158 + 0xc) = local_144;
      *(undefined4 *)(local_158 + 0x10) = local_148;
      lVar6 = *(longlong *)(local_158 + 0x28);
      *(undefined1 *)(*(longlong *)(lVar6 + 0x90) + 0x98) = 1;
      *(undefined1 *)(lVar6 + 0x99) = 1;
      *(undefined1 *)(lVar6 + 0xa0) = 1;
      local_60 = local_158;
      FUN_005fc860(*(undefined8 *)(*(longlong *)(lVar6 + 0x90) + 0x80),0x808080);
      plVar8 = *(longlong **)(*(longlong *)(*(longlong *)(local_158 + 0x28) + 0x90) + 0xa0);
      (**(code **)(*plVar8 + 0xd8))(plVar8,local_128);
      local_149 = '\x01';
      (**(code **)(*local_res10 + 0x20))(local_res10,local_60);
    }
  }
  if (local_149 == '\0') {
    local_20 = FUN_00605cc0(&PTR_FUN_005f86c8,1);
    local_28 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
    local_48 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
    local_40 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
    (**(code **)(*local_res8 + 0x100))(local_res8,&local_1f0,L"size");
    FUN_00416ba0(&local_110,local_1f0,&DAT_01291d60);
    (**(code **)(*local_res8 + 0xb8))(local_res8,&local_1f8);
    FUN_0043ea00(&local_118,local_1f8);
    FUN_012429f0(&local_120,&local_118);
    FUN_00c7b9b0(local_118,local_40);
    FUN_004b6dc0(local_40,0);
    FUN_01242b40(local_28,local_40,local_120);
    uVar4 = (**(code **)(*local_28 + 0x60))(local_28);
    (**(code **)(*local_48 + 0x88))(local_48,uVar4);
    uVar4 = (**(code **)(*local_28 + 0x48))(local_28);
    (**(code **)(*local_48 + 0x70))(local_48,uVar4);
    lVar6 = FUN_00609e10(local_48);
    FUN_005fdab0(*(undefined8 *)(lVar6 + 0x80),&DAT_00bf00ff);
    plVar8 = (longlong *)FUN_00609e10(local_48);
    uVar4 = (**(code **)(*local_48 + 0x60))(local_48);
    uVar5 = (**(code **)(*local_48 + 0x48))(local_48);
    local_238 = (undefined4 *)CONCAT44(local_238._4_4_,uVar5);
    FUN_004238d0(local_208,0,0,uVar4);
    (**(code **)(*plVar8 + 0xa8))(plVar8,local_208);
    (**(code **)(*local_48 + 0x80))(local_48,1);
    FUN_0060be30(local_48,&DAT_00bf00ff);
    plVar8 = (longlong *)FUN_00609e10(local_48);
    (**(code **)(*plVar8 + 0x88))(plVar8,0,0,local_28);
    FUN_010b6d50(local_48,local_20,0,0);
    local_78 = 8;
    local_74 = FUN_006061d0(local_20);
    local_70 = FUN_006061a0(local_20);
    local_68 = FUN_006060c0(local_20);
    iVar3 = FUN_00416db0(local_110,&DAT_01291d60);
    if (iVar3 != 0) {
      thunk_FUN_04079bf6(local_68,0x6c,local_e4);
      uVar4 = FUN_012421e0(&local_110);
      local_74 = thunk_FUN_03f3ed25(uVar4,local_94 * 100,local_9c);
      uVar4 = FUN_012421e0(&local_110);
      local_70 = thunk_FUN_03f3ed25(uVar4,local_90 * 100,local_98);
    }
    local_238 = &local_78;
    local_50 = FUN_010b7590(0,&PTR_FUN_010b6978,local_144,local_148);
    FUN_00410f20(local_40);
    FUN_00410f20(local_28);
    FUN_00410f20(local_48);
    FUN_00410f20(local_20);
  }
  if (local_50 != 0) {
    local_160 = local_50;
    if (local_f8 != 0) {
      FUN_010b96f0(local_50,local_f8);
    }
    if (local_100 != 0) {
      FUN_010b9780(local_160,local_100);
    }
    (**(code **)(*local_res8 + 0x100))(local_res8,&local_210,&DAT_01291df4);
    FUN_00416910(local_160 + 0x82,local_210,0xff);
    *(bool *)(local_160 + 0x81) = local_149 == '\0';
    if (local_149 == '\0') {
      (**(code **)(*local_res8 + 0x100))(local_res8,&local_130,L"fill");
      if (local_130 == 0) {
        *(undefined4 *)(local_160 + 0x6c) = 0x3000000;
      }
      else {
        uVar4 = FUN_0043fcb0(local_130);
        uVar4 = FUN_01242280(uVar4);
        *(undefined4 *)(local_160 + 0x6c) = uVar4;
      }
      (**(code **)(*local_res8 + 0x100))(local_res8,&local_138,L"bordercolor");
      if (local_138 == 0) {
        *(undefined4 *)(local_160 + 0x68) = 0x3000000;
        *(undefined1 *)(local_160 + 0x80) = 0;
      }
      else {
        uVar4 = FUN_0043fcb0(local_138);
        uVar4 = FUN_01242280(uVar4);
        *(undefined4 *)(local_160 + 0x68) = uVar4;
        (**(code **)(*local_res8 + 0x100))(local_res8,&local_218,L"borderwidth");
        uVar2 = FUN_0043fc50(local_218,1);
        *(undefined1 *)(local_160 + 0x80) = uVar2;
      }
    }
    (**(code **)(*local_res10 + 0x20))(local_res10,local_50);
  }
  FUN_00414560(&local_218,2);
  FUN_00414560(&local_1f8,0xb);
  FUN_00414560(&local_140,10);
  FUN_0041b800(&local_res8);
  FUN_00414480(&local_res20);
  return;
}


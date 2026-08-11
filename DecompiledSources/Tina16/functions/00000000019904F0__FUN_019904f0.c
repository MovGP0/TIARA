/* Ghidra address: 019904f0 */
/* Ghidra symbol: FUN_019904f0 */


void FUN_019904f0(longlong param_1,longlong *param_2,uint param_3,undefined1 param_4,char param_5,
                 char param_6,undefined8 param_7,undefined1 param_8,undefined8 param_9,
                 undefined4 param_10)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ushort local_res18;
  undefined1 auStack_278 [32];
  wchar_t *local_258;
  undefined4 local_250;
  undefined1 local_248;
  undefined1 local_240;
  undefined1 local_238;
  uint local_230;
  undefined1 local_228 [16];
  undefined8 local_218;
  undefined1 *local_210;
  int local_204;
  int local_200;
  int local_1fc;
  int local_1f8;
  int local_1f4;
  int local_1f0;
  int local_1ec;
  int local_1e8;
  int local_1e4;
  int local_1e0;
  undefined8 local_1d8;
  char local_1ca;
  char local_1c9;
  undefined8 local_1c8 [2];
  int local_1b4;
  undefined8 local_1a0;
  undefined8 local_198;
  double local_190;
  double local_188;
  undefined4 local_174;
  uint local_170;
  undefined4 local_16c;
  undefined4 local_168;
  int local_164;
  int local_160;
  undefined1 local_15c [16];
  int local_14c;
  int local_148;
  int local_144;
  int local_140;
  undefined8 local_13c [16];
  undefined8 local_bc [13];
  undefined8 local_50;
  undefined1 local_46;
  undefined1 local_45;
  undefined1 local_44;
  undefined1 local_43;
  undefined1 local_42;
  undefined1 local_41;
  undefined8 local_40;
  undefined8 local_38;
  longlong *local_30;
  
  local_210 = auStack_278;
  local_218 = 0;
  local_1c8[0] = 0;
  local_1d8 = 0;
  FUN_0041b910(param_9);
  local_41 = PTR_DAT_02004010[0x816];
  local_42 = PTR_DAT_02004010[0x814];
  local_43 = *PTR_DAT_020037e8;
  local_44 = PTR_DAT_02004010[0x815];
  local_45 = *PTR_DAT_02005310;
  local_46 = *PTR_DAT_02001560;
  if ((param_5 != '\0') &&
     (iVar2 = FUN_00416db0(*(undefined8 *)PTR_DAT_02001b00,L"{10920985-9400-45D4-B218-55DC7E202202}"
                          ), iVar2 != 0)) {
    local_258 = L"TINA.INI";
    FUN_00416cd0(&local_218,3,*(undefined8 *)PTR_DAT_02005010,&DAT_01991088);
    local_50 = FUN_005da0f0(&PTR_FUN_005d5a90,1,local_218);
    puVar7 = (undefined8 *)PTR_DAT_02003ad0;
    puVar8 = local_bc;
    for (lVar6 = 0xd; lVar6 != 0; lVar6 = lVar6 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    *(undefined4 *)puVar8 = *(undefined4 *)puVar7;
    puVar7 = (undefined8 *)PTR_DAT_02005048;
    puVar8 = local_13c;
    for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    FUN_01aa0060(local_50,L"{10920985-9400-45D4-B218-55DC7E202202}",PTR_DAT_02003ad0,
                 PTR_DAT_02005048);
    FUN_00410f20(local_50);
  }
  if (*(char *)(param_1 + 0x98) == '\0') {
    local_258 = (wchar_t *)CONCAT71(local_258._1_7_,local_42);
    local_250 = CONCAT31(local_250._1_3_,local_43);
    local_248 = local_44;
    local_240 = local_46;
    local_238 = local_45;
    local_230 = param_3;
    FUN_0198d580(param_1,&local_40,param_4,local_41);
    FUN_00b95880(&local_40,param_10,param_10);
    if (param_6 == '\x01') {
      local_258 = (wchar_t *)CONCAT71(local_258._1_7_,local_42);
      local_250 = CONCAT31(local_250._1_3_,local_43);
      local_248 = local_44;
      local_240 = 1;
      local_238 = local_45;
      local_230 = param_3;
      FUN_0198d580(param_1,&local_14c,param_4,local_41);
      FUN_00b95880(&local_14c,param_10,param_10);
      if ((int)local_40 < local_14c) {
        local_1e0 = (int)local_40;
      }
      else {
        local_1e0 = local_14c;
      }
      local_1e4 = local_40._4_4_;
      local_1e8 = local_148;
      if (local_40._4_4_ < local_148) {
        local_1ec = local_40._4_4_;
      }
      else {
        local_1ec = local_148;
      }
      local_1f0 = (int)local_38;
      local_1f4 = local_144;
      if (local_144 < (int)local_38) {
        local_1f8 = (int)local_38;
      }
      else {
        local_1f8 = local_144;
      }
      local_1fc = local_38._4_4_;
      local_200 = local_140;
      if (local_140 < local_38._4_4_) {
        local_204 = local_38._4_4_;
      }
      else {
        local_204 = local_140;
      }
      local_258 = (wchar_t *)CONCAT44(local_258._4_4_,local_204);
      FUN_00b956d0(&local_40,local_1e0,local_1ec,local_1f8);
    }
  }
  else {
    local_40 = *(ulonglong *)(param_1 + 0xa4);
    local_38 = *(ulonglong *)(param_1 + 0xac);
  }
  local_160 = (int)local_38 - (int)local_40;
  local_164 = local_38._4_4_ - local_40._4_4_;
  iVar2 = (**(code **)(*param_2 + 0x60))(param_2);
  local_res18 = (ushort)param_3;
  if (((iVar2 == 0) || (iVar2 = (**(code **)(*param_2 + 0x48))(param_2), iVar2 == 0)) ||
     ((local_res18 & 2) != 1)) {
    local_1c9 = '\0';
  }
  else {
    local_1c9 = '\x01';
  }
  iVar2 = (**(code **)(*param_2 + 0x60))(param_2);
  if ((iVar2 == 0) && (iVar2 = (**(code **)(*param_2 + 0x48))(param_2), iVar2 == 0)) {
    lVar6 = *(longlong *)(param_1 + 0x210);
    local_198 = *(undefined8 *)(lVar6 + 0x58);
    local_1a0 = *(undefined8 *)(lVar6 + 0x68);
    *(undefined8 *)(lVar6 + 0x58) = 0;
    *(undefined8 *)(lVar6 + 0x68) = 0;
    local_258 = (wchar_t *)&local_164;
    FUN_01a98380(lVar6,local_160,local_164,&local_160);
    lVar6 = *(longlong *)(param_1 + 0x210);
    *(undefined8 *)(lVar6 + 0x58) = local_198;
    *(undefined8 *)(lVar6 + 0x68) = local_1a0;
    (**(code **)(*param_2 + 0x88))(param_2,local_160);
    (**(code **)(*param_2 + 0x70))(param_2,local_164);
  }
  else {
    local_160 = (**(code **)(*param_2 + 0x60))(param_2);
    local_164 = (**(code **)(*param_2 + 0x48))(param_2);
  }
  if (0 < (int)local_38 - (int)local_40) {
    if (0 < local_38._4_4_ - local_40._4_4_) {
      local_188 = (double)local_160 / (double)((int)local_38 - (int)local_40);
      local_190 = (double)local_164 / (double)(local_38._4_4_ - local_40._4_4_);
      if (local_188 != local_190) {
        if (local_190 <= local_188) {
          local_160 = FUN_0040c770(local_190 * (double)((int)local_38 - (int)local_40));
        }
        else {
          local_164 = FUN_0040c770(local_188 * (double)(local_38._4_4_ - local_40._4_4_));
        }
      }
    }
  }
  local_258._0_4_ = local_164;
  FUN_00b956d0(local_15c,0,0,local_160);
  uVar5 = FUN_00609e10(param_2);
  uVar5 = FUN_005ffa40(uVar5);
  local_30 = (longlong *)FUN_01a976c0(0,&PTR_FUN_01a96ef0,uVar5,&local_40);
  (**(code **)(*local_30 + 0x10))(local_30,local_15c);
  local_1ca = FUN_00b958f0(&local_40);
  FUN_00414ad0(local_30 + 0x22,*(undefined8 *)(*(longlong *)(param_1 + 0x210) + 0x110));
  FUN_01a98210(local_30,&local_40);
  local_250 = (**(code **)(*local_30 + 0xd0))(local_30,0);
  local_258 = (wchar_t *)CONCAT44(local_258._4_4_,local_38._4_4_);
  (**(code **)(*local_30 + 0x60))
            (local_30,local_40 & 0xffffffff,local_40._4_4_,local_38 & 0xffffffff);
  FUN_00b95860(&local_40,0xffffffce,0xffffffce);
  local_38 = CONCAT44(local_38._4_4_ + 100,(int)local_38 + 100);
  if (((param_3 & 1) != 0) && ((param_3 & 0x20) == 0)) {
    FUN_0199c750(param_1,&local_40,local_30);
  }
  if (((local_1c9 != '\0') && (local_1ca == '\0')) && (param_6 == '\0')) {
    local_258 = (wchar_t *)&local_16c;
    FUN_01a982d0(local_30,0,0,&local_168);
    uVar3 = (**(code **)(*param_2 + 0x60))(param_2);
    uVar4 = (**(code **)(*param_2 + 0x48))(param_2);
    local_258 = (wchar_t *)&local_174;
    FUN_01a982d0(local_30,uVar3,uVar4,&local_170);
    local_258 = (wchar_t *)CONCAT44(local_258._4_4_,local_174);
    FUN_00b95be0(local_228,local_168,local_16c,local_170);
    FUN_0199e410(param_1,local_30,local_228,1);
  }
  iVar2 = *(int *)(param_1 + 0x10);
  local_1b4 = 0;
  if (-1 < iVar2 + -1) {
    do {
      uVar5 = FUN_00b94e60(param_1,local_1b4);
      cVar1 = FUN_01990070(auStack_278,uVar5);
      if (cVar1 != '\0') {
        FUN_00b94e60(param_1,local_1b4);
        break;
      }
      local_1b4 = local_1b4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if ((param_3 & 0x10) != 0) {
    local_258 = (wchar_t *)0x0;
    local_250 = CONCAT31(local_250._1_3_,1);
    local_248 = param_8;
    FUN_0198f380(param_1,param_1,local_30,param_9);
  }
  uVar5 = (**(code **)*local_30)(local_30);
  FUN_00418590(uVar5,&DAT_01a96ff8);
  if ((param_5 != '\0') &&
     (iVar2 = FUN_00416db0(*(undefined8 *)PTR_DAT_02001b00,L"{10920985-9400-45D4-B218-55DC7E202202}"
                          ), iVar2 != 0)) {
    puVar7 = local_bc;
    puVar8 = (undefined8 *)PTR_DAT_02003ad0;
    for (lVar6 = 0xd; lVar6 != 0; lVar6 = lVar6 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    *(undefined4 *)puVar8 = *(undefined4 *)puVar7;
    puVar7 = local_13c;
    puVar8 = (undefined8 *)PTR_DAT_02005048;
    for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
  }
  FUN_00414480(&local_218);
  FUN_0041b800(&local_1d8);
  FUN_00414480(local_1c8);
  FUN_0041b800(&param_9);
  return;
}


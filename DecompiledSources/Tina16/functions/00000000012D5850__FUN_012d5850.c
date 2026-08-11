/* Ghidra address: 012d5850 */
/* Ghidra symbol: FUN_012d5850 */


undefined1 FUN_012d5850(longlong param_1,char param_2,undefined1 param_3,longlong param_4)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 auStack_1a8 [32];
  wchar_t *local_188;
  undefined1 local_180;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined1 *local_f0;
  undefined4 local_dc;
  longlong local_d8;
  undefined1 local_c9;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 local_b4 [8];
  undefined1 local_ac [32];
  longlong local_8c;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  undefined8 local_40;
  undefined1 local_31;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_f0 = auStack_1a8;
  local_170 = 0;
  local_168 = 0;
  local_160 = 0;
  local_158 = 0;
  local_150 = 0;
  local_148 = 0;
  local_140 = 0;
  local_138 = 0;
  local_130 = 0;
  local_128 = 0;
  local_120 = 0;
  local_118 = 0;
  local_108 = 0;
  local_110 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  FUN_00417580(local_ac,&DAT_01d2e6d8);
  local_31 = 0;
  if ((((param_2 != '\x06') || (*(char *)(*(longlong *)(param_1 + 0x20) + 6) == '\0')) &&
      ((param_2 != '\b' || (*(char *)(*(longlong *)(param_1 + 0x20) + 7) == '\0')))) &&
     ((param_2 != '\x01' || (*(char *)(*(longlong *)(param_1 + 0x20) + 8) == '\0'))))
  goto code_r0x012d675c;
  FUN_00414480(&local_50);
  if (param_2 == '\x06') {
    if (*(char *)(*(longlong *)(param_1 + 0x20) + 9) != '\0') {
      FUN_00414b50(&local_50,L".corner");
    }
    FUN_00416ba0(&local_70,local_50,L".testresult.tr");
    FUN_00416ba0(&local_78,local_50,L".refresult.tr");
  }
  else if (param_2 == '\b') {
    if (*(char *)(*(longlong *)(param_1 + 0x20) + 10) != '\0') {
      FUN_00414b50(&local_50,L".corner");
    }
    FUN_00416ba0(&local_70,local_50,L".testresult.ac");
    FUN_00416ba0(&local_78,local_50,L".refresult.ac");
  }
  else {
    if (*(char *)(*(longlong *)(param_1 + 0x20) + 0xb) != '\0') {
      FUN_00414b50(&local_50,L".corner");
    }
    FUN_00416ba0(&local_70,local_50,L".testresult.dc");
    FUN_00416ba0(&local_78,local_50,L".refresult.dc");
  }
  FUN_004414c0(&local_40,*(undefined8 *)(param_1 + 0x28),local_78);
  FUN_0044f850(&local_f8,*(undefined8 *)(param_1 + 0x38));
  FUN_00441d00(&local_48,local_f8,local_40);
  local_188 = (wchar_t *)local_48;
  FUN_00416cd0(&local_68,3,*(undefined8 *)(param_1 + 0x40),&DAT_012d698c);
  local_188 = (wchar_t *)local_48;
  FUN_00416cd0(&local_58,3,*(undefined8 *)(param_1 + 0x40),&DAT_012d698c);
  if (*(char *)(param_1 + 0x10) == '\x01') {
    FUN_004414c0(&local_40,*(undefined8 *)(param_1 + 0x28),local_70);
    FUN_0044f850(&local_100,*(undefined8 *)(param_1 + 0x38));
    FUN_00441d00(&local_48,local_100,local_40);
    local_188 = (wchar_t *)local_48;
    FUN_00416cd0(&local_60,3,*(undefined8 *)(param_1 + 0x40),&DAT_012d698c);
  }
  cVar2 = FUN_00440a20(local_58,1);
  if (cVar2 == '\0') {
LAB_012d6653:
    if (*(char *)(param_1 + 0x10) == '\0') {
      local_188 = L"Reference result not found";
      local_180 = 0;
      FUN_012d2550(param_1,7,param_2,param_3);
    }
    else {
      cVar2 = FUN_00440a20(local_58,1);
      if (cVar2 == '\0') {
        cVar2 = FUN_00440a20(local_60,1);
        if (cVar2 == '\0') {
          local_188 = L"Reference and test results not found";
          local_180 = 0;
          FUN_012d2550(param_1,7,param_2,param_3);
          goto code_r0x012d675c;
        }
      }
      cVar2 = FUN_00440a20(local_58,1);
      if (cVar2 == '\0') {
        local_188 = L"Reference result not found";
        local_180 = 0;
        FUN_012d2550(param_1,7,param_2,param_3);
      }
      else {
        local_188 = L"Test result not found";
        local_180 = 0;
        FUN_012d2550(param_1,7,param_2,param_3);
      }
    }
    goto code_r0x012d675c;
  }
  if (*(char *)(param_1 + 0x10) != '\0') {
    cVar2 = FUN_00440a20(local_60,1);
    if (cVar2 == '\0') goto LAB_012d6653;
  }
  local_20 = FUN_004b9860(&PTR_FUN_0047c498,1,local_58,0x20);
  if (*(char *)(param_1 + 0x10) == '\x01') {
    local_28 = FUN_004b9860(&PTR_FUN_0047c498,1,local_60,0x20);
  }
  else {
    local_28 = 0;
  }
  local_188 = (wchar_t *)((ulonglong)local_188 & 0xffffffffffffff00);
  local_10 = FUN_01d30b30(&DAT_01d2e8e8,1,local_20,0x40);
  if (*(char *)(param_1 + 0x10) == '\x01') {
    local_188 = (wchar_t *)((ulonglong)local_188 & 0xffffffffffffff00);
    local_18 = FUN_01d30b30(&DAT_01d2e8e8,1,local_28,0x40);
  }
  else {
    local_18 = 0;
  }
  FUN_01d317c0(local_10,local_ac);
  local_d8 = local_8c;
  local_dc = 0;
  if (local_8c != 0) {
    local_dc = *(undefined4 *)(local_8c + -4);
  }
  FUN_00416dc0(*(longlong *)(param_1 + 0x18) + 0x30,local_8c,6,local_dc);
  iVar3 = FUN_004170c0(&DAT_012d699c,*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x30),1);
  if (0 < iVar3) {
    iVar3 = FUN_004170c0(&DAT_012d699c,*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x30),1);
    FUN_00416dc0(&local_110,*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x30),1,iVar3 + -1);
    FUN_0043ea00(&local_108,local_110);
    FUN_00414ad0(*(longlong *)(param_1 + 0x18) + 0x30,local_108);
  }
  FUN_01d30e90(local_10,local_b4);
  if (*(char *)(param_1 + 0x10) == '\0') {
    FUN_01d30f00(local_10,*(longlong *)(param_1 + 0x18) + 8,8);
    FUN_01d30f00(local_10,*(longlong *)(param_1 + 0x18) + 0x24,4);
    FUN_01d30f00(local_10,*(longlong *)(param_1 + 0x18) + 0x2c,4);
  }
  local_c0 = FUN_01cc3bb0(&PTR_FUN_01cb5bc0,1,local_10);
  if (*(char *)(param_1 + 0x10) == '\x01') {
    FUN_01d317c0(local_18,local_ac);
    FUN_01d30e90(local_18,local_b4);
    local_c8 = FUN_01cc3bb0(&PTR_FUN_01cb5bc0,1,local_18);
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    local_c9 = 0;
  }
  else {
    local_c9 = *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xa0) + 0xe29);
  }
  if (*(char *)(param_1 + 0x5a) != '\0') {
    FUN_00416ba0(&local_118,local_68,L".gif");
    cVar2 = FUN_00440a20(local_118,1);
    if ((cVar2 == '\0') || (*(char *)(param_1 + 0x10) == '\x01')) {
      FUN_00441640(&local_120,local_68);
      cVar2 = FUN_00440b00(local_120,1);
      if (cVar2 == '\0') {
        FUN_00441640(&local_128,local_68);
        cVar2 = FUN_00440c30(local_128);
        if (cVar2 == '\0') goto LAB_012d60ae;
      }
      if (*(char *)(param_1 + 0x10) == '\0') {
        if (param_4 == 0) {
          lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0xa0);
          local_188 = (wchar_t *)CONCAT71(local_188._1_7_,*(undefined1 *)(lVar1 + 0xe2b));
          local_180 = local_c9;
          FUN_012d1e50(local_c0,local_68,param_2,lVar1 + 0x492);
        }
        else {
          FUN_012db250(param_4,param_2,local_68,local_c9);
        }
      }
      else {
        local_188 = (wchar_t *)CONCAT71(local_188._1_7_,3);
        local_180 = 0;
        FUN_012d1e50(local_c0,local_68,param_2,PTR_DAT_02001120);
      }
    }
LAB_012d60ae:
    FUN_004414c0(&local_40,*(undefined8 *)(param_1 + 0x28),local_70);
    FUN_0044f850(&local_130,*(undefined8 *)(param_1 + 0x38));
    FUN_00441d00(&local_48,local_130,local_40);
    local_188 = (wchar_t *)local_48;
    FUN_00416cd0(&local_68,3,*(undefined8 *)(param_1 + 0x40),&DAT_012d698c);
    FUN_00441640(&local_138,local_68);
    cVar2 = FUN_00440b00(local_138,1);
    if (cVar2 == '\0') {
      FUN_00441640(&local_140,local_68);
      cVar2 = FUN_00440c30(local_140);
      if (cVar2 == '\0') goto LAB_012d6223;
    }
    if (*(char *)(param_1 + 0x10) == '\0') {
      if (param_4 == 0) {
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0xa0);
        local_188 = (wchar_t *)CONCAT71(local_188._1_7_,*(undefined1 *)(lVar1 + 0xe2b));
        local_180 = local_c9;
        FUN_012d1e50(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0xb0),local_68,param_2,
                     lVar1 + 0x492);
      }
      else {
        FUN_012db250(param_4,param_2,local_68,local_c9);
      }
    }
    else {
      local_188 = (wchar_t *)CONCAT71(local_188._1_7_,3);
      local_180 = 0;
      FUN_012d1e50(local_c8,local_68,param_2,PTR_DAT_02001120);
    }
  }
LAB_012d6223:
  if (*(char *)(param_1 + 0x5b) != '\0') {
    FUN_00416ba0(&local_148,local_58,L".txt");
    cVar2 = FUN_00440a20(local_148,1);
    if (cVar2 == '\0') {
      FUN_00441640(&local_150,local_58);
      cVar2 = FUN_00440b00(local_150,1);
      if (cVar2 == '\0') {
        FUN_00441640(&local_158,local_58);
        cVar2 = FUN_00440c30(local_158);
        if (cVar2 == '\0') goto LAB_012d6315;
      }
      if (param_4 == 0) {
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0xa0);
        local_188 = (wchar_t *)CONCAT71(local_188._1_7_,*(undefined1 *)(lVar1 + 0xe2b));
        local_180 = local_c9;
        FUN_012d2130(local_c0,local_58,param_2,lVar1 + 0x492);
      }
      else {
        FUN_012db2f0(param_4,param_2,local_58,local_c9);
      }
    }
LAB_012d6315:
    FUN_004414c0(&local_40,*(undefined8 *)(param_1 + 0x28),local_70);
    FUN_0044f850(&local_160,*(undefined8 *)(param_1 + 0x38));
    FUN_00441d00(&local_48,local_160,local_40);
    local_188 = (wchar_t *)local_48;
    FUN_00416cd0(&local_58,3,*(undefined8 *)(param_1 + 0x40),&DAT_012d698c);
    FUN_00441640(&local_168,local_58);
    cVar2 = FUN_00440b00(local_168,1);
    if (cVar2 == '\0') {
      FUN_00441640(&local_170,local_58);
      cVar2 = FUN_00440c30(local_170);
      if (cVar2 == '\0') goto LAB_012d6447;
    }
    if (param_4 == 0) {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0xa0);
      local_188 = (wchar_t *)CONCAT71(local_188._1_7_,*(undefined1 *)(lVar1 + 0xe2b));
      local_180 = local_c9;
      FUN_012d2130(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0xb0),local_58,param_2,lVar1 + 0x492
                  );
    }
    else {
      FUN_012db2f0(param_4,param_2,local_58,local_c9);
    }
  }
LAB_012d6447:
  if (*(char *)(param_1 + 0x10) == '\0') {
    FUN_01cc6020(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0xb0));
    FUN_01cc6020(local_c0);
    local_188 = (wchar_t *)CONCAT71(local_188._1_7_,param_3);
    local_31 = FUN_012d0890(param_1,*(undefined8 *)(*(longlong *)(param_1 + 8) + 0xb0),local_c0,
                            param_2);
    cVar2 = FUN_01cc6030(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0xb0));
    if (cVar2 != '\0') {
      *(undefined8 *)(*(longlong *)(param_1 + 8) + 0xb0) = 0;
    }
  }
  else {
    FUN_01cc6020(local_c8);
    FUN_01cc6020(local_c0);
    local_188 = (wchar_t *)CONCAT71(local_188._1_7_,param_3);
    local_31 = FUN_012d0890(param_1,local_c8,local_c0,param_2);
    cVar2 = FUN_01cc6030(local_c8);
    if (cVar2 != '\0') {
      local_c8 = 0;
    }
    FUN_00410f20(local_c8);
    iVar3 = FUN_01d31a40(local_18);
    if (iVar3 != 0) {
      uVar4 = FUN_01d31a40(local_18);
      FUN_00b047e0(uVar4);
    }
  }
  cVar2 = FUN_01cc6030(local_c0);
  if (cVar2 != '\0') {
    local_c0 = 0;
  }
  FUN_00410f20(local_c0);
  iVar3 = FUN_01d31a40(local_10);
  if (iVar3 != 0) {
    uVar4 = FUN_01d31a40(local_10);
    FUN_00b047e0(uVar4);
  }
  FUN_00410f20(local_10);
  FUN_00410f20(local_18);
  FUN_00410f20(local_20);
  FUN_00410f20(local_28);
code_r0x012d675c:
  FUN_00414560(&local_170,0x10);
  FUN_00417740(local_ac,&DAT_01d2e6d8);
  FUN_00414560(&local_78,8);
  return local_31;
}


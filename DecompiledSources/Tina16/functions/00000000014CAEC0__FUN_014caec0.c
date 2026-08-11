/* Ghidra address: 014caec0 */
/* Ghidra symbol: FUN_014caec0 */


longlong *
FUN_014caec0(longlong param_1,char param_2,longlong *param_3,undefined1 param_4,undefined1 param_5,
            char param_6,longlong param_7)

{
  uint uVar1;
  char cVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  bool bVar10;
  undefined1 auStack_198 [32];
  wchar_t *local_178;
  longlong *local_170;
  short *local_168;
  undefined1 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  longlong local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined1 *local_110;
  uint local_100 [8];
  byte local_dd;
  char local_dc [2];
  byte local_da;
  byte local_d9;
  undefined1 local_d8 [14];
  undefined1 local_ca;
  char local_c9;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  short local_ac [2];
  ulonglong local_a8;
  undefined4 uStack_a0;
  undefined4 local_9c;
  char local_98;
  undefined1 auStack_97 [3];
  undefined1 local_94;
  undefined1 local_93;
  undefined2 uStack_92;
  undefined8 local_90;
  undefined4 local_88;
  longlong *local_48;
  
  local_110 = auStack_198;
  local_158 = 0;
  local_148 = 0;
  local_150 = 0;
  local_140 = 0;
  local_130 = 0;
  local_138 = 0;
  local_120 = 0;
  local_128 = 0;
  local_118 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_c8 = 0;
  FUN_00414610(param_7);
  FUN_00417580(local_100,&DAT_00e044a8);
  local_48 = (longlong *)0x0;
  *(longlong **)(param_1 + 0x28) = param_3;
  *(char *)(param_1 + 0x20) = param_6;
  if (param_6 != '\0') {
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    lVar7 = *(longlong *)PTR_DAT_02004e40;
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(lVar7 + 0x27f8);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(lVar7 + 0x2800);
  }
  *(undefined1 *)(param_1 + 0x22b8) = 0;
  *(undefined1 *)(param_1 + 0x22ba) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (param_7 == 0) {
    FUN_015fca00(&local_118,param_5,param_3);
    FUN_00414ad0(param_1 + 0x1298,local_118);
  }
  else {
    FUN_00414ad0(param_1 + 0x1298,param_7);
    FUN_015fce80(*(undefined8 *)(param_1 + 0x1298));
  }
  FUN_019af590(param_3,*(undefined8 *)(param_1 + 0x1298));
  local_178 = (wchar_t *)CONCAT71(local_178._1_7_,param_5);
  local_170 = (longlong *)((ulonglong)local_170 & 0xffffffffffff0000);
  local_168 = local_ac;
  cVar2 = FUN_014b7d50(param_4,param_3,1,0);
  if (cVar2 == '\0') {
    FUN_01b04d70(local_ac[0] + 0x86,*(undefined8 *)(*(longlong *)(param_1 + 0x22b0) + 0x1310),0);
  }
  FUN_01603020(param_3,0,0,0);
  cVar2 = FUN_019a1df0(param_3);
  if ((cVar2 == '\0') || (cVar2 = FUN_019a1ed0(param_3), cVar2 != '\0')) {
    local_dc[0] = '\0';
  }
  else {
    local_dc[0] = '\x01';
  }
  if (local_dc[0] != '\0') {
    FUN_0044d440();
  }
  local_d9 = FUN_019a1aa0(param_3,local_dc,&local_c9,&local_ca);
  if (local_dc[0] != '\0') {
    FUN_0044d440();
  }
  uVar3 = FUN_015fc1d0(*(longlong *)(param_1 + 0x22b0) + 0xe81);
  *(undefined1 *)(param_1 + 0x22b9) = uVar3;
  FUN_015f23e0(param_3);
  local_da = *PTR_DAT_02004ba0;
  if ((((local_dc[0] == '\0') && (local_d9 == 0)) && (local_c9 != '\0')) &&
     (*(char *)(param_1 + 0x22b9) != '\0')) {
    *(undefined1 *)(param_1 + 0x22ba) = 1;
    plVar5 = (longlong *)FUN_01cf1750(0,&PTR_FUN_01cf10a8,9);
    *(longlong **)(param_1 + 0x23d8) = plVar5;
    (**(code **)(*plVar5 + 0x128))(plVar5,&local_128);
    FUN_019a44e0(param_3,&local_120,local_128,*(undefined8 *)(param_1 + 0x23d8));
    FUN_017bf050(plVar5,0,local_120);
    uVar4 = (**(code **)(**(longlong **)(param_1 + 0x23d8) + 0x2c8))
                      (*(longlong **)(param_1 + 0x23d8));
    FUN_00409570(uVar4);
    FUN_01d38290(*(undefined8 *)(param_1 + 0x23d8),1);
  }
  FUN_01610c90(param_1 + 0x22d0);
  FUN_019a10d0(param_3,param_1 + 0x22d0,param_1 + 0x22c0,param_1 + 0x22c4);
  if ((((*(int *)(param_1 + 0x22d0) < 1) && (*(int *)(param_1 + 0x22e0) < 1)) &&
      ((*(int *)(param_1 + 0x2300) < 1 &&
       ((*(int *)(param_1 + 0x2340) < 1 && (*(int *)(param_1 + 0x2310) < 1)))))) &&
     ((*(uint *)(param_1 + 0x22c0) & 2) == 0)) {
    local_dd = 0;
  }
  else {
    local_dd = 1;
  }
  if ((0 < *(int *)(param_1 + 0x2320)) && (*(int *)(param_1 + 0x2320) != 1)) {
    uVar6 = FUN_0044d490(&PTR_FUN_004334c0,1,L"Only one SystemC macro allowed");
    FUN_004134c0(uVar6);
  }
  *(bool *)(param_1 + 0x22bb) = *(int *)(param_1 + 0x2310) != 0;
  *(bool *)(param_1 + 0x22bc) = (*(uint *)(param_1 + 0x22c0) & 1) != 0;
  if ((*(int *)(param_1 + 0x2320) == 0) && (*(int *)(param_1 + 0x2330) == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  *(undefined1 *)(param_1 + 0x23e0) = uVar3;
  if ((local_dd & *(char *)(param_1 + 0x22b9) == '\0') != 0) {
    uVar6 = FUN_00b89270();
    FUN_0041ddd0(&local_138,PTR_PTR_020042d8);
    FUN_00b8e650(uVar6,&local_130,L"HDLStrings.Msg_Vhdl_MCUMixed",local_138);
    FUN_01b05000(local_130,0);
  }
  if ((((local_dc[0] == '\0') && ((local_da & local_d9) != 0)) ||
      (*(char *)(param_1 + 0x22ba) != '\0')) && (*(char *)(param_1 + 0x22b9) != '\0')) {
    cVar2 = '\x01';
  }
  else {
    cVar2 = '\0';
  }
  *(char *)(param_1 + 0x22b8) = cVar2;
  if (cVar2 == '\0') {
    local_48 = (longlong *)0x0;
    *(undefined1 *)(param_1 + 0x22b8) = 0;
  }
  else {
    uVar6 = FUN_00410e60(&PTR_FUN_00472dd0,1);
    *(undefined8 *)(param_1 + 0x18) = uVar6;
    uVar6 = FUN_01565fb0(&DAT_0154b1f0,1);
    *(undefined8 *)(param_1 + 0x23d0) = uVar6;
    if (((undefined **)*param_3 == &PTR_FUN_014db5f8) || ((undefined1 *)*param_3 == &LAB_014db6c8))
    {
      plVar5 = param_3;
      if (*(longlong *)PTR_DAT_020023c0 != 0) {
        FUN_01530de0(*(undefined8 *)PTR_DAT_020023c0);
        plVar5 = param_3;
      }
    }
    else {
      local_48 = (longlong *)FUN_014ca510(auStack_198,param_3,0);
      *(longlong **)(param_1 + 0x30) = local_48;
      local_48[0x91] = *(longlong *)(param_1 + 0x22b0);
      lVar7 = *(longlong *)(param_1 + 0x30);
      *(char *)(lVar7 + 0x490) = (char)param_3[0x92];
      FUN_00417c40(lVar7 + 0x492,(longlong)param_3 + 0x492,&DAT_01d0d0b8);
      *(int *)(lVar7 + 0xde0) = (int)param_3[0x1bc];
      FUN_00410f20(*(undefined8 *)(lVar7 + 0xd8));
      lVar7 = *(longlong *)(param_1 + 0x30);
      *(longlong *)(lVar7 + 0xd8) = param_3[0x1b];
      plVar5 = *(longlong **)(lVar7 + 0x438);
      (**(code **)(*plVar5 + 0x10))(plVar5,param_3[0x87]);
      lVar7 = *(longlong *)(param_1 + 0x30);
      *(char *)(lVar7 + 0x218) = (char)param_3[0x43];
      FUN_00414ad0(lVar7 + 0x360,param_3[0x6c]);
      FUN_01779380(*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x200),param_3[0x40]);
      FUN_00410f20(*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x3d0));
      *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x3d0) = param_3[0x7a];
      plVar5 = local_48;
    }
    local_48 = plVar5;
    if (*(char *)(param_1 + 0x20) != '\0') {
      lVar7 = *(longlong *)PTR_DAT_02004e40;
      *(longlong *)(lVar7 + 0x2800) = param_1;
      *(code **)(lVar7 + 0x27f8) = FUN_014cdcd0;
    }
    FUN_019af590(local_48,*(undefined8 *)(param_1 + 0x1298));
    if (((undefined **)*param_3 != &PTR_FUN_014db5f8) && ((undefined1 *)*param_3 != &LAB_014db6c8))
    {
      local_178 = (wchar_t *)CONCAT71(local_178._1_7_,param_5);
      local_170 = (longlong *)((ulonglong)local_170 & 0xffffffffffff0000);
      local_168 = local_ac;
      cVar2 = FUN_014b7d50(param_4,local_48,1,1);
      if (cVar2 == '\0') {
        FUN_01b04d70(local_ac[0] + 0x86,*(undefined8 *)(*(longlong *)(param_1 + 0x22b0) + 0x1310),0)
        ;
      }
    }
    FUN_019af700(local_48);
    puVar8 = (undefined8 *)PTR_DAT_02003ed8;
    puVar9 = (undefined8 *)(param_1 + 0x38);
    for (lVar7 = 7; lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    local_a8 = *(ulonglong *)PTR_DAT_020034d0 & 0xffffffffffffff;
    _uStack_a0 = CONCAT44(3,(int)*(undefined8 *)(PTR_DAT_020034d0 + 8));
    if ((((*PTR_DAT_02002b78 == '\0') &&
         (*(char *)(*(longlong *)(param_1 + 0x22b0) + 0x335) == '\0')) && (param_2 != '\x01')) &&
       ((*(char *)(*(longlong *)(param_1 + 0x22b0) + 0x98) != '\x01' &&
        (*(char *)(*(longlong *)(param_1 + 0x22b0) + 0x98) != '\b')))) {
      cVar2 = '\0';
    }
    else {
      cVar2 = '\x01';
    }
    _local_98 = CONCAT71((int7)((ulonglong)*(undefined8 *)(PTR_DAT_020034d0 + 0x10) >> 8),cVar2);
    uStack_92 = (undefined2)((ulonglong)*(undefined8 *)(PTR_DAT_020034d0 + 0x10) >> 0x30);
    _local_98 = CONCAT15(1,CONCAT14(PTR_DAT_020030c0[3],CONCAT13(1,_local_98)));
    local_90 = *(undefined8 *)(*(longlong *)(param_1 + 0x22b0) + 0x890);
    *(char *)(param_1 + 0x5c) = cVar2;
    *(undefined4 *)(param_1 + 0x56) = 3;
    *(undefined *)(param_1 + 0x6f) = *PTR_DAT_020017c0;
    *(undefined8 *)(param_1 + 0x3e) = *(undefined8 *)(*(longlong *)(param_1 + 0x22b0) + 0x890);
    uVar6 = FUN_015f6540(*(undefined8 *)(*(longlong *)(param_1 + 0x22b0) + 0x890));
    *(undefined8 *)(param_1 + 0x46) = uVar6;
    *(undefined8 *)(param_1 + 0x4e) = 0;
    *(undefined *)(param_1 + 0x62) = *PTR_DAT_020030c0;
    if (0 < *(int *)(param_1 + 0x2320)) {
      *(uint *)(param_1 + 99) = *(uint *)(param_1 + 99) | 0x20;
    }
    if (0 < *(int *)(param_1 + 0x2330)) {
      *(undefined4 *)(param_1 + 99) = 0x10;
      *(uint *)(param_1 + 99) = *(uint *)(param_1 + 99) | 0x40;
      if (cVar2 != '\0') {
        uVar6 = FUN_0044d490(&PTR_FUN_004334c0,1,
                             L"SystemC AMS simulation is not allowed in interactive mode");
        FUN_004134c0(uVar6);
      }
    }
    lVar7 = FUN_0154bb80(&DAT_01546f18,1);
    *(longlong *)(param_1 + 0x12a0) = lVar7;
    *(undefined1 *)(lVar7 + 0x838) = *(undefined1 *)(param_1 + 0x23e0);
    FUN_015660f0(*(undefined8 *)(param_1 + 0x23d0),lVar7);
    FUN_01566860(*(undefined8 *)(param_1 + 0x23d0),local_48);
    uVar6 = FUN_00442620(param_1 + 0x70,*(undefined8 *)(param_1 + 0x1298));
    FUN_015fcc20(uVar6,param_1 + 0x1280,*(undefined8 *)(param_1 + 0x28),0);
    FUN_01569030(*(undefined8 *)(param_1 + 0x12a0),
                 *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x360));
    local_178 = (wchar_t *)0x0;
    local_170 = local_48;
    local_168 = (short *)CONCAT71(local_168._1_7_,param_5);
    local_160 = 0;
    FUN_0155bbe0(*(undefined8 *)(param_1 + 0x12a0),*(undefined8 *)(param_1 + 0x1298),
                 *(undefined8 *)(param_1 + 0x1280),&local_a8);
    FUN_015fcd70(&local_140,*(undefined8 *)(param_1 + 0x1298));
    local_178 = L"mixed_info2.txt";
    FUN_00416cd0(&local_b8,3,local_140,&DAT_014cc1e4);
    cVar2 = FUN_00440a20(local_b8,1);
    if (cVar2 != '\0') {
      FUN_004412f0(local_b8);
    }
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0x12a0) + 0x7e8);
    if ((uVar1 == 0) || ((uVar1 & 8) != 0)) {
      FUN_015645f0();
    }
    if (0 < *(int *)(param_1 + 0x2330)) {
      FUN_015fcd70(&local_150,*(undefined8 *)(param_1 + 0x1298));
      local_178 = L"sc_options.txt";
      FUN_00416cd0(&local_148,3,local_150,&DAT_014cc1e4);
      FUN_014cdde0(param_1,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x12a0),
                   local_148);
    }
    FUN_01564e30(*(undefined8 *)(param_1 + 0x12a0));
    FUN_013b8260(*(longlong *)(param_1 + 0x28) + 0x492,local_100);
    bVar10 = (local_100[0] & 1) != 0;
    *(bool *)(param_1 + 0x23e2) = bVar10;
    if (bVar10) {
      local_178 = *(wchar_t **)(param_1 + 0x22b0);
      local_170 = *(longlong **)(local_178 + 0x980);
      local_168 = *(short **)(param_1 + 0x28);
      uVar6 = FUN_014ce2c0(&DAT_014c8190,1,*(undefined8 *)(param_1 + 0x1298),
                           *(undefined8 *)(param_1 + 0x1280));
      *(undefined8 *)(param_1 + 0x23e8) = uVar6;
      FUN_014cecb0(*(undefined8 *)(param_1 + 0x23e8));
    }
    local_88 = FUN_01566d30(*(undefined8 *)(param_1 + 0x12a0),local_d8);
    *(undefined4 *)(param_1 + 0x5e) = local_88;
    if (*(char *)(param_1 + 0x22bb) == '\0') {
      *(undefined4 *)(param_1 + 0x5e) = 0;
    }
    FUN_014ca050(auStack_198,local_48);
    FUN_019a0c10(local_48);
    FUN_014ca840(auStack_198);
    FUN_01566bd0(*(undefined8 *)(param_1 + 0x12a0));
    if ((*PTR_DAT_02002b78 != '\0') && ((*(uint *)(param_1 + 0x22c0) & 8) != 0)) {
      uVar6 = FUN_014c0b50();
      FUN_0043f750(&local_158,*(undefined4 *)(param_1 + 0x22c4));
      FUN_014c4860(uVar6,local_158);
      FUN_01ca4310(*(undefined8 *)PTR_DAT_02004e40);
    }
  }
  FUN_01610cc0(param_1 + 0x22d0);
  FUN_00414560(&local_158,9);
  FUN_00417740(local_100,&DAT_00e044a8);
  FUN_00414560(&local_c8,3);
  FUN_00414480(&param_7);
  return local_48;
}


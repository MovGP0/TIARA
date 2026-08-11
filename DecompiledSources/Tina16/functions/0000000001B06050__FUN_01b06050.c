/* Ghidra address: 01b06050 */
/* Ghidra symbol: FUN_01b06050 */


longlong FUN_01b06050(longlong param_1,char param_2,longlong param_3,undefined1 param_4,char param_5
                     ,byte param_6,undefined8 param_7,undefined8 param_8,undefined1 param_9,
                     char param_10,longlong param_11)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  bool bVar6;
  longlong local_res8;
  undefined1 auStack_198 [32];
  undefined8 local_178;
  undefined8 local_170;
  longlong local_168;
  undefined1 *local_150;
  int local_140;
  char local_139;
  undefined1 local_138 [4];
  uint local_134;
  int local_130 [4];
  int local_120;
  int local_100;
  int local_f0;
  longlong local_28;
  undefined8 local_20 [2];
  
  local_150 = auStack_198;
  local_20[0] = 0;
  FUN_00414610(param_7);
  FUN_00414610(param_8);
  FUN_00414610(param_11);
  local_res8 = param_1;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
  }
  *(longlong *)(local_res8 + 0xa0) = param_3;
  *(longlong *)(local_res8 + 0xa8) = param_3;
  lVar5 = *(longlong *)(local_res8 + 0xa0);
  *(longlong *)(lVar5 + 0x488) = local_res8;
  cVar1 = *(char *)(lVar5 + 0x490);
  *(char *)(local_res8 + 10) = cVar1;
  if (cVar1 == '\0') {
    FUN_00417c40(local_res8 + 0x5d8,PTR_DAT_02004010,&DAT_01d0d0b8);
  }
  else {
    FUN_00417c40(local_res8 + 0x5d8,*(longlong *)(local_res8 + 0xa0) + 0x492,&DAT_01d0d0b8);
  }
  *(undefined1 *)(local_res8 + 0x98) = param_4;
  *(undefined1 *)(local_res8 + 0x89) = param_4;
  *(char *)(local_res8 + 8) = param_5;
  *(undefined1 *)(local_res8 + 0xe0) = *(undefined1 *)(local_res8 + 0x882);
  *(byte *)(local_res8 + 0x108) = param_6;
  FUN_01b075a0(local_res8);
  uVar4 = FUN_0165d2e0(&DAT_0165bc78,1,local_res8);
  *(undefined8 *)(local_res8 + 0x110) = uVar4;
  uVar4 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x5c0) = uVar4;
  uVar4 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x5c8) = uVar4;
  uVar4 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x5d0) = uVar4;
  if (param_6 < 8) {
    bVar6 = ((int)CONCAT71((int7)((ulonglong)uVar4 >> 8),1) << (param_6 & 0x1f) & 0x38U) != 0;
  }
  else {
    bVar6 = false;
  }
  uVar4 = FUN_01af24a0(&DAT_01af0038,1,!bVar6,local_res8);
  *(undefined8 *)(local_res8 + 0xf10) = uVar4;
  FUN_019af590(*(undefined8 *)(local_res8 + 0xa0),param_11);
  FUN_00414ad0(local_res8 + 0x12f8,param_7);
  FUN_00414ad0(local_res8 + 0x1300,param_8);
  *(undefined1 *)(local_res8 + 0x12f3) = param_9;
  FUN_00414ad0(local_res8 + 0x1310,*(undefined8 *)(*(longlong *)(param_3 + 0x210) + 0x110));
  *(undefined4 *)(local_res8 + 0x12e8) = *(undefined4 *)(param_3 + 0xde0);
  *(undefined1 *)(local_res8 + 0xf1) = 0;
  *(undefined4 *)(local_res8 + 0xf4) = 0;
  *(undefined1 *)(local_res8 + 0x8a) = *(undefined1 *)(local_res8 + 0xdd8);
  *(undefined1 *)(local_res8 + 0xdd8) = 0;
  FUN_01610c90(local_130);
  if ((param_10 == '\0') || (param_11 == 0)) {
    local_139 = '\0';
  }
  else {
    FUN_019a10d0(*(undefined8 *)(local_res8 + 0xa0),local_130,&local_134,local_138);
    if ((((local_130[0] < 1) && (local_120 < 1)) && (local_100 < 1)) &&
       ((local_f0 < 1 && ((local_134 & 2) == 0)))) {
      local_139 = '\0';
    }
    else {
      local_139 = '\x01';
    }
  }
  if (local_139 != '\0') {
    *(undefined1 *)(local_res8 + 0xdd8) = 0;
  }
  if (param_5 != '\x02') {
    FUN_01440040(*(undefined8 *)(local_res8 + 0xa0),*(undefined8 *)(local_res8 + 0x1310),0);
  }
  if (param_10 == '\0') {
    *(undefined1 *)(*(longlong *)(local_res8 + 0xa0) + 0xe28) = 0;
  }
  else {
    FUN_019a0630(*(undefined8 *)(local_res8 + 0xa0));
    local_134 = 0;
    uVar4 = FUN_014c9f50(&DAT_014c7758,1,local_res8);
    *(undefined8 *)(local_res8 + 0xe8) = uVar4;
    local_178 = CONCAT71(local_178._1_7_,param_6);
    local_170 = CONCAT71(local_170._1_7_,param_10 == '\0');
    local_168 = param_11;
    local_28 = FUN_014caec0(uVar4,*(undefined1 *)(local_res8 + 8),*(undefined8 *)(local_res8 + 0xa0)
                            ,*(undefined1 *)(local_res8 + 0x98));
    *(undefined1 *)(local_res8 + 0xf0) = *(undefined1 *)(*(longlong *)(local_res8 + 0xa0) + 0x219);
    *(undefined1 *)(*(longlong *)(local_res8 + 0xa0) + 0x219) = 1;
    lVar5 = FUN_014cdd20(*(undefined8 *)(local_res8 + 0xe8));
    if (lVar5 != 0) {
      lVar5 = FUN_014cdd20(*(undefined8 *)(local_res8 + 0xe8));
      local_134 = *(uint *)(lVar5 + 0x7e8);
    }
    if (((*(char *)(*(longlong *)(local_res8 + 0xe8) + 0x22b8) == '\0') || (local_134 == 0)) ||
       ((local_134 & 0x20) != 0)) {
      cVar1 = '\0';
    }
    else {
      cVar1 = '\x01';
    }
    *(char *)(local_res8 + 0xf1) = cVar1;
    if (cVar1 != '\0') {
      lVar5 = FUN_014cdd20(*(undefined8 *)(local_res8 + 0xe8));
      *(undefined4 *)(local_res8 + 0xf4) = *(undefined4 *)(lVar5 + 0x7e8);
    }
    iVar3 = FUN_014cd2f0(*(undefined8 *)(local_res8 + 0xe8),local_28,param_6);
    if (iVar3 != 0) {
      FUN_01b04d70(0x146,*(undefined8 *)(local_res8 + 0x1310),0);
    }
    if (*(char *)(*(longlong *)(local_res8 + 0xe8) + 0x22b8) != '\0') {
      *(longlong *)(local_28 + 0x488) = local_res8;
      lVar5 = *(longlong *)(local_res8 + 0xa0);
      local_178 = *(undefined8 *)(local_28 + 0x470);
      local_170 = *(undefined8 *)(local_28 + 0x478);
      FUN_01d0f560(*(undefined8 *)(lVar5 + 0x468),*(undefined8 *)(lVar5 + 0x470),
                   *(undefined8 *)(lVar5 + 0x478),*(undefined8 *)(local_28 + 0x468));
      *(longlong *)(local_res8 + 0xa0) = local_28;
    }
    *(undefined1 *)(*(longlong *)(local_res8 + 0xa0) + 0xe28) =
         *(undefined1 *)(*(longlong *)(local_res8 + 0xe8) + 0x22b8);
  }
  *(undefined8 *)(local_res8 + 0xf20) = 0;
  *(undefined8 *)(local_res8 + 0xf38) = 0;
  local_140 = 0;
  do {
    *(undefined8 *)(local_res8 + 0xf50 + (longlong)local_140 * 8) = 0;
    local_140 = local_140 + 1;
  } while (local_140 != 5);
  local_140 = 0;
  do {
    *(undefined8 *)(local_res8 + 0xf80 + (longlong)local_140 * 8) = 0;
    local_140 = local_140 + 1;
  } while (local_140 != 3);
  local_140 = 0;
  do {
    *(undefined8 *)(local_res8 + 4000 + (longlong)local_140 * 8) = 0;
    local_140 = local_140 + 1;
  } while (local_140 != 0x4d);
  *(undefined8 *)(local_res8 + 0xf40) = 0;
  *(undefined8 *)(local_res8 + 0xf28) = 0;
  *(undefined8 *)(local_res8 + 0xf48) = 0;
  uVar4 = FUN_00b921a0(0);
  *(undefined8 *)(local_res8 + 0xf30) = uVar4;
  FUN_00414480(local_res8 + 0x12e0);
  uVar2 = FUN_00f06890(L"EnableStatistics",0);
  *(undefined1 *)(local_res8 + 0xf18) = uVar2;
  *(undefined *)(local_res8 + 0x12f1) = *PTR_DAT_02005310;
  *(undefined *)(local_res8 + 0x12f4) = *PTR_DAT_02002de8;
  *(undefined *)(local_res8 + 0x33a) = PTR_DAT_020030c0[5];
  *(undefined *)(local_res8 + 0x12ec) = PTR_DAT_02004010[0x816];
  *(undefined *)(local_res8 + 0x12ed) = PTR_DAT_02004010[0x814];
  *(undefined *)(local_res8 + 0x12ee) = *PTR_DAT_020037e8;
  *(undefined *)(local_res8 + 0x12ef) = PTR_DAT_02004010[0x815];
  *(undefined *)(local_res8 + 0x12f0) = *PTR_DAT_02001560;
  if (((*PTR_DAT_020052b8 == '\0') &&
      (*(char *)(*(longlong *)(*(longlong *)PTR_DAT_02004e40 + 0xb78) + 0x328) == '\0')) &&
     (*PTR_DAT_020023b0 == '\0')) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  *(undefined1 *)(local_res8 + 0x339) = uVar2;
  *(undefined *)(local_res8 + 0x33b) = *PTR_DAT_020017c0;
  *PTR_DAT_020027b0 = 0;
  *PTR_DAT_02003318 = 0;
  uVar2 = FUN_00f06890(L"DetailedStatisticsEnabled",0);
  *PTR_DAT_020027b0 = uVar2;
  uVar2 = FUN_00f06890(L"DetailedMixedStatisticsEnabled",0);
  *PTR_DAT_02003318 = uVar2;
  local_140 = 0;
  do {
    lVar5 = (longlong)local_140;
    *(undefined8 *)(local_res8 + 0x1248 + lVar5 * 0x20) = 0;
    *(undefined4 *)(local_res8 + 0x1250 + lVar5 * 0x20) = 0;
    *(undefined1 *)(local_res8 + 0x1240 + lVar5 * 0x20) = 0;
    *(undefined4 *)(local_res8 + 0x1258 + lVar5 * 0x20) = 0;
    *(undefined4 *)(local_res8 + 0x125c + lVar5 * 0x20) = 0;
    *(undefined4 *)(local_res8 + 0x1254 + lVar5 * 0x20) = 0;
    local_140 = local_140 + 1;
  } while (local_140 != 4);
  *(undefined4 *)(local_res8 + 0x1250) = 1;
  *(undefined1 *)(local_res8 + 0x1240) = 1;
  uVar4 = FUN_00410e60(&PTR_FUN_00472dd0,CONCAT71((int7)((ulonglong)(lVar5 * 4) >> 8),1));
  *(undefined8 *)(local_res8 + 0x100) = uVar4;
  FUN_01b0f4b0(local_res8);
  uVar2 = FUN_01b0f5a0(local_res8);
  *(undefined1 *)(local_res8 + 0x338) = uVar2;
  uVar4 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x1328) = uVar4;
  FUN_00414480(local_res8 + 0x1318);
  *(undefined8 *)(local_res8 + 0x1330) = 0;
  *(undefined1 *)(local_res8 + 0x1338) = 0;
  FUN_00414480(local_res8 + 0x1340);
  if (*(char *)(*(longlong *)(local_res8 + 0xa0) + 0xe28) == '\0') {
    FUN_01546460(*PTR_DAT_02005b68);
  }
  uVar4 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(local_res8 + 0x1348) = uVar4;
  uVar4 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(local_res8 + 0x1350) = uVar4;
  uVar4 = FUN_00410e60(&DAT_016d5688,1);
  *(undefined8 *)(local_res8 + 0x1358) = uVar4;
  uVar4 = FUN_016d6300(&DAT_016d52d8,1);
  *(undefined8 *)(local_res8 + 0x1360) = uVar4;
  uVar4 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(local_res8 + 0x1368) = uVar4;
  uVar4 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x1370) = uVar4;
  uVar4 = FUN_01b12b60(&PTR_FUN_01afdc38,1);
  *(undefined8 *)(local_res8 + 0x4f0) = uVar4;
  uVar4 = FUN_01b12b60(&PTR_FUN_01afdc38,1);
  *(undefined8 *)(local_res8 + 0x4f8) = uVar4;
  uVar4 = FUN_01b0f660(&DAT_01af6718,1,local_res8);
  *(undefined8 *)(local_res8 + 0x1378) = uVar4;
  FUN_01610cc0(local_130);
  *(undefined1 *)(local_res8 + 0x8b) = 1;
  FUN_0041b800(local_20);
  FUN_00414560(&param_7,2);
  FUN_00414480(&param_11);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}


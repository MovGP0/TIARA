/* Ghidra address: 014a1990 */
/* Ghidra symbol: FUN_014a1990 */


undefined8
FUN_014a1990(undefined8 param_1,undefined8 param_2,undefined8 param_3,byte param_4,char param_5,
            undefined1 param_6,undefined1 param_7,undefined4 *param_8)

{
  undefined4 uVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined8 local_res18 [2];
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined8 local_68;
  undefined8 local_60;
  byte local_51;
  undefined8 local_50;
  undefined1 local_44 [8];
  undefined1 local_3c [8];
  undefined1 local_34 [8];
  undefined1 local_2c [8];
  undefined1 local_24 [8];
  undefined1 local_1c [8];
  uint local_14;
  longlong local_10;
  
  local_res18[0] = param_3;
  local_68 = param_1;
  local_60 = param_2;
  local_51 = param_4;
  FUN_00414610(param_3);
  FUN_00417580(local_44,&DAT_01d2e6d8);
  local_50 = local_60;
  local_78 = 0;
  local_10 = FUN_01d30b30(&DAT_01d2e8e8,1,local_60,1);
  if (local_10 != 0) {
    FUN_00414b50(local_44,L"Circuit Description");
    FUN_00414b50(local_3c,L"V1.10");
    FUN_00414b50(local_34,L"10/02/94 20:07 CET");
    FUN_00414b50(local_2c,L"Component & analysis parameters of a circuit.");
    if (local_51 == 0) {
      FUN_00416ba0(local_24,L"TINA ",*(undefined8 *)PTR_DAT_02004728);
    }
    else if (local_51 == 5) {
      FUN_00414b50(local_24,L"TINA 12.1.0.0 SF");
    }
    else if (local_51 == 4) {
      FUN_00414b50(local_24,L"TINA 11.1.0.0 SF");
    }
    else if (local_51 == 3) {
      FUN_00414b50(local_24,L"TINA 10.2.30.0 SF");
    }
    else if (local_51 == 2) {
      FUN_00414b50(local_24,L"TINA 9.3.150.0 SF");
    }
    else {
      FUN_00414b50(local_24,L"TINA 7.0.180.0 SF");
    }
    uVar2 = FUN_00414b50(local_1c,
                         L"(c) Copyright 1993,94,95,96 DesignSoft Inc.\n\rAll rights reserved.");
    local_14 = 0;
    if (param_5 != '\0') {
      if (local_51 < 8) {
        bVar3 = ((int)CONCAT71((int7)((ulonglong)uVar2 >> 8),1) << (local_51 & 0x1f) & 0x39U) != 0;
      }
      else {
        bVar3 = false;
      }
      if (bVar3) {
        local_14 = 1;
      }
    }
    local_14 = local_14 | 2;
    FUN_01d318b0(local_10,local_44);
    *param_8 = *(undefined4 *)(local_10 + 0x30);
    *(byte *)(local_10 + 0x78) = local_51;
    *(undefined1 *)(local_10 + 0x7b) = param_6;
    *(undefined1 *)(local_10 + 0x7c) = param_7;
    *(char *)(local_10 + 0x7d) = param_5;
    FUN_014a1950(auStack_98,local_68);
    FUN_01d33060(*(undefined8 *)PTR_DAT_02003458,&local_10);
    FUN_00f48b10(*(undefined8 *)(*(longlong *)PTR_DAT_02004ec8 + 8),local_10);
    uVar2 = FUN_01d31a40(local_10);
    if ((int)uVar2 != 0) {
      uVar1 = FUN_01d31a40(local_10);
      uVar2 = FUN_00b047e0(uVar1);
    }
    if (param_5 != '\0') {
      if (local_51 < 8) {
        bVar3 = ((int)CONCAT71((int7)((ulonglong)uVar2 >> 8),1) << (local_51 & 0x1f) & 0x39U) != 0;
      }
      else {
        bVar3 = false;
      }
      if (bVar3) {
        local_50 = FUN_014a1580(local_res18[0],local_60,*param_8);
      }
    }
  }
  uVar2 = FUN_00410f20(local_10);
  if (param_5 != '\0') {
    if (local_51 < 8) {
      bVar3 = ((int)CONCAT71((int7)((ulonglong)uVar2 >> 8),1) << (local_51 & 0x1f) & 0x39U) != 0;
    }
    else {
      bVar3 = false;
    }
    if (bVar3) {
      FUN_00410f20(local_60);
    }
  }
  FUN_00417740(local_44,&DAT_01d2e6d8);
  FUN_00414480(local_res18);
  return local_50;
}


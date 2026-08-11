/* Ghidra address: 0176ad80 */
/* Ghidra symbol: FUN_0176ad80 */


void FUN_0176ad80(undefined8 param_1,undefined8 param_2,byte param_3,char param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined1 auStack_98 [32];
  uint local_78;
  undefined1 *local_60;
  undefined4 local_50;
  undefined1 local_4c [8];
  undefined1 local_44 [8];
  undefined1 local_3c [8];
  undefined1 local_34 [8];
  undefined1 local_2c [8];
  undefined1 local_24 [8];
  undefined4 local_1c;
  undefined8 local_18;
  longlong local_10;
  
  local_60 = auStack_98;
  FUN_00417580(local_4c,&DAT_01d2e6d8);
  local_18 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
  local_78 = local_78 & 0xffffff00;
  local_10 = FUN_01d30b30(&DAT_01d2e8e8,1,local_18,1);
  if (local_10 != 0) {
    FUN_00414b50(local_4c,L"Schematics Macro");
    FUN_00414b50(local_44,L"V1.00");
    FUN_00414b50(local_3c,L"97/08/12");
    FUN_00414480(local_34);
    if (param_3 == 0) {
      FUN_00416ba0(local_2c,L"TINA Device Editor ",*(undefined8 *)PTR_DAT_02004728);
    }
    else if (param_3 == 5) {
      FUN_00414b50(local_2c,L"TINA Device Editor 12.1.0.0 SF");
    }
    else if (param_3 == 4) {
      FUN_00414b50(local_2c,L"TINA Device Editor 11.1.0.0 SF");
    }
    else if (param_3 == 3) {
      FUN_00414b50(local_2c,L"TINA Device Editor 10.2.30.0 SF");
    }
    else if (param_3 == 2) {
      FUN_00414b50(local_2c,L"TINA Device Editor 9.3.150.0 SF");
    }
    else {
      FUN_00414b50(local_2c,L"TINA Device Editor 7.0.180.0 SF");
    }
    uVar2 = FUN_00414b50(local_24,L"Copyright 1997 DesignSoft, Inc.");
    local_1c = 0;
    if (param_4 != '\0') {
      if (param_3 < 8) {
        bVar3 = ((int)CONCAT71((int7)((ulonglong)uVar2 >> 8),1) << (param_3 & 0x1f) & 0x39U) != 0;
      }
      else {
        bVar3 = false;
      }
      if (bVar3) {
        local_1c = 1;
      }
    }
    FUN_01d318b0(local_10,local_4c);
    local_50 = *(undefined4 *)(local_10 + 0x30);
    *(byte *)(local_10 + 0x78) = param_3;
    *(char *)(local_10 + 0x7d) = param_4;
    local_78 = 0;
    FUN_01769030(param_1,&local_10,0,0);
    uVar2 = FUN_01d31a40(local_10);
    if ((int)uVar2 != 0) {
      uVar1 = FUN_01d31a40(local_10);
      uVar2 = FUN_00b047e0(uVar1);
    }
    if (param_4 != '\0') {
      if (param_3 < 8) {
        bVar3 = ((int)CONCAT71((int7)((ulonglong)uVar2 >> 8),1) << (param_3 & 0x1f) & 0x39U) != 0;
      }
      else {
        bVar3 = false;
      }
      if (bVar3) {
        FUN_017687b0(param_2,local_18,local_50);
        goto code_r0x0176b00e;
      }
    }
    FUN_004b9df0(local_18,param_2);
  }
code_r0x0176b00e:
  FUN_00410f20(local_10);
  FUN_00410f20(local_18);
  FUN_00417740(local_4c,&DAT_01d2e6d8);
  return;
}


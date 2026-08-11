/* Ghidra address: 01142c20 */
/* Ghidra symbol: FUN_01142c20 */


void FUN_01142c20(longlong param_1)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auStack_f8 [32];
  ulonglong local_d8;
  undefined *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined4 local_70;
  undefined1 local_68;
  undefined1 local_60;
  undefined4 local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 *local_30;
  byte *local_20;
  
  local_30 = auStack_f8;
  puVar1 = auStack_f8;
  if (*(char *)(param_1 + 0x1007b2) == '\0') {
    if (*(char *)(param_1 + 0x1007b1) == '\0') {
      local_30 = auStack_f8;
      FUN_01142a60(param_1);
    }
    else if ((*(longlong *)PTR_DAT_020027c0 == 0) || ((*(byte *)(param_1 + 0x1055d4) & 1) != 0)) {
      local_30 = auStack_f8;
      FUN_017cc8f0(PTR_DAT_020027c0);
      uVar4 = FUN_019a4600();
      local_d8 = local_d8 & 0xffffffffffffff00;
      local_d0 = (undefined *)0x0;
      local_c8 = 0;
      local_c0 = 0;
      local_b8 = 0;
      local_b0 = 0;
      local_a8 = 0;
      local_a0 = 0;
      local_98 = 0;
      local_90 = 0;
      local_88 = 0;
      local_80 = 0;
      local_78 = 0;
      local_70 = 0x1c7;
      local_68 = 0;
      local_60 = 0;
      local_58 = 0;
      local_50 = 0;
      local_48 = 0;
      local_40 = 0;
      cVar2 = FUN_01349310(0,1,uVar4,0);
      if (cVar2 == '\0') {
        uVar4 = FUN_019a4600();
        local_d8 = CONCAT71(local_d8._1_7_,PTR_DAT_02004010[0x81a]);
        local_d0 = PTR_DAT_02004010 + 0x3d5;
        FUN_011432a0(uVar4,*(undefined8 *)PTR_DAT_020027c0,*(undefined8 *)(param_1 + 0x798),
                     *(undefined8 *)(PTR_DAT_02004010 + 0x81b));
      }
      else {
        FUN_0044d440();
      }
    }
    else {
      FUN_01cc6020(*(undefined8 *)PTR_DAT_020027c0);
      uVar4 = FUN_01cc6f70(&PTR_FUN_01cb8940,1,*(undefined8 *)PTR_DAT_020027c0);
      *(undefined8 *)(param_1 + 0x778) = uVar4;
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0x708) + 0x260))
                        (*(longlong **)(param_1 + 0x708));
      uVar4 = FUN_01d347d0(*(undefined8 *)(*(longlong *)PTR_DAT_020027c0 + 8),uVar3);
      *(undefined8 *)(param_1 + 0x770) = uVar4;
      FUN_01142a60(param_1);
      FUN_00410f20(*(undefined8 *)(param_1 + 0x778));
      if (*(longlong *)PTR_DAT_020027c0 != 0) {
        FUN_01cc6080(*(undefined8 *)PTR_DAT_020027c0,1,0);
      }
    }
    *(undefined1 *)(param_1 + 0x1007b2) = 1;
    puVar1 = local_30;
  }
  local_30 = puVar1;
  local_20 = (byte *)(param_1 + 0x780);
  local_d8 = *(undefined8 *)(param_1 + 0x798);
  FUN_011423a0(param_1,*(undefined1 *)(param_1 + 0x791),*(undefined1 *)(param_1 + 0x792),
               1 << (*local_20 & 0x1f));
  *(undefined1 *)(param_1 + 0x1055d4) = 0;
  return;
}


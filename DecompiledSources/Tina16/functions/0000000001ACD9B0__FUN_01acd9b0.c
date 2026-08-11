/* Ghidra address: 01acd9b0 */
/* Ghidra symbol: FUN_01acd9b0 */


longlong FUN_01acd9b0(longlong param_1,char param_2,longlong param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 *param_6)

{
  undefined1 *puVar1;
  char cVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong local_res8;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined8 local_20;
  
  local_30 = auStack_58;
  local_20 = *param_6;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_01d2ae00(local_res8,0);
  FUN_00414480(local_res8 + 0x60);
  lVar5 = FUN_013d14f0(&PTR_FUN_013d1010,1);
  *(longlong *)(local_res8 + 0xb8) = lVar5;
  *(undefined1 *)(lVar5 + 0x48) = 1;
  lVar5 = *(longlong *)(local_res8 + 0xb8);
  uVar6 = FUN_01ae7540(local_res8,L"LeftMargin",0x3fb999999999999a);
  *(undefined8 *)(lVar5 + 0x50) = uVar6;
  *(longlong *)(lVar5 + 0x60) = local_res8;
  lVar5 = FUN_013d14f0(&PTR_FUN_013d1010,1);
  *(longlong *)(local_res8 + 0xc0) = lVar5;
  *(undefined1 *)(lVar5 + 0x48) = 1;
  lVar5 = *(longlong *)(local_res8 + 0xc0);
  uVar6 = FUN_01ae7540(local_res8,L"RightMargin",0x3feccccccccccccd);
  *(undefined8 *)(lVar5 + 0x50) = uVar6;
  *(longlong *)(lVar5 + 0x60) = local_res8;
  lVar5 = FUN_013d14f0(&PTR_FUN_013d1010,1);
  *(longlong *)(local_res8 + 200) = lVar5;
  *(undefined1 *)(lVar5 + 0x48) = 0;
  lVar5 = *(longlong *)(local_res8 + 200);
  uVar6 = FUN_01ae7540(local_res8,L"TopMargin",0x3fb999999999999a);
  *(undefined8 *)(lVar5 + 0x50) = uVar6;
  *(longlong *)(lVar5 + 0x60) = local_res8;
  lVar5 = FUN_013d14f0(&PTR_FUN_013d1010,1);
  *(longlong *)(local_res8 + 0xd0) = lVar5;
  *(undefined1 *)(lVar5 + 0x48) = 0;
  lVar5 = *(longlong *)(local_res8 + 0xd0);
  uVar6 = FUN_01ae7540(local_res8,L"BottomMargin",0x3fe0000000000000);
  *(undefined8 *)(lVar5 + 0x50) = uVar6;
  *(longlong *)(lVar5 + 0x60) = local_res8;
  uVar6 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(local_res8 + 0x90) = uVar6;
  uVar6 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0xd8) = uVar6;
  uVar6 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0xe0) = uVar6;
  FUN_004b67b0(uVar6,1);
  *(undefined1 *)(*(longlong *)(local_res8 + 0xe0) + 0x49) = 1;
  uVar6 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(local_res8 + 0xe8) = uVar6;
  uVar6 = FUN_00742bf0(&PTR_FUN_007334d8,1,0);
  *(undefined8 *)(local_res8 + 0x88) = uVar6;
  *(undefined8 *)(local_res8 + 0xf0) = 0;
  *(undefined8 *)(local_res8 + 0xf8) = 0;
  if (param_3 == 0) {
    *(undefined4 *)(local_res8 + 0x104) = 0x140;
    *(undefined4 *)(local_res8 + 0x100) = 0xf0;
  }
  else {
    uVar4 = FUN_0064d0b0(param_3);
    *(undefined4 *)(local_res8 + 0x104) = uVar4;
    uVar4 = FUN_0064d120(param_3);
    *(undefined4 *)(local_res8 + 0x100) = uVar4;
  }
  *(undefined1 *)(local_res8 + 0x108) = 1;
  *(undefined1 *)(local_res8 + 0x109) = 1;
  *(longlong *)(local_res8 + 0x78) = param_3;
  *(undefined8 *)(local_res8 + 0x70) = param_4;
  *(undefined8 *)(local_res8 + 0x80) = param_5;
  *(undefined8 *)(local_res8 + 0x98) = local_20;
  *(undefined1 *)(local_res8 + 0xb0) = 0;
  *(undefined1 *)(local_res8 + 0x10a) = 0;
  cVar2 = FUN_004113d0(*(undefined8 *)(local_res8 + 0x78),&PTR_FUN_010f30d8);
  if (cVar2 == '\0') {
    FUN_00414ad0(local_res8 + 0x58,L"TINA.INI");
  }
  else {
    FUN_00414ad0(local_res8 + 0x58,L"MEAS.INI");
  }
  uVar3 = FUN_01ae78c0(local_res8,L"AdjustXAxes",1);
  *(undefined1 *)(local_res8 + 0x10b) = uVar3;
  if (PTR_DAT_02004010[0x901] != '\0') {
    *(bool *)(local_res8 + 0x10b) = PTR_DAT_02004010[0x901] == '\x01';
  }
  uVar3 = FUN_01ae78c0(local_res8,L"AdjustYAxes",1);
  *(undefined1 *)(local_res8 + 0x10c) = uVar3;
  if (PTR_DAT_02004010[0x902] != '\0') {
    *(bool *)(local_res8 + 0x10c) = PTR_DAT_02004010[0x902] == '\x01';
  }
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}


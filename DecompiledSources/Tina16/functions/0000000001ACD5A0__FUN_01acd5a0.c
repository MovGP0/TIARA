/* Ghidra address: 01acd5a0 */
/* Ghidra symbol: FUN_01acd5a0 */


longlong FUN_01acd5a0(longlong param_1,char param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong local_res8;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_res8 = param_1;
  puVar1 = auStack_48;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  FUN_01d2ae00(local_res8,0);
  FUN_00414480(local_res8 + 0x60);
  lVar2 = FUN_013d14f0(&PTR_FUN_013d1010,1);
  *(longlong *)(local_res8 + 0xb8) = lVar2;
  *(undefined1 *)(lVar2 + 0x48) = 1;
  lVar2 = *(longlong *)(local_res8 + 0xb8);
  uVar3 = FUN_01ae7540(local_res8,L"LeftMargin",0x3fb999999999999a);
  *(undefined8 *)(lVar2 + 0x50) = uVar3;
  *(longlong *)(lVar2 + 0x60) = local_res8;
  lVar2 = FUN_013d14f0(&PTR_FUN_013d1010,1);
  *(longlong *)(local_res8 + 0xc0) = lVar2;
  *(undefined1 *)(lVar2 + 0x48) = 1;
  lVar2 = *(longlong *)(local_res8 + 0xc0);
  uVar3 = FUN_01ae7540(local_res8,L"RightMargin",0x3feccccccccccccd);
  *(undefined8 *)(lVar2 + 0x50) = uVar3;
  *(longlong *)(lVar2 + 0x60) = local_res8;
  lVar2 = FUN_013d14f0(&PTR_FUN_013d1010,1);
  *(longlong *)(local_res8 + 200) = lVar2;
  *(undefined1 *)(lVar2 + 0x48) = 0;
  lVar2 = *(longlong *)(local_res8 + 200);
  uVar3 = FUN_01ae7540(local_res8,L"TopMargin",0x3fb999999999999a);
  *(undefined8 *)(lVar2 + 0x50) = uVar3;
  *(longlong *)(lVar2 + 0x60) = local_res8;
  lVar2 = FUN_013d14f0(&PTR_FUN_013d1010,1);
  *(longlong *)(local_res8 + 0xd0) = lVar2;
  *(undefined1 *)(lVar2 + 0x48) = 0;
  lVar2 = *(longlong *)(local_res8 + 0xd0);
  uVar3 = FUN_01ae7540(local_res8,L"BottomMargin",0x3fe0000000000000);
  *(undefined8 *)(lVar2 + 0x50) = uVar3;
  *(longlong *)(lVar2 + 0x60) = local_res8;
  uVar3 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(local_res8 + 0x90) = uVar3;
  uVar3 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0xd8) = uVar3;
  uVar3 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0xe0) = uVar3;
  FUN_004b67b0(uVar3,1);
  *(undefined1 *)(*(longlong *)(local_res8 + 0xe0) + 0x49) = 1;
  uVar3 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(local_res8 + 0xe8) = uVar3;
  uVar3 = FUN_00742bf0(&PTR_FUN_007334d8,1,0);
  *(undefined8 *)(local_res8 + 0x88) = uVar3;
  *(undefined8 *)(local_res8 + 0xf0) = 0;
  *(undefined8 *)(local_res8 + 0xf8) = 0;
  *(undefined4 *)(local_res8 + 0x100) = 0;
  *(undefined4 *)(local_res8 + 0x104) = 0;
  *(undefined1 *)(local_res8 + 0x108) = 1;
  *(undefined1 *)(local_res8 + 0x109) = 1;
  *(undefined8 *)(local_res8 + 0x70) = 0;
  *(undefined8 *)(local_res8 + 0x78) = *(undefined8 *)PTR_DAT_02001e00;
  *(undefined8 *)(local_res8 + 0x80) = *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x780);
  uVar3 = FUN_00498310(0,0);
  *(undefined8 *)(local_res8 + 0x98) = uVar3;
  *(undefined1 *)(local_res8 + 0xb0) = 0;
  *(undefined1 *)(local_res8 + 0x10a) = 0;
  FUN_00414ad0(local_res8 + 0x58,L"TINA.INI");
  *(undefined1 *)(local_res8 + 0x10d) = 0;
  *(undefined4 *)(local_res8 + 0x110) = 0xffffffff;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}


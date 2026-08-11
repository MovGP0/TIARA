/* Ghidra address: 01771870 */
/* Ghidra symbol: FUN_01771870 */


longlong FUN_01771870(longlong param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
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
  FUN_01771200(local_res8,0,param_3);
  *(undefined1 *)(local_res8 + 0x70) = 3;
  *(undefined4 *)(local_res8 + 0x100) = 0;
  *(undefined4 *)(local_res8 + 0x104) = 0;
  *(undefined8 *)(local_res8 + 0x108) = 0x412e848000000000;
  *(undefined4 *)(local_res8 + 0x120) = *(undefined4 *)(PTR_DAT_020030c0 + 8);
  *(undefined4 *)(local_res8 + 0x124) = 0;
  *(undefined4 *)(local_res8 + 0x128) = 0;
  *(undefined8 *)(local_res8 + 0x178) = 0x4039000000000000;
  FUN_00414480(local_res8 + 0x148);
  FUN_00414480(local_res8 + 0x150);
  *(undefined4 *)(local_res8 + 0x158) = 0xffffffff;
  *(undefined4 *)(local_res8 + 0x15c) = 0xffffffff;
  *(undefined4 *)(local_res8 + 0x160) = 0xffffffff;
  *(undefined4 *)(local_res8 + 0x164) = 0xffffffff;
  *(undefined4 *)(local_res8 + 0x168) = 1;
  *(undefined4 *)(local_res8 + 0x16c) = 0;
  FUN_00414ad0(local_res8 + 0x130,L"noname.lst");
  FUN_00414ad0(local_res8 + 0x138,L"noname.hex");
  FUN_00414ad0(local_res8 + 0x140,L"noname.asm");
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 200) = uVar2;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0xd0) = uVar2;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0xd8) = uVar2;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0xe0) = uVar2;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0xe8) = uVar2;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0xf0) = uVar2;
  uVar2 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
  *(undefined8 *)(local_res8 + 0xf8) = uVar2;
  uVar2 = FUN_010afd00(&DAT_010a9ec8,1);
  *(undefined8 *)(local_res8 + 0x110) = uVar2;
  uVar2 = FUN_010b3ce0(&DAT_010abc40,1);
  *(undefined8 *)(local_res8 + 0x118) = uVar2;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x198) = uVar2;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x1a0) = uVar2;
  uVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(local_res8 + 0x170) = uVar2;
  *(undefined1 *)(local_res8 + 0x180) = 0;
  FUN_00414480(local_res8 + 0x188);
  *(undefined1 *)(local_res8 + 99) = 1;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}


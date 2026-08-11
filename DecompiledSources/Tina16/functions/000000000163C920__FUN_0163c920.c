/* Ghidra address: 0163c920 */
/* Ghidra symbol: FUN_0163c920 */


longlong FUN_0163c920(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,int param_6)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong local_res8;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  int local_1c;
  
  local_30 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  *(undefined8 *)(local_res8 + 0x48) = param_3;
  *(undefined8 *)(local_res8 + 0x10) = param_4;
  *(undefined8 *)(local_res8 + 0x18) = param_5;
  *(undefined4 *)(local_res8 + 0x74) = 0;
  *(int *)(local_res8 + 0x78) = param_6;
  *(int *)(local_res8 + 0x70) = param_6 + -1;
  *(undefined4 *)(local_res8 + 0x7c) = 1;
  *(undefined4 *)(local_res8 + 0x80) = 0;
  *(undefined1 *)(local_res8 + 0x139e9) = 0;
  *(undefined1 *)(local_res8 + 0x139ea) = 0;
  *(undefined1 *)(local_res8 + 0x13a18) = 0;
  *(undefined1 *)(local_res8 + 0x13a19) = 0;
  *(undefined4 *)(local_res8 + 0x90) = 0xffffffff;
  *(undefined8 *)(local_res8 + 0xb8) = 0;
  *(undefined4 *)(local_res8 + 0x94) = 3;
  *(undefined4 *)(local_res8 + 0x98) = 0xffffffff;
  *(undefined1 *)(local_res8 + 0x139e4) = 0;
  *(undefined4 *)(local_res8 + 0x9c) = 0;
  *(undefined4 *)(local_res8 + 0xa0) = 0;
  *(undefined4 *)(local_res8 + 0x13a28) = 0;
  *(undefined1 *)(local_res8 + 8) = 0;
  *(undefined1 *)(local_res8 + 0x139e2) = 0;
  *(undefined1 *)(local_res8 + 9) = 0;
  *(undefined1 *)(local_res8 + 10) = 0;
  *(undefined4 *)(local_res8 + 0xa8) = 0;
  *(undefined4 *)(local_res8 + 0xac) = 0;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0xb0) = uVar2;
  DAT_0210f838 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  DAT_0210f840 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x139c8) = uVar2;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0xc0) = uVar2;
  *(undefined8 *)(local_res8 + 0x13980) = 0;
  uVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(local_res8 + 0x60) = uVar2;
  uVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(local_res8 + 0x50) = uVar2;
  uVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(local_res8 + 0x58) = uVar2;
  *(undefined8 *)(local_res8 + 0x139c0) = 0;
  *(undefined8 *)(local_res8 + 0x139d8) = 0;
  FUN_00414480(local_res8 + 0x139a0);
  FUN_00414480(local_res8 + 0x139a8);
  *(undefined4 *)(local_res8 + 0x84) = 0;
  *(undefined4 *)(local_res8 + 0x88) = 0;
  *(undefined1 *)(local_res8 + 0x139e0) = 0;
  *(undefined1 *)(local_res8 + 0x139e1) = 0;
  *(undefined1 *)(local_res8 + 0x139e3) = 0;
  *(undefined1 *)(local_res8 + 0x139e5) = 0;
  *(undefined8 *)(local_res8 + 0x139d0) = 0;
  *(undefined1 *)(local_res8 + 0x139e8) = 0;
  uVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(local_res8 + 0x40) = uVar2;
  uVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(local_res8 + 0x68) = uVar2;
  uVar2 = FUN_01619990(&DAT_01618688,1,0);
  *(undefined8 *)(local_res8 + 0x13a10) = uVar2;
  local_1c = 0;
  do {
    FUN_00414ad0(local_res8 + 0xd8 + (longlong)local_1c * 8,L"<not found>");
    local_1c = local_1c + 1;
  } while (local_1c != 10000);
  *(undefined1 *)(local_res8 + 0x139e6) = 0;
  *(undefined1 *)(local_res8 + 0x139e7) = 0;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 200) = uVar2;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0xd0) = uVar2;
  uVar2 = FUN_016123d0(&DAT_01611258,1);
  *(undefined8 *)(local_res8 + 0x13a38) = uVar2;
  FUN_01615b20(uVar2,0);
  *(undefined4 *)(*(longlong *)(local_res8 + 0x13a38) + 0x14) = 5;
  uVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(local_res8 + 0x13a40) = uVar2;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}


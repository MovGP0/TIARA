/* Ghidra address: 00809eb0 */
/* Ghidra symbol: FUN_00809eb0 */


longlong FUN_00809eb0(longlong param_1,char param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong local_res8;
  undefined1 auStack_268 [40];
  code *local_240;
  longlong local_238;
  undefined1 *local_230;
  uint local_224;
  undefined1 local_220 [512];
  undefined2 *local_20;
  
  local_230 = auStack_268;
  local_res8 = param_1;
  puVar2 = auStack_268;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar2 = local_230;
  }
  local_230 = puVar2;
  FUN_004d22d0(local_res8,0,param_3);
  if (*PTR_DAT_02001218 == '\0') {
    local_224 = thunk_FUN_03d3249c(0);
    *(bool *)(local_res8 + 0x2e8) = (local_224 & 0x80000000) == 0;
  }
  puVar1 = PTR_PTR_02003690;
  if (*(longlong *)PTR_PTR_02003690 == 0) {
    *(longlong *)(PTR_PTR_02003690 + 8) = local_res8;
    *(code **)puVar1 = FUN_0080d240;
  }
  puVar1 = PTR_PTR_020042b8;
  if (*(longlong *)PTR_PTR_020042b8 == 0) {
    *(longlong *)(PTR_PTR_020042b8 + 8) = local_res8;
    *(code **)puVar1 = FUN_0080d620;
  }
  *(undefined1 *)(local_res8 + 0x79) = 0;
  lVar3 = FUN_005fc570(&PTR_FUN_005f2d40,1);
  *(longlong *)(local_res8 + 0xa0) = lVar3;
  *(longlong *)(lVar3 + 0x10) = local_res8;
  *(code **)(lVar3 + 8) = FUN_0080ddb0;
  uVar4 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(local_res8 + 0x120) = uVar4;
  uVar4 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(local_res8 + 0x160) = uVar4;
  *(undefined8 *)(local_res8 + 0xd8) = 0;
  *(undefined8 *)(local_res8 + 0x100) = 0;
  *(undefined4 *)(local_res8 + 0xd4) = 0xff000018;
  *(undefined4 *)(local_res8 + 0xf4) = 500;
  *(undefined1 *)(local_res8 + 0xf8) = 1;
  *(undefined4 *)(local_res8 + 0xfc) = 0;
  *(undefined4 *)(local_res8 + 0xf0) = 0x9c4;
  *(undefined1 *)(local_res8 + 0x108) = 0;
  *(undefined1 *)(local_res8 + 0x149) = 1;
  *(undefined1 *)(local_res8 + 0x178) = 1;
  uVar4 = FUN_0060cbe0(&PTR_FUN_005fa0c8,1);
  *(undefined8 *)(local_res8 + 0x140) = uVar4;
  uVar5 = thunk_FUN_03ccce41(*(undefined8 *)PTR_PTR_020028c0,L"MAINICON");
  FUN_0060d3b0(uVar4,uVar5);
  lVar3 = *(longlong *)(local_res8 + 0x140);
  *(longlong *)(lVar3 + 0x20) = local_res8;
  *(code **)(lVar3 + 0x18) = FUN_0080e190;
  uVar4 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(local_res8 + 0x130) = uVar4;
  thunk_FUN_041b94f3(*(undefined8 *)PTR_PTR_020028c0,local_220,0x100);
  local_20 = (undefined2 *)FUN_004429a0(local_220,0x5c);
  if (local_20 != (undefined2 *)0x0) {
    FUN_004424b0(local_220,(longlong)local_20 + 2);
  }
  local_20 = (undefined2 *)FUN_00442980(local_220,0x2e);
  if (local_20 != (undefined2 *)0x0) {
    *local_20 = 0;
  }
  uVar4 = thunk_FUN_041d655c(local_220);
  thunk_FUN_041d6a30(uVar4);
  FUN_00416830(local_res8 + 0x118,local_220,0x100);
  local_238 = local_res8;
  local_240 = FUN_0080c9f0;
  uVar4 = FUN_007f98e0(&local_240);
  *(undefined8 *)(local_res8 + 0x2e0) = uVar4;
  *(undefined1 *)(local_res8 + 400) = 0;
  if (*PTR_DAT_02001218 == '\0') {
    FUN_0080a5b0(local_res8);
  }
  *(undefined1 *)(local_res8 + 0xd1) = 1;
  *(undefined1 *)(local_res8 + 0xd2) = 1;
  *(undefined1 *)(local_res8 + 0xd3) = 1;
  *(undefined1 *)(local_res8 + 0x14a) = 1;
  *(undefined1 *)(local_res8 + 0x191) = 0;
  *(undefined1 *)(local_res8 + 0x1a8) = 0;
  *(undefined8 *)(local_res8 + 0x198) = 0;
  *(undefined1 *)(local_res8 + 0x193) = 0;
  *(undefined8 *)(local_res8 + 0x150) = 0;
  FUN_0080e4b0(local_res8);
  FUN_0080f6e0(local_res8);
  *(undefined1 *)(local_res8 + 0x2ea) = 0;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}


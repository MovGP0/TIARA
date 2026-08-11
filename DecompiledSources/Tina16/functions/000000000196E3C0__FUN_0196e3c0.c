/* Ghidra address: 0196e3c0 */
/* Ghidra symbol: FUN_0196e3c0 */


longlong * FUN_0196e3c0(longlong *param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *local_res8;
  undefined1 auStack_58 [40];
  code *local_30;
  longlong *local_28;
  undefined1 *local_20;
  
  local_20 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  FUN_0194f230(local_res8,0,param_3);
  FUN_00414ad0(local_res8 + 0x54,L"2022.2.10");
  lVar2 = FUN_0196d250(&PTR_FUN_01939b00,1,local_res8);
  local_res8[0x2e] = lVar2;
  lVar2 = FUN_01816320(&PTR_FUN_018156f0,1);
  local_res8[0x53] = lVar2;
  local_res8[0x4a] = 0;
  lVar2 = FUN_0184c830(&PTR_FUN_0183e740,1,0);
  local_res8[0x49] = lVar2;
  *(undefined1 *)(lVar2 + 0xa0) = 1;
  FUN_0184dd80(lVar2);
  lVar2 = FUN_00742bf0(&PTR_FUN_007334d8,1,0);
  local_res8[0x52] = lVar2;
  FUN_00742ed0(lVar2,0x32);
  FUN_00742eb0(local_res8[0x52],0);
  local_28 = local_res8;
  local_30 = FUN_01976c60;
  FUN_00742ef0(local_res8[0x52],&local_30);
  lVar2 = FUN_0196c390(&PTR_FUN_01937480,1);
  local_res8[0x35] = lVar2;
  lVar2 = FUN_0196c590(&PTR_FUN_01938398,1);
  local_res8[0x44] = lVar2;
  lVar2 = FUN_0196c780(&PTR_FUN_01937ca0,1);
  local_res8[0x45] = lVar2;
  lVar2 = FUN_0196c980(&LAB_01938bd8,1,local_res8);
  local_res8[0x48] = lVar2;
  *(longlong **)(lVar2 + 0x58) = local_res8;
  FUN_00414ad0(local_res8 + 0x39,L"\\Software\\Fast Reports");
  lVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  local_res8[0x4c] = lVar2;
  lVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  local_res8[0x4d] = lVar2;
  lVar2 = FUN_01978c50(&DAT_01939560,1,local_res8[0x49]);
  local_res8[0x37] = lVar2;
  lVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  local_res8[0x36] = lVar2;
  FUN_004b67b0(lVar2,1);
  *(undefined1 *)(local_res8[0x36] + 0x49) = 0;
  lVar2 = FUN_0196dbb0(&PTR_FUN_0193a498,1,local_res8);
  local_res8[0x4f] = lVar2;
  lVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  local_res8[0x50] = lVar2;
  lVar2 = FUN_0196d250(&PTR_FUN_01939b00,1,local_res8);
  local_res8[0x33] = lVar2;
  *(undefined1 *)(local_res8 + 0x4e) = 1;
  *(undefined1 *)((longlong)local_res8 + 0x271) = 1;
  *(byte *)(local_res8 + 0x1a) = *(byte *)(local_res8 + 0x1a) | 8;
  lVar2 = FUN_018c5a00(&PTR_FUN_018c3fa0,1,local_res8);
  local_res8[0x34] = lVar2;
  lVar2 = FUN_01980460(&DAT_0193aa98,1,local_res8);
  local_res8[0x41] = lVar2;
  uVar3 = FUN_0196f540(local_res8);
  FUN_019789b0(local_res8[0x34],uVar3);
  lVar2 = FUN_018d6c60(&DAT_018d2508,1);
  local_res8[0x31] = lVar2;
  lVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  local_res8[0x32] = lVar2;
  FUN_004b67b0(lVar2,1);
  lVar2 = FUN_01980a20(&DAT_0193f910,1);
  local_res8[0x57] = lVar2;
  (**(code **)(*local_res8 + 0x1b8))(local_res8);
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}


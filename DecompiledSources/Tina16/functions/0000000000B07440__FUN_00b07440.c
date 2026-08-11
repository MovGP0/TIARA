/* Ghidra address: 00b07440 */
/* Ghidra symbol: FUN_00b07440 */


longlong FUN_00b07440(longlong param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong local_res8;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  longlong *local_30;
  longlong *local_28;
  longlong *local_20;
  
  local_40 = auStack_68;
  local_res8 = param_1;
  puVar1 = auStack_68;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_40;
  }
  local_40 = puVar1;
  FUN_00660290(local_res8,0,param_3);
  FUN_0064cbf0(local_res8,100);
  FUN_0064cc50(local_res8,0xf);
  FUN_0064e030(local_res8,0xffffff);
  FUN_0065bb80(local_res8,0);
  FUN_0065bbd0(local_res8,0);
  uVar2 = FUN_00b061e0(&PTR_FUN_00b04f58,1,local_res8);
  *(undefined8 *)(local_res8 + 0x4b8) = uVar2;
  local_20 = *(longlong **)(local_res8 + 0x4b8);
  (**(code **)(*local_20 + 0x50))(local_20,L"FEditor");
  (**(code **)(*local_20 + 0x118))(local_20,0);
  FUN_006804c0(local_20,0);
  FUN_0065bb80(local_20,0);
  FUN_0064cb30(local_20,2);
  FUN_0064cb90(local_20,1);
  FUN_0064cc50(local_20,0xd);
  uVar2 = FUN_00829530(&PTR_FUN_008228b0,1,local_res8);
  *(undefined8 *)(local_res8 + 0x4c0) = uVar2;
  local_28 = *(longlong **)(local_res8 + 0x4c0);
  (**(code **)(*local_28 + 0x50))(local_28,L"FDropBtn");
  FUN_0064de00(local_28,0);
  uVar2 = FUN_0082a4a0(local_28);
  FUN_0060a8f0(uVar2,PTR_IMAGE_DOS_HEADER_0200c280,L"bmDropDown");
  FUN_0064cc50(local_28,0xf);
  FUN_0064cbf0(local_28,0xf);
  local_28[0x40] = local_res8;
  local_28[0x3f] = (longlong)FUN_00b07cd0;
  uVar2 = FUN_00829530(&PTR_FUN_008228b0,1,local_res8);
  *(undefined8 *)(local_res8 + 0x4c8) = uVar2;
  local_30 = *(longlong **)(local_res8 + 0x4c8);
  (**(code **)(*local_30 + 0x50))(local_30,L"FDot3Btn");
  FUN_0064de00(local_30,0);
  uVar2 = FUN_0082a4a0(local_30);
  FUN_0060a8f0(uVar2,PTR_IMAGE_DOS_HEADER_0200c280,L"bmDot3");
  FUN_0064cc50(local_30,0xf);
  FUN_0064cbf0(local_30,0xf);
  local_30[0x40] = local_res8;
  local_30[0x3f] = (longlong)FUN_00b07f50;
  FUN_00654980(local_res8,*(undefined8 *)(local_res8 + 0x4b8));
  FUN_00654980(local_res8,*(undefined8 *)(local_res8 + 0x4c0));
  FUN_00654980(local_res8,*(undefined8 *)(local_res8 + 0x4c8));
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x4d8) = uVar2;
  uVar2 = FUN_0068b1b0(&PTR_FUN_00b04998,1,*(undefined8 *)(local_res8 + 0x4b8));
  *(undefined8 *)(local_res8 + 0x4d0) = uVar2;
  FUN_0064dbe0(uVar2,0);
  FUN_00654980(*(undefined8 *)(local_res8 + 0x4b8),*(undefined8 *)(local_res8 + 0x4d0));
  FUN_00b061d0(*(undefined8 *)(local_res8 + 0x4d0),*(undefined8 *)(local_res8 + 0x4b8));
  FUN_00b06310(*(undefined8 *)(local_res8 + 0x4b8),*(undefined8 *)(local_res8 + 0x4d0));
  FUN_0064dbe0(local_res8,0);
  FUN_0064dbe0(*(undefined8 *)(local_res8 + 0x4b8),1);
  FUN_0064dbe0(*(undefined8 *)(local_res8 + 0x4c0),1);
  FUN_0064dbe0(*(undefined8 *)(local_res8 + 0x4c8),1);
  FUN_00b07930(local_res8);
  FUN_0064dbe0(local_res8,1);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}


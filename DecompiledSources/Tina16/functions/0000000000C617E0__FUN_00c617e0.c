/* Ghidra address: 00c617e0 */
/* Ghidra symbol: FUN_00c617e0 */


longlong * FUN_00c617e0(longlong *param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *local_res8;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 local_58;
  undefined1 *local_50;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  longlong *local_20;
  
  local_50 = auStack_88;
  local_58 = 0;
  local_res8 = param_1;
  puVar1 = auStack_88;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_004119e0(param_1,param_2);
    puVar1 = local_50;
  }
  local_50 = puVar1;
  FUN_00723990(local_res8,0,param_3);
  FUN_0060e940(&local_58,&PTR_FUN_005f6910);
  FUN_00414ad0(local_res8 + 0x1c,local_58);
  lVar2 = FUN_00742f60(&PTR_FUN_00733e50,1,local_res8);
  local_res8[0x30] = lVar2;
  local_20 = (longlong *)local_res8[0x30];
  (**(code **)(*local_20 + 0x50))(local_20,L"PicturePanel");
  FUN_0064de00(local_20,0);
  local_68 = 200;
  (**(code **)(*local_20 + 400))(local_20,0xcc,5,0xa9);
  FUN_00743880(local_20,0);
  FUN_007438e0(local_20,6);
  FUN_0065bcb0(local_20,1);
  lVar2 = FUN_0067eb90(&PTR_FUN_00669e80,1,local_res8);
  local_res8[0x31] = lVar2;
  local_28 = (longlong *)local_res8[0x31];
  (**(code **)(*local_28 + 0x50))(local_28,L"PictureLabel");
  FUN_0064de00(local_28,0);
  local_68 = 0x17;
  (**(code **)(*local_28 + 400))(local_28,6,6,0x9d);
  FUN_0064c650(local_28,1);
  (**(code **)(*local_28 + 0x118))(local_28,0);
  (**(code **)(*local_28 + 0x130))(local_28,local_res8[0x30]);
  lVar2 = FUN_00829530(&PTR_FUN_008228b0,1,local_res8);
  local_res8[0x32] = lVar2;
  local_30 = (longlong *)local_res8[0x32];
  (**(code **)(*local_30 + 0x50))(local_30,L"PreviewButton");
  local_68 = 0x16;
  (**(code **)(*local_30 + 400))(local_30,0x4d,1,0x17);
  (**(code **)(*local_30 + 0x128))(local_30,0);
  uVar3 = FUN_0082a4a0(local_30);
  FUN_0060a8f0(uVar3,PTR_IMAGE_DOS_HEADER_0200c280,L"PREVIEWGLYPH");
  FUN_0041ddd0(local_30 + 0x1e,PTR_PTR_02001460);
  FUN_0064dfe0(local_30,0);
  FUN_0064dfb0(local_30,1);
  local_30[0x40] = (longlong)local_res8;
  local_30[0x3f] = *(longlong *)(*local_res8 + 0xc0);
  (**(code **)(*local_30 + 0x130))(local_30,local_res8[0x30]);
  lVar2 = FUN_00742f60(&PTR_FUN_00c61410,1,local_res8);
  local_res8[0x33] = lVar2;
  local_38 = (longlong *)local_res8[0x33];
  (**(code **)(*local_38 + 0x50))(local_38,L"PaintPanel");
  FUN_0064de00(local_38,0);
  local_68 = 0x91;
  (**(code **)(*local_38 + 400))(local_38,6,0x1d,0x9d);
  FUN_0064c650(local_38,5);
  FUN_00743850(local_38,2);
  FUN_00743880(local_38,1);
  FUN_0065bcb0(local_38,0);
  lVar2 = FUN_007416c0(&PTR_FUN_00732068,1,local_res8);
  local_res8[0x34] = lVar2;
  (**(code **)(*local_38 + 0x130))(local_38,local_res8[0x30]);
  local_40 = (longlong *)local_res8[0x34];
  (**(code **)(*local_40 + 0x50))(local_40,L"PaintBox");
  FUN_0064c650(local_40,5);
  local_40[0x42] = (longlong)local_res8;
  local_40[0x41] = *(longlong *)(*local_res8 + 0xc0);
  (**(code **)(*local_40 + 0x130))(local_40,local_res8[0x33]);
  FUN_00742090(local_40,1);
  FUN_00742030(local_40,1);
  FUN_00741fe0(local_40,1);
  *(undefined1 *)((longlong)local_40 + 0x342) = 1;
  FUN_00414480(&local_58);
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}


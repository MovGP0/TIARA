/* Ghidra address: 0149d1a0 */
/* Ghidra symbol: FUN_0149d1a0 */


undefined1 FUN_0149d1a0(longlong *param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  undefined1 local_21;
  longlong *local_20;
  
  local_30 = auStack_98;
  local_60 = 0;
  local_68 = 0;
  local_50 = 0;
  local_58 = 0;
  local_40 = 0;
  local_48 = 0;
  local_38 = 0;
  local_21 = FUN_01cf0520(param_1);
  if ((undefined **)*param_1 != &PTR_FUN_010b5580) {
    FUN_0149ed30(param_1);
  }
  lVar3 = FUN_01a5d940(&PTR_FUN_01a5c280,1);
  param_1[5] = lVar3;
  FUN_005fce30(*(undefined8 *)(*(longlong *)(lVar3 + 0x90) + 0x80),8);
  FUN_005fc860(*(undefined8 *)(*(longlong *)(param_1[5] + 0x90) + 0x80),0xff0000);
  lVar3 = param_1[5];
  *(undefined1 *)(lVar3 + 0x99) = 1;
  *(undefined4 *)(lVar3 + 0x9c) = 0xffffff;
  *(undefined1 *)(lVar3 + 0xa0) = 1;
  *(undefined1 *)(param_1 + 8) = 0;
  local_78 = L"TINA.INI";
  FUN_00416cd0(&local_38,3,*(undefined8 *)PTR_DAT_02005010,&DAT_0149d448);
  local_20 = (longlong *)FUN_005da0f0(&PTR_FUN_005d5a90,1,local_38);
  FUN_0043f750(&local_48,1);
  local_78 = (wchar_t *)local_48;
  (**(code **)(*local_20 + 0x10))(local_20,&local_40,L"Text Dialog Setup",L"Background");
  uVar1 = FUN_0043fc00(local_40);
  *(undefined1 *)(param_1[5] + 0x99) = uVar1;
  FUN_0043f750(&local_58,0xffffff);
  local_78 = (wchar_t *)local_58;
  (**(code **)(*local_20 + 0x10))(local_20,&local_50,L"Text Dialog Setup",L"BgndColor");
  uVar2 = FUN_0043fc00(local_50);
  *(undefined4 *)(param_1[5] + 0x9c) = uVar2;
  FUN_0043f750(&local_68,1);
  local_78 = (wchar_t *)local_68;
  (**(code **)(*local_20 + 0x10))(local_20,&local_60,L"Text Dialog Setup",L"Border");
  uVar1 = FUN_0043fc00(local_60);
  *(undefined1 *)(param_1[5] + 0xa0) = uVar1;
  FUN_00410f20(local_20);
  FUN_00414560(&local_68,7);
  return local_21;
}


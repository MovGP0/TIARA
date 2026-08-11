/* Ghidra address: 017efdf0 */
/* Ghidra symbol: FUN_017efdf0 */


void FUN_017efdf0(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_60 = 0;
  local_68 = 0;
  local_50 = 0;
  local_58 = 0;
  local_30 = 0;
  local_48 = 0;
  local_28 = 0;
  local_20 = 0;
  (**(code **)(*param_1 + 0x2e8))(param_1,L"bmInterp");
  *(undefined4 *)(param_1 + 0x10f) = 1;
  *(undefined4 *)((longlong)param_1 + 0x87c) = 1;
  FUN_00414ad0(param_1 + 0x111,L"noname.ipr");
  FUN_010c2250(&local_20,0);
  FUN_00414ad0(param_1 + 0x166,local_20);
  uVar3 = FUN_00b89270();
  FUN_00b8d110(uVar3,param_1);
  FUN_0064dd90(param_1,&local_28);
  FUN_00414ad0(param_1 + 0x110,local_28);
  FUN_00441920(&local_48,param_1[0x111]);
  local_40 = local_48;
  local_38 = CONCAT71(local_38._1_7_,0x11);
  FUN_00442f70(&local_30,param_1[0x110],&local_40,0);
  FUN_0064de00(param_1,local_30);
  FUN_017f0d90(param_1);
  lVar4 = FUN_017e1bd0(&DAT_017df868,1,0,0,0,0,0);
  param_1[0x169] = lVar4;
  FUN_017e8080(lVar4,param_1[0x10d],param_1[0xf9]);
  *(undefined1 *)(param_1[0x169] + 0x5f8) = 0;
  *(undefined1 *)((longlong)param_1 + 0xb43) = 0;
  lVar4 = FUN_013b2dc0(0,&PTR_FUN_013b25f8,10,5);
  param_1[0x167] = lVar4;
  FUN_00bfb510(param_1[0x10d],3);
  *(undefined4 *)(param_1 + 0x15f) = *(undefined4 *)(param_1[0xf9] + 0x98);
  *(undefined4 *)((longlong)param_1 + 0xafc) = *(undefined4 *)(param_1[0xfb] + 0x98);
  FUN_0064c650(param_1[0xfa],5);
  FUN_0064c650(param_1[0xfb],4);
  FUN_017f2de0(param_1,0,0xffffff,0);
  lVar4 = FUN_0177ce70(&PTR_FUN_0177c458,1,param_1);
  param_1[0x163] = lVar4;
  plVar1 = (longlong *)param_1[0x163];
  (**(code **)(*plVar1 + 0x50))(plVar1,L"OpenIPRDlg");
  FUN_00414ad0(plVar1 + 0x20,&DAT_017f03fc);
  FUN_00414ad0(plVar1 + 0x1c,L"Interpreter file (*.IPR)|*.IPR");
  *(undefined4 *)(plVar1 + 0x1b) = 0x80214;
  FUN_00416cd0(&local_50,3,L"User Examples|",*(undefined8 *)PTR_DAT_02005010,L"\\User Examples");
  local_40 = local_50;
  FUN_00416cd0(&local_58,3,L"Tina Examples|",*(undefined8 *)PTR_DAT_020049a0,L"\\Examples");
  local_38 = local_58;
  (**(code **)(*plVar1 + 0x130))(plVar1,&local_40,1);
  lVar4 = FUN_0177d960(&PTR_FUN_0177caa0,1,param_1);
  param_1[0x164] = lVar4;
  plVar1 = (longlong *)param_1[0x164];
  (**(code **)(*plVar1 + 0x50))(plVar1,L"SaveIPRDlg");
  FUN_0177dd40(plVar1,&DAT_017f03fc);
  FUN_00414ad0(plVar1 + 0x1c,L"Interpreter file (*.IPR)|*.IPR");
  *(undefined4 *)(plVar1 + 0x1b) = 0x80116;
  FUN_00416cd0(&local_60,3,L"User Examples|",*(undefined8 *)PTR_DAT_02005010,L"\\User Examples");
  local_40 = local_60;
  FUN_00416cd0(&local_68,3,L"Tina Examples|",*(undefined8 *)PTR_DAT_020049a0,L"\\Examples");
  local_38 = local_68;
  (**(code **)(*plVar1 + 0x130))(plVar1,&local_40,1);
  FUN_0177d560(param_1[0x163],*(undefined8 *)PTR_DAT_020049a0);
  FUN_0177d560(param_1[0x164],*(undefined8 *)PTR_DAT_02005010);
  FUN_00414480(param_1 + 0x162);
  FUN_007e2f80(param_1[0x100],0);
  lVar4 = FUN_004b6930(&PTR_FUN_00478280,1);
  param_1[0x16a] = lVar4;
  *(undefined1 *)(param_1 + 0x16c) = 0;
  *(undefined1 *)((longlong)param_1 + 0xb61) = 1;
  uVar3 = FUN_01119b00(&PTR_FUN_01117868,1,param_1);
  FUN_00c03380(param_1[0x10d],uVar3);
  lVar4 = param_1[0x10d];
  uVar3 = FUN_00e81400(&PTR_FUN_00e80d78,1,lVar4);
  FUN_00c0f7b0(lVar4,uVar3);
  cVar2 = FUN_01a90ed0();
  if (cVar2 != '\0') {
    FUN_01b25310(param_1[0x10d]);
  }
  FUN_017eed60(param_1);
  FUN_00414560(&local_68,5);
  FUN_00414480(&local_30);
  FUN_00414480(&local_28);
  FUN_00414480(&local_20);
  return;
}


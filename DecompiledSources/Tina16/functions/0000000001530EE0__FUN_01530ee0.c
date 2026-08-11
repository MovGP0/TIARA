/* Ghidra address: 01530ee0 */
/* Ghidra symbol: FUN_01530ee0 */


void FUN_01530ee0(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
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
  
  local_88 = 0;
  local_78 = 0;
  local_80 = 0;
  local_68 = 0;
  local_70 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_40 = 0;
  local_48 = 0;
  local_30 = 0;
  local_38 = 0;
  (**(code **)(*param_1 + 0x2e8))(param_1,L"bmSpice");
  lVar3 = FUN_0177ce70(&PTR_FUN_0177c458,1,param_1);
  param_1[0x386] = lVar3;
  plVar1 = (longlong *)param_1[0x386];
  (**(code **)(*plVar1 + 0x50))(plVar1,L"OpenCIRDlg");
  FUN_00414ad0(plVar1 + 0x20,&DAT_01531634);
  FUN_00414ad0(plVar1 + 0x1c,L"PSpice circuit file (*.CIR;*.LIB)|*.CIR;*.LIB");
  FUN_00c78ad0(plVar1,L"Open File");
  *(undefined4 *)(plVar1 + 0x1b) = 0x80214;
  FUN_00416cd0(&local_30,3,L"User Examples|",*(undefined8 *)PTR_DAT_02005010,L"\\User Examples");
  local_28 = local_30;
  FUN_00416cd0(&local_38,3,L"Tina Examples|",*(undefined8 *)PTR_DAT_020049a0,L"\\Examples");
  local_20 = local_38;
  (**(code **)(*plVar1 + 0x130))(plVar1,&local_28,1);
  lVar3 = FUN_0177d960(&PTR_FUN_0177caa0,1,param_1);
  param_1[0x387] = lVar3;
  plVar1 = (longlong *)param_1[0x387];
  (**(code **)(*plVar1 + 0x50))(plVar1,L"SaveCIRDlg");
  FUN_0177dd40(plVar1,&DAT_01531634);
  FUN_00414ad0(plVar1 + 0x1c,L"PSpice circuit file|*.CIR");
  *(undefined4 *)(plVar1 + 0x1b) = 0x80116;
  FUN_00c78ad0(plVar1,L"Save %s As");
  FUN_00416cd0(&local_40,3,L"User Examples|",*(undefined8 *)PTR_DAT_02005010,L"\\User Examples");
  local_28 = local_40;
  FUN_00416cd0(&local_48,3,L"Tina Examples|",*(undefined8 *)PTR_DAT_020049a0,L"\\Examples");
  local_20 = local_48;
  (**(code **)(*plVar1 + 0x130))(plVar1,&local_28,1);
  FUN_00416ba0(&local_50,*(undefined8 *)PTR_DAT_020049a0,L"\\Examples");
  FUN_0177d560(param_1[0x386],local_50);
  FUN_00416ba0(&local_58,*(undefined8 *)PTR_DAT_02005010,L"\\User Examples");
  FUN_0177d560(param_1[0x387],local_58);
  FUN_00414ad0(param_1 + 0x12d,L"noname.cir");
  uVar4 = FUN_00b89270();
  FUN_00b8d110(uVar4,param_1);
  FUN_0064dd90(param_1,&local_60);
  FUN_00414ad0(param_1 + 0x12e,local_60);
  FUN_00414ad0(param_1 + 0x12f,*(undefined8 *)(param_1[0x387] + 0x228));
  FUN_00441920(&local_70,param_1[0x12d]);
  local_28 = local_70;
  local_20 = CONCAT71(local_20._1_7_,0x11);
  FUN_00442f70(&local_68,param_1[0x12e],&local_28,0);
  FUN_0064de00(param_1,local_68);
  uVar4 = FUN_00b89270();
  FUN_00b8e520(uVar4,&local_78,0x3e5);
  uVar4 = FUN_00b89270();
  FUN_00b8e520(uVar4,&local_80,0x3e6);
  FUN_00416cd0(param_1 + 300,4,local_78,L": %d ",local_80,L": %d");
  FUN_0152fb90(param_1);
  FUN_0152f640(param_1);
  FUN_00416cd0(&local_88,3,*(undefined8 *)PTR_DAT_02005010,&DAT_01531858,L"TINA.INI");
  lVar3 = FUN_005da0f0(&PTR_FUN_005d5a90,1,local_88);
  param_1[0x381] = lVar3;
  lVar3 = FUN_004b6930(&PTR_FUN_00478280,1);
  param_1[0x382] = lVar3;
  lVar3 = FUN_004b6930(&PTR_FUN_00478280,1);
  param_1[0x38a] = lVar3;
  lVar3 = FUN_004b6930(&PTR_FUN_00478280,1);
  param_1[0x38b] = lVar3;
  FUN_004b67b0(lVar3,1);
  lVar3 = FUN_014e4f70(0,&PTR_FUN_014db5f8,0);
  param_1[0x385] = lVar3;
  FUN_019953b0(lVar3);
  if (*(longlong *)(*(longlong *)PTR_DAT_02004e40 + 0x2788) != 0) {
    lVar3 = FUN_01c8a3c0(*(undefined8 *)PTR_DAT_02004e40,
                         *(longlong *)(*(longlong *)PTR_DAT_02004e40 + 0x2788));
    cVar2 = FUN_01d0fb00(lVar3 + 0x40,PTR_DAT_02004010);
    if (cVar2 == '\0') {
      FUN_0199e310(*(undefined8 *)(lVar3 + 0x10),0,1,1);
    }
    FUN_00417c40(lVar3 + 0x40,PTR_DAT_02004010,&DAT_01d0d0b8);
  }
  FUN_00417c40(param_1 + 0x131,PTR_DAT_02004010,&DAT_01d0d0b8);
  FUN_01d0e500();
  PTR_DAT_02004010[0x814] = *(undefined1 *)((longlong)param_1 + 0x119c);
  PTR_DAT_02004010[0x815] = *(undefined1 *)((longlong)param_1 + 0x119d);
  PTR_DAT_02004010[0x816] = *(undefined1 *)((longlong)param_1 + 0x119e);
  FUN_00417c40(param_1 + 600,PTR_DAT_02004010,&DAT_01d0d0b8);
  FUN_01530230(param_1,param_1[0xe0]);
  FUN_007e2f80(param_1[0xfd],0);
  FUN_007e2f80(param_1[0xfe],0);
  FUN_007e2f80(param_1[0x100],0);
  lVar3 = FUN_00e81400(&PTR_FUN_00e80d78,1,param_1);
  param_1[0x388] = lVar3;
  FUN_00c0f7b0(param_1[299],lVar3);
  uVar4 = FUN_014b11b0(&PTR_FUN_014af850,1,param_1);
  FUN_00c03380(param_1[299],uVar4);
  cVar2 = FUN_01a90ed0();
  if (cVar2 != '\0') {
    FUN_01b25310(param_1[299]);
  }
  FUN_00414560(&local_88,5);
  FUN_00414480(&local_60);
  FUN_00414560(&local_58,6);
  return;
}


/* Ghidra address: 01c849f0 */
/* Ghidra symbol: FUN_01c849f0 */


void FUN_01c849f0(longlong param_1)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_c8 [32];
  undefined **local_a8;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 *local_60;
  undefined4 local_50;
  int local_4c;
  longlong *local_48;
  longlong *local_40;
  byte local_35;
  undefined4 local_34;
  int local_30;
  int local_2c;
  undefined8 local_28;
  undefined8 local_20;
  
  local_60 = auStack_c8;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  local_20 = 0;
  local_28 = 0;
  local_40 = *(longlong **)(param_1 + 0x24b8);
  local_a8 = (undefined **)&DAT_01c858b0;
  (**(code **)(*local_40 + 0x10))(local_40,&local_28,L"Schematic Editor",L"AutoRepeat");
  iVar3 = FUN_00416db0(local_28,&DAT_01c858c0);
  FUN_007e2d20(*(undefined8 *)(param_1 + 0xc90),iVar3 == 0);
  iVar3 = FUN_00416db0(local_28,&DAT_01c858c0);
  FUN_007e2d20(*(undefined8 *)(param_1 + 0xc98),iVar3 == 0);
  local_a8 = (undefined **)&DAT_01c858c0;
  (**(code **)(*local_40 + 0x10))(local_40,&local_28,L"Schematic Editor",L"AutoReWire");
  iVar3 = FUN_00416db0(local_28,&DAT_01c858c0);
  FUN_007e2d20(*(undefined8 *)(param_1 + 0xcd8),iVar3 == 0);
  iVar3 = FUN_00416db0(local_28,&DAT_01c858c0);
  FUN_007e2d20(*(undefined8 *)(param_1 + 0xce0),iVar3 == 0);
  local_a8 = (undefined **)&DAT_01c858c0;
  (**(code **)(*local_40 + 0x10))(local_40,&local_28,L"Schematic Editor",L"AppendValueToLabel");
  iVar3 = FUN_00416db0(local_28,&DAT_01c858c0);
  *PTR_DAT_020045f0 = iVar3 == 0;
  PTR_DAT_02004010[0x814] = *PTR_DAT_020045f0;
  local_a8 = (undefined **)&DAT_01c858c0;
  (**(code **)(*local_40 + 0x10))(local_40,&local_28,L"Schematic Editor",L"AppendUnitToLabel");
  iVar3 = FUN_00416db0(local_28,&DAT_01c858c0);
  *PTR_DAT_020050f8 = iVar3 == 0;
  PTR_DAT_02004010[0x815] = *PTR_DAT_020050f8;
  local_a8 = (undefined **)&DAT_01c858b0;
  (**(code **)(*local_40 + 0x10))(local_40,&local_28,L"Schematic Editor",L"AppendToleranceToLabel");
  iVar3 = FUN_00416db0(local_28,&DAT_01c858c0);
  *PTR_DAT_020037e8 = iVar3 == 0;
  local_a8 = (undefined **)&DAT_01c858c0;
  (**(code **)(*local_40 + 0x10))(local_40,&local_28,L"Schematic Editor",L"ShowPCBPinNumbers");
  uVar4 = (**(code **)(*local_40 + 0x20))
                    (local_40,L"Schematic Editor",L"AutoSaveInterval",
                     *(undefined4 *)PTR_DAT_02002718);
  *(undefined4 *)PTR_DAT_02002718 = uVar4;
  uVar4 = (**(code **)(*local_40 + 0x20))
                    (local_40,L"Schematic Editor",L"AutoSaveHistoryDepth",
                     *(undefined4 *)PTR_DAT_02003b90);
  *(undefined4 *)PTR_DAT_02003b90 = uVar4;
  uVar1 = (**(code **)(*local_40 + 0x30))(local_40,L"Schematic Editor",L"StartAsNew",1);
  *PTR_DAT_02003180 = uVar1;
  iVar3 = FUN_00416db0(local_28,&DAT_01c858c0);
  *PTR_DAT_02003038 = iVar3 == 0;
  local_a8 = (undefined **)&DAT_01c858c0;
  (**(code **)(*local_40 + 0x10))(local_40,&local_28,L"Schematic Editor",L"RenumberOnPaste");
  iVar3 = FUN_00416db0(local_28,&DAT_01c858c0);
  *PTR_DAT_020041d0 = iVar3 == 0;
  local_a8 = (undefined **)&DAT_01c858b0;
  (**(code **)(*local_40 + 0x10))(local_40,&local_28,L"Schematic Editor",L"SaveReferenceOnly");
  *PTR_DAT_02005c00 = 0;
  local_a8 = (undefined **)&DAT_01c858c0;
  (**(code **)(*local_40 + 0x10))(local_40,&local_28,L"Schematic Editor",L"ShowLabels");
  iVar3 = FUN_00416db0(local_28,&DAT_01c858b0);
  *PTR_DAT_02001798 = iVar3 == 0;
  PTR_DAT_02004010[0x816] = *PTR_DAT_02001798;
  local_a8 = (undefined **)&DAT_01c858b0;
  (**(code **)(*local_40 + 0x10))(local_40,&local_28,L"Schematic Editor",L"ShowGraphNumbers");
  *PTR_DAT_02003f60 = 0;
  uVar1 = (**(code **)(*local_40 + 0x30))(local_40,L"Schematic Editor",L"Enable3DShapes",0);
  *PTR_DAT_02001560 = uVar1;
  if (*PTR_DAT_02001560 == '\0') {
    FUN_01c9b040(param_1,0);
  }
  else {
    FUN_01c9b010(param_1,0);
  }
  local_35 = (**(code **)(*local_40 + 0x30))(local_40,L"Schematic Editor",L"WireWidth",0);
  *(uint *)PTR_DAT_02003960 = (uint)local_35;
  local_a8 = (undefined **)0x0;
  (**(code **)(*local_40 + 0x10))(local_40,&local_28,L"Schematic Editor",L"Param1");
  FUN_00414ad0(PTR_DAT_020031c8,local_28);
  local_a8 = (undefined **)0x0;
  (**(code **)(*local_40 + 0x10))(local_40,&local_28,L"Schematic Editor",L"Param2");
  FUN_00414ad0(PTR_DAT_020034b8,local_28);
  local_a8 = (undefined **)0x0;
  (**(code **)(*local_40 + 0x10))(local_40,&local_28,L"Schematic Editor",L"Param3");
  FUN_00414ad0(PTR_DAT_02001ae0,local_28);
  local_a8 = (undefined **)0x0;
  (**(code **)(*local_40 + 0x10))(local_40,&local_28,L"Schematic Editor",L"Param4");
  FUN_00414ad0(PTR_DAT_02005330,local_28);
  local_a8 = (undefined **)0x0;
  (**(code **)(*local_40 + 0x10))(local_40,&local_28,L"Schematic Editor",L"ColorScheme");
  FUN_00414ad0(PTR_DAT_02001b00,local_28);
  FUN_01aa0060(*(undefined8 *)(param_1 + 0x24b8),*(undefined8 *)PTR_DAT_02001b00,PTR_DAT_02003ad0,
               PTR_DAT_02005048);
  FUN_01c835b0(*(undefined8 *)PTR_DAT_02001b00);
  uVar5 = FUN_0198d430(*(undefined8 *)(param_1 + 0x27a8));
  uVar6 = FUN_0065b870(*(undefined8 *)(param_1 + 0xa10));
  FUN_01a97cf0(uVar5,uVar6);
  FUN_0064e030(*(undefined8 *)(param_1 + 0xa10),*(undefined4 *)PTR_DAT_02003ad0);
  uVar4 = (**(code **)(**(longlong **)(param_1 + 0x24b8) + 0x20))
                    (*(longlong **)(param_1 + 0x24b8),L"Schematic Editor",L"AutoShapeColorSet",0);
  *(undefined4 *)PTR_DAT_02001de0 = uVar4;
  local_a8 = (undefined **)0x0;
  (**(code **)(*local_40 + 0x10))(local_40,&local_70,L"Schematic Editor",L"InitDir");
  FUN_00415dd0(&local_78,local_70,0);
  FUN_00b0d000(&local_68,local_78,0xfde9);
  FUN_004168b0(&local_28,local_68);
  FUN_00414ad0(PTR_DAT_02004278,local_28);
  if (*(longlong *)PTR_DAT_02004278 == 0) {
    FUN_00416ba0(PTR_DAT_02004278,*(undefined8 *)PTR_DAT_020049a0,L"\\examples");
  }
  local_4c = 0;
  lVar7 = *(longlong *)PTR_DAT_02004278;
  if (lVar7 != 0) {
    local_4c = *(int *)(lVar7 + -4);
  }
  if (*(short *)(*(longlong *)PTR_DAT_02004278 + -2 + (longlong)local_4c * 2) == 0x5c) {
    local_50 = 0;
    if (lVar7 != 0) {
      local_50 = *(undefined4 *)(lVar7 + -4);
    }
    FUN_00416e20(PTR_DAT_02004278,local_50,1);
  }
  local_a8 = (undefined **)&DAT_01c858c0;
  (**(code **)(*local_40 + 0x10))(local_40,&local_28,L"Schematic Editor",L"DockNetlist");
  iVar3 = FUN_00416db0(local_28,&DAT_01c858c0);
  FUN_007e2d20(*(undefined8 *)(param_1 + 0xfd8),iVar3 == 0);
  uVar1 = (**(code **)(*local_40 + 0x20))
                    (local_40,L"Schematic Editor",L"Default Precision",*PTR_DAT_02005310);
  *PTR_DAT_02005310 = uVar1;
  local_a8 = &PTR_DAT_01c85cc8;
  (**(code **)(*local_40 + 0x10))(local_40,&local_80,L"Schematic Editor",L"LanguageCode");
  FUN_00414ad0(param_1 + 0x2508,local_80);
  uVar1 = (**(code **)(*local_40 + 0x30))(local_40,L"Schematic Editor",L"MouseWheelZooming",0);
  *PTR_DAT_02005700 = uVar1;
  uVar1 = (**(code **)(*local_40 + 0x30))(local_40,L"Schematic Editor",L"CompressedTSCFormat",1);
  *PTR_DAT_02002038 = uVar1;
  uVar1 = (**(code **)(*local_40 + 0x30))(local_40,L"Schematic Editor",L"SavePictureAsGIF",0);
  *PTR_DAT_020048d0 = uVar1;
  local_30 = (**(code **)(*local_40 + 0x20))(local_40,L"Schematic Editor",L"LastUpdated",0);
  if (local_30 == 0) {
    FUN_00448e70();
    uVar4 = FUN_0040c840();
    (**(code **)(*local_40 + 0x28))(local_40,L"Schematic Editor",L"LastUpdated",uVar4);
    FUN_00448e70();
    local_30 = FUN_0040c840();
  }
  uVar5 = FUN_00448e70();
  local_34 = FUN_005bbb10(uVar5,(double)local_30);
  local_a8 = (undefined **)0x1c85db8;
  (**(code **)(*local_40 + 0x10))(local_40,&local_28,L"Schematic Editor",L"PCBRootDir");
  iVar3 = FUN_004170c0(&DAT_01c85dd0,local_28,1);
  if (-1 < iVar3 + -1) {
    FUN_00457de0(&local_28,&local_88,&DAT_01c85dd4,0);
    FUN_00414b50(&local_28,local_88);
    FUN_00457f20(&local_28,&local_90,L".PCB",3);
    FUN_00414b50(&local_28,local_90);
  }
  FUN_00414ad0(PTR_DAT_02004008,local_28);
  local_a8 = (undefined **)0x1c85dec;
  FUN_00416cd0(PTR_DAT_02004c08,3,&DAT_01c85dd0,local_28);
  local_2c = 0;
  while( true ) {
    iVar3 = FUN_007e2ef0(*(undefined8 *)(param_1 + 0xff0));
    if (iVar3 <= local_2c) break;
    lVar7 = FUN_007e2f10(*(undefined8 *)(param_1 + 0xff0),local_2c);
    iVar3 = FUN_00416db0(*(undefined8 *)(lVar7 + 0x78),local_28);
    if (iVar3 == 0) break;
    local_2c = local_2c + 1;
  }
  lVar7 = FUN_007e2f10(*(undefined8 *)(param_1 + 0xff0),local_2c);
  (**(code **)(lVar7 + 0x110))(*(undefined8 *)(lVar7 + 0x118),0);
  FUN_00416ba0(&local_98,*(undefined8 *)PTR_DAT_02005010,L"\\TSUPER.INI");
  local_48 = (longlong *)FUN_005da0f0(&PTR_FUN_005d5a90,1,local_98);
  local_a8 = (undefined **)&DAT_01c858c0;
  (**(code **)(*local_48 + 0x10))(local_48,&local_28,L"EvalOptions",L"EvalOKLimit");
  uVar5 = FUN_00448650(local_28,PTR_DAT_02004830);
  *(undefined8 *)PTR_DAT_02001968 = uVar5;
  FUN_00410f20(local_48);
  uVar1 = FUN_00f06890(L"SaveAllAnalResults",0);
  *PTR_DAT_020017c0 = uVar1;
  uVar1 = FUN_00f06890(L"DisableTRTooManyPointsWarning",0);
  *PTR_DAT_02001088 = uVar1;
  uVar1 = FUN_00f06890(L"EnableInstantDrawing",0);
  *PTR_DAT_02005258 = uVar1;
  uVar1 = FUN_00f06890(L"EnableAutoConverge",1);
  *PTR_DAT_02003da8 = uVar1;
  cVar2 = FUN_01b23030();
  if (cVar2 != '\0') {
    *PTR_DAT_02003da8 = 0;
  }
  uVar1 = FUN_00f06890(L"ACShowRMS",0);
  *PTR_DAT_02001b08 = uVar1;
  FUN_017e1500();
  FUN_00414560(&local_98,4);
  FUN_004144d0(&local_78);
  FUN_00414480(&local_70);
  FUN_00414520(&local_68);
  FUN_00414560(&local_28,2);
  return;
}


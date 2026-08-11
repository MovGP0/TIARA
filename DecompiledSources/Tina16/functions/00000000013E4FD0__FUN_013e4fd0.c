/* Ghidra address: 013e4fd0 */
/* Ghidra symbol: FUN_013e4fd0 */


void FUN_013e4fd0(undefined1 param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30;
  
  local_78 = 0;
  local_68 = 0;
  local_70 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  plVar5 = (longlong *)FUN_005dc9d0(&PTR_FUN_005d4e78,1,0);
  lVar6 = FUN_01c8a450(*(undefined8 *)PTR_DAT_02004e40);
  FUN_005dd980(plVar5,*(undefined8 *)(lVar6 + 0x238));
  FUN_005894c0(&local_38,&DAT_01cb2e28,param_1);
  FUN_00416ba0(&local_50,local_38,L".FileName");
  (**(code **)(*plVar5 + 0x10))(plVar5,&local_30,L"AutoImport",local_50,0);
  if (local_30 != 0) {
    cVar1 = FUN_00440a20(local_30,1);
    if (cVar1 != '\0') {
      FUN_00416ba0(&local_58,local_38,L".FileType");
      (**(code **)(*plVar5 + 0x10))(plVar5,&local_40,L"AutoImport",local_58,0);
      FUN_00416ba0(&local_60,local_38,L".SkipRows");
      uVar3 = (**(code **)(*plVar5 + 0x20))(plVar5,L"AutoImport",local_60,0);
      FUN_00416ba0(&local_70,local_38,L".Delimiter");
      (**(code **)(*plVar5 + 0x10))(plVar5,&local_68,L"AutoImport",local_70,0);
      FUN_00f0b690(&local_48,local_68);
      FUN_00416ba0(&local_78,local_38,L".AmplitudeInDB");
      uVar2 = (**(code **)(*plVar5 + 0x30))(plVar5,L"AutoImport",local_78,1);
      plVar7 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
      (**(code **)(*plVar7 + 0xd8))(plVar7,local_30);
      uVar4 = FUN_00589bc0(&DAT_00f08df8,local_40);
      FUN_013e26f0(uVar4,0,plVar7,uVar3,local_48,uVar2,1);
      FUN_00410f20(plVar7);
    }
  }
  FUN_00410f20(plVar5);
  FUN_00414560(&local_78,10);
  return;
}


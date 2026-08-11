/* Ghidra address: 01a894f0 */
/* Ghidra symbol: FUN_01a894f0 */


void FUN_01a894f0(void)

{
  longlong *plVar1;
  char cVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong *plVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50 [2];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_a0 = 0;
  local_90 = 0;
  local_98 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_60 = 0;
  local_68 = 0;
  local_50[0] = 0;
  local_58 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  plVar10 = (longlong *)FUN_00723990(&PTR_FUN_007198a0,1,*(undefined8 *)PTR_DAT_02004030);
  uVar11 = FUN_00b89270();
  FUN_0041ddd0(&local_58,&PTR_PTR_01a894c8);
  FUN_00b8e650(uVar11,local_50,L"DrawWind.ImportCurveTitle",local_58);
  FUN_00414ad0(plVar10 + 0x1f,local_50[0]);
  uVar11 = FUN_00b89270();
  FUN_0041ddd0(&local_68,&LAB_01a894d8);
  FUN_00b8e650(uVar11,&local_60,L"DrawWind.ImportCurveFilter",local_68);
  FUN_00414ad0(plVar10 + 0x1c,local_60);
  FUN_00724380(plVar10,L"*.txt");
  FUN_00414ad0(plVar10 + 0x20,&DAT_01a89af8);
  *(undefined4 *)(plVar10 + 0x1b) = 0x80314;
  *(undefined4 *)((longlong)plVar10 + 0x7c) = 0x1f7;
  cVar2 = (**(code **)(*plVar10 + 0xa8))(plVar10);
  if (cVar2 != '\0') {
    FUN_00724270(plVar10,&local_40);
    plVar12 = (longlong *)FUN_007fc180(&PTR_FUN_00f08f60,1,*(undefined8 *)PTR_DAT_02004030);
    FUN_00724270(plVar10,&local_70);
    FUN_00414ad0(plVar12 + 0xe9,local_70);
    iVar7 = (**(code **)(*plVar12 + 0x2d0))(plVar12);
    if (iVar7 == 1) {
      FUN_0064e140(DAT_01fcab48,0xfff5);
      plVar13 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
      (**(code **)(*plVar13 + 0xd8))(plVar13,local_40);
      uVar8 = FUN_00f09f10(plVar12);
      uVar9 = FUN_00c5a450(plVar12[0xdb]);
      uVar3 = FUN_00f09e70(plVar12);
      uVar4 = FUN_00f09e90(plVar12);
      bVar5 = FUN_013e26f0((char)plVar12[0xea],uVar8,plVar13,uVar9,plVar12[0xeb],uVar3,uVar4);
      bVar6 = FUN_00f09ef0(plVar12);
      if ((bVar5 & bVar6) != 0) {
        plVar14 = (longlong *)FUN_005dc9d0(&PTR_FUN_005d4e78,1,0);
        lVar15 = FUN_01c8a450(*(undefined8 *)PTR_DAT_02004e40);
        FUN_005dd980(plVar14,*(undefined8 *)(lVar15 + 0x238));
        plVar1 = *(longlong **)(*(longlong *)(DAT_01fcab48 + 0x798) + 0xd8);
        uVar11 = (**(code **)(*plVar1 + 0x30))(plVar1,0);
        uVar3 = FUN_01cdf690(uVar11);
        FUN_005894c0(&local_30,&DAT_01cb2e28,uVar3);
        FUN_005894c0(&local_38,&DAT_00f08df8,(char)plVar12[0xea]);
        FUN_00416ba0(&local_78,local_30,L".FileName");
        (**(code **)(*plVar14 + 0x18))(plVar14,L"AutoImport",local_78,local_40);
        FUN_00416ba0(&local_80,local_30,L".FileType");
        (**(code **)(*plVar14 + 0x18))(plVar14,L"AutoImport",local_80,local_38);
        FUN_00416ba0(&local_88,local_30,L".SkipRows");
        uVar8 = FUN_00c5a450(plVar12[0xdb]);
        (**(code **)(*plVar14 + 0x28))(plVar14,L"AutoImport",local_88,uVar8);
        FUN_00416ba0(&local_90,local_30,L".Delimiter");
        FUN_00f0b4f0(&local_98,plVar12[0xeb]);
        (**(code **)(*plVar14 + 0x18))(plVar14,L"AutoImport",local_90,local_98);
        FUN_00416ba0(&local_a0,local_30,L".AmplitudeInDB");
        uVar8 = FUN_00f09e70(plVar12);
        (**(code **)(*plVar14 + 0x38))(plVar14,L"AutoImport",local_a0,uVar8);
        lVar15 = FUN_01c8a450(*(undefined8 *)PTR_DAT_02004e40);
        (**(code **)(**(longlong **)(lVar15 + 0x238) + 0x90))(*(longlong **)(lVar15 + 0x238));
        lVar15 = FUN_01c8a450(*(undefined8 *)PTR_DAT_02004e40);
        FUN_005dcf20(plVar14,*(undefined8 *)(lVar15 + 0x238));
        FUN_00410f20(plVar14);
      }
      FUN_00410f20(plVar13);
      FUN_0064e140(DAT_01fcab48,0);
    }
    FUN_00410f20(plVar12);
  }
  FUN_00410f20(plVar10);
  FUN_00414560(&local_a0,6);
  FUN_00414480(&local_70);
  FUN_00414560(&local_68,4);
  FUN_00414560(&local_40,3);
  return;
}


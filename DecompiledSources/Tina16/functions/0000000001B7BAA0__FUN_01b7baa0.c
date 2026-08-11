/* Ghidra address: 01b7baa0 */
/* Ghidra symbol: FUN_01b7baa0 */


void FUN_01b7baa0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20[0] = 0;
  FUN_00410f20(*(undefined8 *)(param_1 + 0x800));
  FUN_00416cd0(local_20,3,*(undefined8 *)PTR_DAT_02005010,&DAT_01b7c120,L"TINA.INI");
  uVar6 = FUN_005da0f0(&PTR_FUN_005d5a90,1,local_20[0]);
  *(undefined8 *)(param_1 + 0x800) = uVar6;
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x768) + 0x260))(*(longlong **)(param_1 + 0x768));
  bVar7 = cVar2 == '\0';
  if ((bool)*PTR_DAT_02002480 != bVar7) {
    *PTR_DAT_02002480 = bVar7;
    if (bVar7) {
      if (bVar7) {
        (**(code **)(**(longlong **)(param_1 + 0x800) + 0x18))
                  (*(longlong **)(param_1 + 0x800),L"Schematic Editor",L"DefSymbolSet",
                   &PTR_DAT_01b7c1bc);
      }
    }
    else {
      (**(code **)(**(longlong **)(param_1 + 0x800) + 0x18))
                (*(longlong **)(param_1 + 0x800),L"Schematic Editor",L"DefSymbolSet",
                 &PTR_DAT_01b7c1a8);
    }
  }
  uVar3 = (**(code **)(**(longlong **)(param_1 + 0x778) + 0x260))(*(longlong **)(param_1 + 0x778));
  *PTR_DAT_02001560 = uVar3;
  (**(code **)(**(longlong **)(param_1 + 0x800) + 0x38))
            (*(longlong **)(param_1 + 0x800),L"Schematic Editor",L"Enable3DShapes",*PTR_DAT_02001560
            );
  if (*(int *)(*(longlong *)(param_1 + 0x6c8) + 0x4a8) == 0) {
    *PTR_DAT_020033c0 = 1;
    (**(code **)(**(longlong **)(param_1 + 0x800) + 0x18))
              (*(longlong **)(param_1 + 0x800),L"Schematic Editor",L"DefUnit",L"inch");
  }
  else {
    *PTR_DAT_020033c0 = 3;
    (**(code **)(**(longlong **)(param_1 + 0x800) + 0x18))
              (*(longlong **)(param_1 + 0x800),L"Schematic Editor",L"DefUnit",&PTR_DAT_01b7c230);
  }
  cVar2 = *(char *)(*(longlong *)(param_1 + 0x6d0) + 0x4a8);
  if (*PTR_DAT_02002de8 != cVar2) {
    *PTR_DAT_02002de8 = cVar2;
    if (*PTR_DAT_02002de8 == '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x800) + 0x18))
                (*(longlong **)(param_1 + 0x800),L"Schematic Editor",L"ACBaseFunc",L"sine");
    }
    else {
      (**(code **)(**(longlong **)(param_1 + 0x800) + 0x18))
                (*(longlong **)(param_1 + 0x800),L"Schematic Editor",L"ACBaseFunc",L"cosine");
    }
  }
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6e0),&local_28);
  FUN_00414ad0(PTR_DAT_020031c8,local_28);
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6f8),&local_30);
  FUN_00414ad0(PTR_DAT_020034b8,local_30);
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x708),&local_38);
  FUN_00414ad0(PTR_DAT_02001ae0,local_38);
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x718),&local_40);
  FUN_00414ad0(PTR_DAT_02005330,local_40);
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x728),&local_48);
  iVar4 = FUN_004170c0(&DAT_01b7c29c,local_48,1);
  if (iVar4 != 1) {
    plVar1 = *(longlong **)(param_1 + 0x728);
    uVar5 = (**(code **)(*plVar1 + 0x260))(plVar1);
    uVar6 = (**(code **)(*(longlong *)plVar1[0x9e] + 0x30))((longlong *)plVar1[0x9e],uVar5);
    FUN_0043dec0(&local_50,uVar6);
    FUN_00414ad0(PTR_DAT_02001b00,local_50);
    (**(code **)(**(longlong **)(param_1 + 0x800) + 0x18))
              (*(longlong **)(param_1 + 0x800),L"Schematic Editor",L"ColorScheme",
               *(undefined8 *)PTR_DAT_02001b00);
    FUN_01aa0060(*(undefined8 *)(param_1 + 0x800),*(undefined8 *)PTR_DAT_02001b00,PTR_DAT_02003ad0,
                 PTR_DAT_02005048);
  }
  uVar5 = (**(code **)(**(longlong **)(param_1 + 2000) + 0x260))(*(longlong **)(param_1 + 2000));
  *(undefined4 *)PTR_DAT_02001de0 = uVar5;
  (**(code **)(**(longlong **)(param_1 + 0x800) + 0x28))
            (*(longlong **)(param_1 + 0x800),L"Schematic Editor",L"AutoShapeColorSet",
             *(undefined4 *)PTR_DAT_02001de0);
  *PTR_DAT_02005700 = *(undefined1 *)(*(longlong *)(param_1 + 0x7b8) + 0x4a8);
  (**(code **)(**(longlong **)(param_1 + 0x800) + 0x38))
            (*(longlong **)(param_1 + 0x800),L"Schematic Editor",L"MouseWheelZooming",
             *PTR_DAT_02005700);
  uVar3 = (**(code **)(**(longlong **)(param_1 + 0x7c0) + 0x260))(*(longlong **)(param_1 + 0x7c0));
  *PTR_DAT_02002038 = uVar3;
  (**(code **)(**(longlong **)(param_1 + 0x800) + 0x38))
            (*(longlong **)(param_1 + 0x800),L"Schematic Editor",L"CompressedTSCFormat",
             *PTR_DAT_02002038);
  uVar3 = (**(code **)(**(longlong **)(param_1 + 0x7d8) + 0x260))(*(longlong **)(param_1 + 0x7d8));
  *PTR_DAT_020048d0 = uVar3;
  (**(code **)(**(longlong **)(param_1 + 0x800) + 0x38))
            (*(longlong **)(param_1 + 0x800),L"Schematic Editor",L"SavePictureAsGIF",
             *PTR_DAT_020048d0);
  uVar3 = (**(code **)(**(longlong **)(param_1 + 0x748) + 0x260))(*(longlong **)(param_1 + 0x748));
  *PTR_DAT_020045f0 = uVar3;
  uVar3 = (**(code **)(**(longlong **)(param_1 + 0x750) + 0x260))(*(longlong **)(param_1 + 0x750));
  *PTR_DAT_020050f8 = uVar3;
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x758) + 0x260))(*(longlong **)(param_1 + 0x758));
  *PTR_DAT_02001798 = cVar2 == '\0';
  iVar4 = FUN_00c5a450(*(undefined8 *)(param_1 + 0x7a0));
  *(int *)PTR_DAT_02002718 = iVar4 * 60000;
  uVar5 = FUN_00c5a450(*(undefined8 *)(param_1 + 0x7f0));
  *(undefined4 *)PTR_DAT_02003b90 = uVar5;
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x7e8) + 0x260))(*(longlong **)(param_1 + 0x7e8));
  *PTR_DAT_02003180 = cVar2 == '\0';
  uVar3 = (**(code **)(**(longlong **)(param_1 + 0x788) + 0x260))(*(longlong **)(param_1 + 0x788));
  *PTR_DAT_020041d0 = uVar3;
  uVar3 = (**(code **)(**(longlong **)(param_1 + 0x780) + 0x260))(*(longlong **)(param_1 + 0x780));
  *PTR_DAT_02005c00 = uVar3;
  FUN_00414480(&local_50);
  FUN_00414560(&local_48,5);
  FUN_00414480(local_20);
  return;
}


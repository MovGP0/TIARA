/* Ghidra address: 013c5e90 */
/* Ghidra symbol: FUN_013c5e90 */


void FUN_013c5e90(longlong param_1,longlong *param_2,undefined4 param_3,longlong param_4,
                 byte param_5,char param_6)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  longlong local_res20;
  undefined1 auStack_108 [32];
  wchar_t *local_e8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 *local_a0;
  longlong local_88;
  longlong local_70;
  uint local_68;
  uint local_64;
  int local_5c;
  int local_58;
  int local_54;
  undefined8 local_50;
  longlong local_48;
  undefined8 *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_a0 = auStack_108;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_50 = 0;
  local_res20 = param_4;
  FUN_00414610(param_4);
  local_20 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
  local_28 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
  local_30 = FUN_004b6930(&PTR_FUN_00478280,1);
  local_38 = FUN_004b6930(&PTR_FUN_00478280,1);
  local_68 = (uint)param_5;
  if ((param_1 == 0) || (*(int *)(param_1 + 0x10) == 0)) {
    uVar1 = FUN_0044d490(&PTR_FUN_004334c0,1,L"SaveCurves: WritersList is empty");
    FUN_004134c0(uVar1);
  }
  local_e8 = L"flags";
  FUN_013c5da0(auStack_108,2,param_3,4);
  local_64 = *(undefined4 *)(param_1 + 0x10);
  local_e8 = L"WritersList.Count";
  FUN_013c5da0(auStack_108,1,local_64,4);
  local_64 = *(uint *)(param_1 + 0x10);
  local_e8 = L"WritersList.Count";
  FUN_013c5da0(auStack_108,2,local_64,4);
  iVar2 = *(int *)(param_1 + 0x10);
  local_58 = 0;
  if (-1 < iVar2 + -1) {
    do {
      local_70 = FUN_004aeac0(param_1,local_58);
      if (param_6 == '\0') {
        if (local_res20 == 0) {
          uVar1 = FUN_0044d490(&PTR_FUN_004334c0,1,L"SaveCurves: path is empty");
          FUN_004134c0(uVar1);
        }
        local_40 = *(undefined8 **)(*(longlong *)(local_70 + 8) + 0x438);
        FUN_004b6dc0(local_40,0);
        local_64 = (**(code **)*local_40)(local_40);
        local_e8 = L"src.Size";
        FUN_013c5da0(auStack_108,1,local_64,4);
        uVar1 = (**(code **)*local_40)(local_40);
        FUN_004b8ba0(local_20,local_40,uVar1);
      }
      local_88 = *(longlong *)(local_70 + 8);
      if ((param_5 != 3) && (param_5 != 4)) {
        uVar1 = FUN_0044d490(&PTR_FUN_004334c0,1,
                             L"SaveCurves: current analysis type is not supported");
        FUN_004134c0(uVar1);
      }
      local_e8 = L"iAnalysisType";
      FUN_013c5da0(auStack_108,2,local_68,4);
      FUN_004b89e0(local_28,local_88 + 0x10,4);
      iVar3 = *(int *)(local_88 + 0x10);
      local_54 = 0;
      if (-1 < iVar3 + -1) {
        do {
          local_48 = FUN_01d347d0(local_88,local_54);
          FUN_01cc0ae0(local_48,&local_a8);
          FUN_00415dd0(&local_50,local_a8,0);
          FUN_00416880(&local_b0,local_50);
          local_5c = FUN_004170c0(&DAT_013c665c,local_b0,1);
          if (0 < local_5c) {
            FUN_00415ad0(&local_50,local_50,1,local_5c + -1);
          }
          local_e8 = L"Curve.PointsCount";
          FUN_013c5da0(auStack_108,2,*(undefined4 *)(local_48 + 0x2c),4);
          local_64 = (uint)*(byte *)(local_48 + 8);
          local_e8 = L"Curve.eCurveType";
          FUN_013c5da0(auStack_108,2,local_64,4);
          FUN_00416880(&local_b8,local_50);
          (**(code **)(*param_2 + 0x78))(param_2,local_b8);
          FUN_01b210c0(local_28,local_50);
          FUN_00416880(&local_c0,local_50);
          FUN_013c5e40(auStack_108,2,local_c0,L"CurveList Item");
          local_54 = local_54 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      local_58 = local_58 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00416ba0(&local_c8,local_res20,L"\\scurves.dat");
  FUN_004b9df0(local_20,local_c8);
  FUN_00416ba0(&local_d0,local_res20,L"\\scurves_util.dat");
  FUN_004b9df0(local_28,local_d0);
  FUN_00410f20(local_20);
  FUN_00410f20(local_28);
  FUN_00410f20(local_30);
  FUN_00410f20(local_38);
  FUN_00414560(&local_d0,6);
  FUN_004144d0(&local_50);
  FUN_00414480(&local_res20);
  return;
}


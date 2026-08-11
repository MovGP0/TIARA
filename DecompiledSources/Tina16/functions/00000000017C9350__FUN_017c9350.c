/* Ghidra address: 017c9350 */
/* Ghidra symbol: FUN_017c9350 */


void FUN_017c9350(longlong param_1,byte param_2,byte param_3,undefined8 param_4,char *param_5)

{
  longlong *plVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  bool bVar10;
  undefined8 local_res20;
  int local_80;
  int local_7c;
  int local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_33;
  undefined1 local_32;
  byte local_31;
  undefined8 local_30;
  
  local_60 = 0;
  local_68 = 0;
  local_40 = 0;
  local_48 = 0;
  local_30 = 0;
  local_res20 = param_4;
  FUN_00414610(param_4);
  plVar1 = *(longlong **)(param_1 + 0x128);
  uVar6 = FUN_01cfd6a0();
  *(undefined8 *)(param_1 + 0x48) = uVar6;
  *(undefined8 *)(param_1 + 0x50) = 0;
  iVar4 = FUN_01cfd2d0(plVar1);
  local_80 = (**(code **)(*plVar1 + 0x1c8))(plVar1);
  local_7c = 0;
  if (-1 < iVar4 + -1) {
    do {
      uVar6 = FUN_01cfd030(plVar1,local_7c);
      local_31 = (byte)uVar6;
      if (local_31 < 8) {
        bVar10 = ((int)CONCAT71((int7)((ulonglong)uVar6 >> 8),1) << (local_31 & 0x1f) & 0x90U) != 0;
      }
      else {
        bVar10 = false;
      }
      if (bVar10) {
        cVar2 = FUN_014b82b0(plVar1,local_7c);
        if ((cVar2 != '\0') && (*param_5 != '\0')) {
          if (param_2 < 8) {
            bVar10 = ((int)CONCAT71((int7)((ulonglong)param_5 >> 8),1) << (param_2 & 0x1f) & 3U) !=
                     0;
          }
          else {
            bVar10 = false;
          }
          if (bVar10) {
            lVar7 = FUN_017ff660(plVar1);
            lVar8 = FUN_019a45d0();
            if (lVar7 == lVar8) {
              uVar6 = FUN_019a45d0();
              FUN_01993f30(uVar6,*(undefined8 *)(param_1 + 0x128),1,0);
            }
            uVar6 = FUN_00b89270();
            FUN_00b8e520(uVar6,&local_68,0x10d);
            local_58 = local_30;
            local_50 = 0x11;
            FUN_00442f70(&local_60,local_68,&local_58);
            plVar9 = (longlong *)FUN_0072d3f0(local_60,0);
            FUN_0064cf60(plVar9,0x1587);
            iVar5 = FUN_00654c00();
            local_6c = 0;
            if (-1 < iVar5 + -1) {
              do {
                uVar6 = FUN_00654bc0(plVar9,local_6c);
                cVar2 = FUN_004113d0(uVar6,&PTR_FUN_00673008);
                if (cVar2 != '\0') {
                  lVar7 = FUN_00654bc0(plVar9,local_6c);
                  if (*(int *)(lVar7 + 0x4f0) == 0xc) {
                    uVar6 = FUN_00654bc0(plVar9,local_6c);
                    FUN_0064de00(uVar6,L"Edit");
                  }
                }
                local_6c = local_6c + 1;
                iVar5 = iVar5 + -1;
              } while (iVar5 != 0);
            }
            sVar3 = (**(code **)(*plVar9 + 0x2d0))(plVar9);
            FUN_00410f20(plVar9);
            if (sVar3 == 0xc) {
              if (local_31 == 4) {
                plVar9 = (longlong *)
                         FUN_013ef440(&PTR_FUN_013ee858,1,*(undefined8 *)PTR_DAT_02004030,plVar1,
                                      local_7c);
              }
              else {
                plVar9 = (longlong *)
                         FUN_013f2070(&PTR_FUN_013f0eb8,1,*(undefined8 *)PTR_DAT_02004030,plVar1,
                                      local_7c);
              }
              iVar5 = (**(code **)(*plVar9 + 0x2d0))(plVar9);
              if (iVar5 == 1) {
                uVar6 = FUN_019a45d0();
                FUN_0199e310(uVar6,0);
              }
              FUN_00410f20(plVar9);
              uVar6 = FUN_019a45d0();
              FUN_01994230(uVar6);
            }
            if (sVar3 == 6) {
              uVar6 = FUN_019a45d0();
              FUN_01994230(uVar6);
            }
            if (sVar3 == 0xe) {
              *param_5 = '\0';
              uVar6 = FUN_019a45d0();
              FUN_01994230(uVar6);
            }
            if (sVar3 == 7) {
              FUN_0044d440();
            }
          }
          else {
            FUN_00de8980(&local_48,0x10d,local_res20);
            local_58 = local_30;
            local_50 = 0x11;
            FUN_00442f70(&local_40,local_48);
            FUN_01b05000(local_40,0);
          }
        }
      }
      else if ((param_3 & local_31 == 9) != 0) {
        local_80 = local_80 + 1;
        lVar7 = FUN_01b05ad0(param_1,CONCAT31((int3)((uint)local_7c >> 8),(char)local_7c + '\x01'),0
                             ,&local_31,&local_32,&local_33);
        *(int *)(*(longlong *)(param_1 + 0x38) + -4 + (longlong)local_80 * 4) =
             (int)*(short *)(lVar7 + 0x1f);
      }
      local_7c = local_7c + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00414560(&local_68,2);
  FUN_00414560(&local_48,2);
  FUN_00414480(&local_30);
  FUN_00414480(&local_res20);
  return;
}


/* Ghidra address: 01c8f600 */
/* Ghidra symbol: FUN_01c8f600 */


void FUN_01c8f600(longlong param_1,byte param_2,byte param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined7 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  longlong *local_560;
  int local_544;
  undefined8 local_538;
  undefined8 local_530;
  undefined8 local_528;
  undefined8 local_520;
  undefined8 local_518;
  undefined8 local_510;
  undefined8 local_508;
  undefined8 local_500;
  undefined8 local_4f8;
  undefined8 local_4f0;
  undefined8 local_4e8;
  undefined8 local_4e0;
  undefined8 local_4d8;
  undefined8 local_4d0;
  undefined8 local_4c8;
  undefined8 local_4c0;
  undefined8 local_4b8;
  undefined8 local_4b0;
  undefined8 local_4a8;
  undefined8 local_4a0 [2];
  undefined8 local_490;
  undefined1 *local_488;
  undefined1 local_479 [1105];
  
  local_528 = 0;
  local_530 = 0;
  local_538 = 0;
  local_518 = 0;
  local_520 = 0;
  local_508 = 0;
  local_510 = 0;
  local_4f8 = 0;
  local_500 = 0;
  local_4f0 = 0;
  local_4e8 = 0;
  local_4e0 = 0;
  local_4d8 = 0;
  local_4d0 = 0;
  local_4c8 = 0;
  local_4c0 = 0;
  local_4b8 = 0;
  local_4b0 = 0;
  local_4a8 = 0;
  local_4a0[0] = 0;
  local_490 = 0;
  local_560 = (longlong *)0x0;
  local_488 = local_479;
  uVar1 = FUN_010dba30(param_2,param_3,&local_488);
  uVar1 = uVar1 & 0xff;
  if (uVar1 != 0) {
    lVar4 = FUN_010e17c0(param_2,0);
    *(undefined4 *)PTR_DAT_02002400 = 0;
    if (1 < uVar1) {
      for (local_544 = 0;
          (*(longlong *)
            (lVar4 + -0x38 + (ulonglong)param_3 * 0x40 + (ulonglong)param_2 * 0x20 +
            (longlong)local_544 * 8) != 0 && (local_544 < (int)(uVar1 - 1)));
          local_544 = local_544 + 1) {
      }
      *(int *)PTR_DAT_02002400 = local_544;
      plVar5 = (longlong *)FUN_007fc180(&PTR_FUN_010c18c0,1,*(undefined8 *)PTR_DAT_02004030);
      if (param_3 < 7) {
        if (param_3 == 6) {
          FUN_010dba60(&local_4c8,*(undefined8 *)(*(longlong *)(param_1 + 0xb38) + 0x78));
          FUN_0064de00(plVar5,local_4c8);
        }
        else if (param_3 < 4) {
          if (param_3 == 3) {
            FUN_010dba60(&local_4b0,*(undefined8 *)(*(longlong *)(param_1 + 0x990) + 0x78));
            FUN_0064de00(plVar5,local_4b0);
          }
          else if (param_3 == 1) {
            FUN_010dba60(local_4a0,*(undefined8 *)(*(longlong *)(param_1 + 0x998) + 0x78));
            FUN_0064de00(plVar5,local_4a0[0]);
          }
          else {
            if (param_3 != 2) goto LAB_01c902f2;
            FUN_010dba60(&local_4a8,*(undefined8 *)(*(longlong *)(param_1 + 0x9a0) + 0x78));
            FUN_0064de00(plVar5,local_4a8);
          }
        }
        else if (param_3 == 4) {
          FUN_010dba60(&local_4b8,*(undefined8 *)(*(longlong *)(param_1 + 0x9a8) + 0x78));
          FUN_0064de00(plVar5,local_4b8);
        }
        else {
          if (param_3 != 5) goto LAB_01c902f2;
          FUN_010dba60(&local_4c0,*(undefined8 *)(*(longlong *)(param_1 + 0xa00) + 0x78));
          FUN_0064de00(plVar5,local_4c0);
        }
      }
      else if (param_3 < 0xf) {
        if (param_3 == 0xe) {
          FUN_010dba60(&local_4e8,*(undefined8 *)(*(longlong *)(param_1 + 0x1300) + 0x78));
          FUN_0064de00(plVar5,local_4e8);
        }
        else if (param_3 == 7) {
          FUN_010dba60(&local_4d0,*(undefined8 *)(*(longlong *)(param_1 + 0xd00) + 0x78));
          FUN_0064de00(plVar5,local_4d0);
        }
        else {
          if (param_3 != 8) goto LAB_01c902f2;
          FUN_010dba60(&local_4d8,*(undefined8 *)(*(longlong *)(param_1 + 0xf90) + 0x78));
          FUN_0064de00(plVar5,local_4d8);
        }
      }
      else if (param_3 == 0xf) {
        FUN_010dba60(&local_4e0,*(undefined8 *)(*(longlong *)(param_1 + 0x1188) + 0x78));
        FUN_0064de00(plVar5,local_4e0);
      }
      else {
        if (param_3 != 0x10) goto LAB_01c902f2;
        FUN_010dba60(&local_4f0,*(undefined8 *)(*(longlong *)(param_1 + 0x1680) + 0x78));
        FUN_0064de00(plVar5,local_4f0);
      }
      local_560 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
      (**(code **)(*local_560 + 0x90))(local_560);
      local_544 = 1;
      for (uVar11 = uVar1; uVar11 != 0; uVar11 = uVar11 - 1) {
        FUN_0043f750(&local_4f8,local_544);
        FUN_00416ad0(&local_4f8,&DAT_01c903bc);
        FUN_004167a0(&local_500,local_488);
        iVar2 = FUN_004170c0(local_4f8,local_500,1);
        FUN_0043f750(&local_508,local_544 + 1);
        FUN_00416ad0(&local_508,&DAT_01c903bc);
        FUN_004167a0(&local_510,local_488);
        iVar3 = FUN_004170c0(local_508,local_510,1);
        if (iVar3 == 0) {
          iVar3 = FUN_00414ce0(local_488);
        }
        else {
          iVar3 = iVar3 - (iVar2 + 2);
        }
        FUN_00415430(&local_520,local_488,0);
        FUN_00415ad0(&local_518,local_520,iVar2 + 2,iVar3);
        FUN_00416880(&local_490,local_518);
        (**(code **)(*local_560 + 0x78))(local_560,local_490);
        local_544 = local_544 + 1;
      }
      FUN_0074b530(plVar5[0xd8],local_560);
      FUN_0074b490(plVar5[0xd8],*(undefined4 *)PTR_DAT_02002400);
      (**(code **)(*plVar5 + 0x2d0))(plVar5);
      FUN_00410f20(plVar5);
    }
    if ((-1 < *(int *)PTR_DAT_02002400) && (*(int *)PTR_DAT_02002400 < (int)uVar1)) {
      iVar2 = *(int *)PTR_DAT_02002400;
      uVar8 = (ulonglong)param_3;
      uVar9 = (ulonglong)param_2;
      lVar10 = (longlong)iVar2;
      if (*(longlong *)(lVar4 + -0x38 + uVar8 * 0x40 + uVar9 * 0x20 + lVar10 * 8) == 0) {
        uVar7 = (undefined7)(uVar9 * 4 >> 8);
        if (param_3 < 7) {
          if (param_3 == 6) {
            uVar6 = FUN_010e1810(&PTR_FUN_0150a9d8,CONCAT71(uVar7,1),*(undefined8 *)PTR_DAT_02004030
                                 ,iVar2,param_2,6,0,0,0);
            *(undefined8 *)(lVar4 + 0x148 + uVar9 * 0x20 + lVar10 * 8) = uVar6;
          }
          else if (param_3 < 4) {
            if (param_3 == 3) {
              uVar6 = FUN_010e1810(&PTR_FUN_01133e90,CONCAT71(uVar7,1),
                                   *(undefined8 *)PTR_DAT_02004030,iVar2,param_2,3,0,0,0);
              *(undefined8 *)(lVar4 + 0x88 + uVar9 * 0x20 + lVar10 * 8) = uVar6;
            }
            else if (param_3 == 1) {
              uVar6 = FUN_010e1810(&PTR_FUN_01b69c08,CONCAT71(uVar7,1),
                                   *(undefined8 *)PTR_DAT_02004030,iVar2,param_2,1,0,0,0);
              *(undefined8 *)(lVar4 + 8 + uVar9 * 0x20 + lVar10 * 8) = uVar6;
            }
            else {
              if (param_3 != 2) goto LAB_01c902f2;
              uVar6 = FUN_010e1810(&PTR_FUN_012a7128,CONCAT71(uVar7,1),
                                   *(undefined8 *)PTR_DAT_02004030,iVar2,param_2,2,0,0,0);
              *(undefined8 *)(lVar4 + 0x48 + uVar9 * 0x20 + lVar10 * 8) = uVar6;
            }
          }
          else if (param_3 == 4) {
            uVar6 = FUN_010e1810(&PTR_FUN_0137f9e0,CONCAT71(uVar7,1),*(undefined8 *)PTR_DAT_02004030
                                 ,iVar2,param_2,4,0,0,0);
            *(undefined8 *)(lVar4 + 200 + uVar9 * 0x20 + lVar10 * 8) = uVar6;
          }
          else {
            if (param_3 != 5) goto LAB_01c902f2;
            uVar6 = FUN_010e1810(&PTR_FUN_01519768,CONCAT71(uVar7,1),*(undefined8 *)PTR_DAT_02004030
                                 ,iVar2,param_2,5,0,0,0);
            *(undefined8 *)(lVar4 + 0x108 + uVar9 * 0x20 + lVar10 * 8) = uVar6;
          }
        }
        else if (param_3 < 0xf) {
          if (param_3 == 0xe) {
            uVar6 = FUN_010e1810(&PTR_FUN_010d79c8,CONCAT71(uVar7,1),*(undefined8 *)PTR_DAT_02004030
                                 ,iVar2,param_2,0xe,0,0,0);
            *(undefined8 *)(lVar4 + 0x348 + uVar9 * 0x20 + lVar10 * 8) = uVar6;
          }
          else if (param_3 == 7) {
            uVar6 = FUN_010e1810(&PTR_FUN_01b54868,CONCAT71(uVar7,1),*(undefined8 *)PTR_DAT_02004030
                                 ,iVar2,param_2,7,0,0,0);
            *(undefined8 *)(lVar4 + 0x188 + uVar9 * 0x20 + lVar10 * 8) = uVar6;
          }
          else {
            if (param_3 != 8) goto LAB_01c902f2;
            uVar6 = FUN_010e1810(&PTR_FUN_0137f9e0,CONCAT71(uVar7,1),*(undefined8 *)PTR_DAT_02004030
                                 ,iVar2,param_2,8,0,0,0);
            *(undefined8 *)(lVar4 + 0x1c8 + uVar9 * 0x20 + lVar10 * 8) = uVar6;
          }
        }
        else if (param_3 == 0xf) {
          uVar6 = FUN_010e1810(&PTR_FUN_0137f9e0,CONCAT71(uVar7,1),*(undefined8 *)PTR_DAT_02004030,
                               iVar2,param_2,0xf,0,0,0);
          *(undefined8 *)(lVar4 + 0x388 + uVar9 * 0x20 + lVar10 * 8) = uVar6;
        }
        else {
          if (param_3 != 0x10) goto LAB_01c902f2;
          uVar6 = FUN_010e1810(&PTR_FUN_01b5ecd8,CONCAT71(uVar7,1),*(undefined8 *)PTR_DAT_02004030,
                               iVar2,param_2,0x10,0,0,0);
          *(undefined8 *)(lVar4 + 0x3c8 + uVar9 * 0x20 + lVar10 * 8) = uVar6;
        }
        if (1 < uVar1) {
          uVar6 = *(undefined8 *)(lVar4 + -0x38 + uVar8 * 0x40 + uVar9 * 0x20 + lVar10 * 8);
          FUN_0064dd90(uVar6,&local_530);
          (**(code **)(*local_560 + 0x18))(local_560,&local_538,*(undefined4 *)PTR_DAT_02002400);
          FUN_00416cd0(&local_528,3,local_530,&DAT_01c903cc,local_538);
          FUN_0064de00(uVar6,local_528);
        }
      }
      FUN_008059a0(*(undefined8 *)(lVar4 + -0x38 + uVar8 * 0x40 + uVar9 * 0x20 + lVar10 * 8));
      uVar6 = FUN_0065b870(*(undefined8 *)(lVar4 + -0x38 + uVar8 * 0x40 + uVar9 * 0x20 + lVar10 * 8)
                          );
      thunk_FUN_03ab0e43(uVar6,9);
    }
  }
  if (local_560 != (longlong *)0x0) {
    FUN_00410f20(local_560);
  }
LAB_01c902f2:
  FUN_00414480(&local_538);
  FUN_00414560(&local_530,2);
  FUN_00414590(&local_520,2);
  FUN_00414560(&local_510,0xf);
  FUN_00414480(&local_490);
  return;
}


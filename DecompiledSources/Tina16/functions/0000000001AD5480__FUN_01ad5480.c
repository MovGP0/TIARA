/* Ghidra address: 01ad5480 */
/* Ghidra symbol: FUN_01ad5480 */


void FUN_01ad5480(longlong param_1)

{
  longlong *plVar1;
  undefined1 uVar2;
  char cVar3;
  undefined2 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong *plVar12;
  int iVar13;
  bool bVar14;
  double dVar15;
  int local_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  longlong local_30;
  
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_40[0] = 0;
  local_48 = 0;
  local_50 = 0;
  plVar8 = (longlong *)FUN_007fc180(&PTR_FUN_00f0d678,1,*(undefined8 *)PTR_DAT_02004030);
  local_30 = 0;
  FUN_01acff30(param_1,&local_30);
  for (local_8c = 1;
      iVar5 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x28))(*(longlong **)(param_1 + 0xd8)),
      local_8c <= iVar5; local_8c = local_8c + 1) {
    lVar9 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x30))
                      (*(longlong **)(param_1 + 0xd8),local_8c + -1);
    uVar10 = FUN_004aeac0(local_30,0);
    iVar5 = (**(code **)(**(longlong **)(lVar9 + 0x80) + 0xc0))(*(longlong **)(lVar9 + 0x80),uVar10)
    ;
    if (iVar5 != -1) break;
  }
  iVar5 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x28))(*(longlong **)(param_1 + 0xd8));
  if (iVar5 < local_8c) {
    FUN_00410f20(local_30);
  }
  else {
    lVar9 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x30))
                      (*(longlong **)(param_1 + 0xd8),local_8c + -1);
    if (*(byte *)(lVar9 + 0x58) < 8) {
      bVar14 = ((int)CONCAT71((int7)((ulonglong)lVar9 >> 8),1) << (*(byte *)(lVar9 + 0x58) & 0x1f) &
               0x61U) != 0;
    }
    else {
      bVar14 = false;
    }
    if (bVar14) {
      lVar9 = FUN_004aeac0(local_30,0);
      FUN_01ab2940(lVar9,&local_48);
      FUN_0043f750(&local_50,*(undefined4 *)(lVar9 + 0xe8));
      FUN_00416cd0(local_40,4,local_48,&PTR_DAT_01ad5fcc,local_50,&DAT_01ad5fe0);
      FUN_0064de00(plVar8,local_40[0]);
      uVar6 = FUN_005fd4d0(*(undefined8 *)(lVar9 + 0x60));
      uVar6 = FUN_01a90ee0(uVar6);
      FUN_005fdab0(*(undefined8 *)(plVar8[0xec] + 800),uVar6);
      uVar4 = FUN_01a8dbd0(*(undefined1 *)(lVar9 + 0xa8));
      (**(code **)(*(longlong *)plVar8[0xdf] + 0x268))((longlong *)plVar8[0xdf],uVar4);
      FUN_00c5a4c0(plVar8[0xdb],
                   *(int *)(*(longlong *)(*(longlong *)(lVar9 + 0x60) + 0x18) + 0x2c) + 1);
      if (*(char *)(*(longlong *)(lVar9 + 0xe0) + 0x2b) == '\0') {
        (**(code **)(*(longlong *)plVar8[0xea] + 0x128))((longlong *)plVar8[0xea],1);
        (**(code **)(*(longlong *)plVar8[0xe9] + 0x128))((longlong *)plVar8[0xe9],1);
        FUN_00b90440(plVar8[0xea],*(undefined8 *)(lVar9 + 0xf0));
      }
      else {
        (**(code **)(*(longlong *)plVar8[0xea] + 0x128))((longlong *)plVar8[0xea],0);
        (**(code **)(*(longlong *)plVar8[0xe9] + 0x128))((longlong *)plVar8[0xe9],0);
        FUN_00b90440(plVar8[0xea],0);
      }
      FUN_00c5a4c0(plVar8[0xe1],*(undefined4 *)(lVar9 + 0xb8));
      FUN_00c5a4c0(plVar8[0xe3],*(undefined4 *)(lVar9 + 0xc0));
      FUN_0064dbe0(plVar8[0xdd],1);
      FUN_0064dbe0(plVar8[0xe4],0);
      FUN_007fdf10(plVar8,*(int *)(plVar8[0xdd] + 0x94) + *(int *)(plVar8[0xdd] + 0x9c) + 2);
      iVar5 = (**(code **)(*plVar8 + 0x2d0))(plVar8);
      if (iVar5 == 2) {
        FUN_00410f20(local_30);
        FUN_00410f20(plVar8);
      }
      else {
        iVar5 = *(int *)(local_30 + 0x10);
        iVar13 = 1;
        if (0 < iVar5) {
          do {
            lVar9 = FUN_004aeac0(local_30,iVar13 + -1);
            uVar6 = FUN_005fdaa0(*(undefined8 *)(plVar8[0xec] + 800));
            uVar6 = FUN_01a90ee0(uVar6);
            FUN_005fd4e0(*(undefined8 *)(lVar9 + 0x60),uVar6);
            iVar7 = FUN_005fd4d0(*(undefined8 *)(lVar9 + 0x60));
            if (iVar7 == 0xffffff) {
              *(undefined1 *)(lVar9 + 0x11) = 0;
            }
            uVar6 = (**(code **)(*(longlong *)plVar8[0xdf] + 0x260))((longlong *)plVar8[0xdf]);
            uVar2 = FUN_01a8dc00(uVar6);
            *(undefined1 *)(lVar9 + 0xa8) = uVar2;
            iVar7 = FUN_00c5a450(plVar8[0xdb]);
            FUN_005fd6d0(*(undefined8 *)(lVar9 + 0x60),iVar7 + -1);
            uVar10 = FUN_00b90090(plVar8[0xea]);
            *(undefined8 *)(lVar9 + 0xf0) = uVar10;
            dVar15 = (double)FUN_01ab2a30(lVar9);
            uVar10 = FUN_00b90650(dVar15 + *(double *)(lVar9 + 0xf0),
                                  *(undefined8 *)(*(longlong *)(lVar9 + 0xf8) + 200));
            *(undefined8 *)(*(longlong *)(lVar9 + 0xf8) + 200) = uVar10;
            dVar15 = (double)FUN_01ab2a60(lVar9);
            uVar10 = FUN_00b90620(dVar15 + *(double *)(lVar9 + 0xf0),
                                  *(undefined8 *)(*(longlong *)(lVar9 + 0xf8) + 0xd0));
            *(undefined8 *)(*(longlong *)(lVar9 + 0xf8) + 0xd0) = uVar10;
            uVar10 = *(undefined8 *)(param_1 + 0x78);
            cVar3 = FUN_004113d0(uVar10,&PTR_FUN_010f30d8);
            if (cVar3 == '\0') {
              lVar11 = FUN_004113f0(uVar10,&PTR_FUN_01ae9d80);
              FUN_01ae7ab0(param_1,L"Curve width",
                           *(undefined4 *)(*(longlong *)(lVar11 + 0x7a0) + 0x50));
            }
            else {
              FUN_01ae7ab0(param_1,L"Curve width",
                           *(undefined4 *)(*(longlong *)(*(longlong *)(lVar9 + 0x60) + 0x18) + 0x2c)
                          );
            }
            uVar6 = FUN_00c5a450(plVar8[0xe1]);
            *(undefined4 *)(lVar9 + 0xb8) = uVar6;
            uVar6 = FUN_00c5a450(plVar8[0xe3]);
            *(undefined4 *)(lVar9 + 0xc0) = uVar6;
            FUN_01ab4440(lVar9,0);
            iVar13 = iVar13 + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        FUN_00410f20(plVar8);
        plVar8 = (longlong *)FUN_004aeac0(local_30,0);
        (**(code **)(*plVar8 + 0xc0))
                  (plVar8,*(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x78));
        FUN_01aceb90(param_1,1);
        FUN_01ad0970(param_1);
        FUN_00410f20(local_30);
      }
    }
    else {
      lVar9 = FUN_004aeac0(local_30,0);
      FUN_01ab6de0(lVar9,&local_60);
      FUN_0043f750(&local_68,*(undefined4 *)(lVar9 + 0xa0));
      FUN_00416cd0(&local_58,4,local_60,&PTR_DAT_01ad5fcc,local_68,&DAT_01ad5fe0);
      FUN_0064de00(plVar8,local_58);
      uVar6 = FUN_005fd4d0(*(undefined8 *)(lVar9 + 0x78));
      uVar6 = FUN_01a90ee0(uVar6);
      FUN_005fdab0(*(undefined8 *)(plVar8[0xec] + 800),uVar6);
      FUN_00c5a4c0(plVar8[0xdb],
                   *(int *)(*(longlong *)(*(longlong *)(lVar9 + 0x78) + 0x18) + 0x2c) + 1);
      FUN_0064dbe0(plVar8[0xdd],0);
      FUN_0064dbe0(plVar8[0xe4],1);
      cVar3 = FUN_004113d0(*(undefined8 *)(lVar9 + 0x98),&PTR_FUN_01cb46a8);
      if (cVar3 == '\0') {
        (**(code **)(*(longlong *)plVar8[0xe4] + 0x128))((longlong *)plVar8[0xe4],0);
        (**(code **)(*(longlong *)plVar8[0xe5] + 0x128))((longlong *)plVar8[0xe5],0);
        (**(code **)(*(longlong *)plVar8[0xe8] + 0x128))((longlong *)plVar8[0xe8],0);
      }
      else {
        (**(code **)(*(longlong *)plVar8[0xe4] + 0x128))((longlong *)plVar8[0xe4],1);
        (**(code **)(*(longlong *)plVar8[0xe5] + 0x128))((longlong *)plVar8[0xe5],1);
        (**(code **)(*(longlong *)plVar8[0xe8] + 0x128))((longlong *)plVar8[0xe8],1);
        (**(code **)(*(longlong *)plVar8[0xe5] + 0x268))
                  ((longlong *)plVar8[0xe5],*(undefined1 *)(lVar9 + 0xd8));
        plVar12 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
        FUN_00450070(&local_70,*(undefined8 *)(lVar9 + 0xe0),&DAT_01ad6014,&DAT_01ad6024,1);
        uVar10 = FUN_00416740(local_70);
        (**(code **)(*plVar12 + 0x120))(plVar12,uVar10);
        (**(code **)(**(longlong **)(plVar8[0xe8] + 0x4a0) + 0x90))
                  (*(longlong **)(plVar8[0xe8] + 0x4a0));
        iVar5 = *(int *)(*(longlong *)(*(longlong *)(lVar9 + 0x98) + 0x38) + 0x10);
        local_8c = 0;
        if (-1 < iVar5 + -1) {
          do {
            uVar10 = FUN_004aeac0(*(undefined8 *)(*(longlong *)(lVar9 + 0x98) + 0x38),local_8c);
            FUN_01cc0ae0(uVar10,&local_78);
            (**(code **)(**(longlong **)(plVar8[0xe8] + 0x4a0) + 0x78))
                      (*(longlong **)(plVar8[0xe8] + 0x4a0),local_78);
            uVar10 = FUN_004aeac0(*(undefined8 *)(*(longlong *)(lVar9 + 0x98) + 0x38),local_8c);
            FUN_01cc0ae0(uVar10,&local_80);
            iVar13 = (**(code **)(*plVar12 + 0xb0))(plVar12,local_80);
            if (iVar13 != -1) {
              lVar11 = plVar8[0xe8];
              plVar1 = *(longlong **)(lVar11 + 0x4a0);
              iVar13 = (**(code **)(*plVar1 + 0x28))(plVar1);
              FUN_00821790(lVar11,iVar13 + -1,1);
            }
            local_8c = local_8c + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        FUN_00410f20(plVar12);
      }
      FUN_007fdf10(plVar8,*(int *)(plVar8[0xe4] + 0x94) + *(int *)(plVar8[0xe4] + 0x9c) + 4);
      iVar5 = (**(code **)(*plVar8 + 0x2d0))(plVar8);
      if (iVar5 == 2) {
        FUN_00410f20(local_30);
        FUN_00410f20(plVar8);
      }
      else {
        uVar6 = FUN_005fdaa0(*(undefined8 *)(plVar8[0xec] + 800));
        uVar6 = FUN_01a90ee0(uVar6);
        FUN_005fd4e0(*(undefined8 *)(lVar9 + 0x78),uVar6);
        iVar5 = FUN_00c5a450(plVar8[0xdb]);
        FUN_005fd6d0(*(undefined8 *)(lVar9 + 0x78),iVar5 + -1);
        uVar2 = (**(code **)(*(longlong *)plVar8[0xe5] + 0x260))((longlong *)plVar8[0xe5]);
        *(undefined1 *)(lVar9 + 0xd8) = uVar2;
        FUN_01ab8de0(lVar9,0);
        cVar3 = FUN_004113d0(*(undefined8 *)(lVar9 + 0x98),&PTR_FUN_01cb46a8);
        if (cVar3 != '\0') {
          FUN_00414480(lVar9 + 0xe0);
          iVar5 = (**(code **)(**(longlong **)(plVar8[0xe8] + 0x4a0) + 0x28))();
          local_8c = 0;
          if (-1 < iVar5 + -1) {
            do {
              cVar3 = FUN_00821920(plVar8[0xe8],local_8c);
              if (cVar3 != '\0') {
                (**(code **)(**(longlong **)(plVar8[0xe8] + 0x4a0) + 0x18))
                          (*(longlong **)(plVar8[0xe8] + 0x4a0),&local_88,local_8c);
                FUN_00416cd0(lVar9 + 0xe0,3,*(undefined8 *)(lVar9 + 0xe0),local_88,&DAT_01ad6014);
              }
              local_8c = local_8c + 1;
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
          }
        }
        FUN_00410f20(plVar8);
        plVar8 = (longlong *)FUN_004aeac0(local_30,0);
        (**(code **)(*plVar8 + 0xc0))
                  (plVar8,*(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x78));
        FUN_01aceb90(param_1,1);
        plVar8 = (longlong *)FUN_004aeac0(local_30,0);
        (**(code **)(*plVar8 + 0xa0))(plVar8,*(undefined8 *)(param_1 + 0x80));
        FUN_00410f20(local_30);
      }
    }
  }
  FUN_00414560(&local_88,10);
  return;
}


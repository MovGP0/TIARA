/* Ghidra address: 01ce6ab0 */
/* Ghidra symbol: FUN_01ce6ab0 */


void FUN_01ce6ab0(longlong *param_1,byte param_2,undefined8 param_3)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  undefined8 uVar14;
  undefined8 local_res18 [2];
  int local_8c;
  int local_88;
  int local_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48 [3];
  
  local_80 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  local_58 = 0;
  local_60 = 0;
  local_50 = 0;
  local_48[0] = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  cVar1 = FUN_01ce33d0(param_1);
  if (cVar1 != '\x01') {
    if (*(byte *)(param_1 + 0xb) < 8) {
      bVar13 = ((int)CONCAT71((int7)((ulonglong)param_1 >> 8),1) <<
                (*(byte *)(param_1 + 0xb) & 0x1f) & 1U) != 0;
    }
    else {
      bVar13 = false;
    }
    if (bVar13) {
      *(undefined4 *)((longlong)param_1 + 0x94) = 0;
      *(undefined1 *)((longlong)param_1 + 0x59) = 1;
      iVar3 = (**(code **)(*(longlong *)param_1[0xf] + 0x28))((longlong *)param_1[0xf]);
      local_8c = 1;
      if (0 < iVar3) {
        do {
          iVar11 = local_8c + -1;
          lVar5 = (**(code **)(*(longlong *)param_1[0xf] + 0x30))((longlong *)param_1[0xf],iVar11);
          if (0 < *(int *)(*(longlong *)(lVar5 + 0xf8) + 0x10)) {
            lVar5 = (**(code **)(*(longlong *)param_1[0xf] + 0x30))((longlong *)param_1[0xf],iVar11)
            ;
            uVar14 = *(undefined8 *)(lVar5 + 0xf8);
            uVar6 = FUN_004aeac0(uVar14,0);
            FUN_01ab2940(uVar6,&local_50);
            if (local_50 == 0) {
              uVar6 = (**(code **)(*(longlong *)param_1[0xf] + 0x30))
                                ((longlong *)param_1[0xf],iVar11);
              uVar7 = FUN_00b89270();
              FUN_00b8e520(uVar7,&local_80,0x820);
              FUN_01cd64a0(uVar6,local_80);
            }
            else {
              uVar6 = (**(code **)(*(longlong *)param_1[0xf] + 0x30))
                                ((longlong *)param_1[0xf],iVar11);
              uVar7 = FUN_004aeac0(uVar14,0);
              FUN_01ab2940(uVar7,&local_60);
              FUN_01ce7cd0(&local_58,local_60);
              FUN_01cd64a0(uVar6,local_58);
              lVar5 = (**(code **)(*(longlong *)param_1[0x10] + 0x30))((longlong *)param_1[0x10],0);
              lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0xd0) + 8);
              bVar2 = *(byte *)(lVar5 + 0x434);
              if (bVar2 < 8) {
                bVar13 = ((int)CONCAT71((int7)((ulonglong)lVar5 >> 8),1) << (bVar2 & 0x1f) & 9U) !=
                         0;
              }
              else {
                bVar13 = false;
              }
              if (!bVar13) {
                uVar6 = (**(code **)(*(longlong *)param_1[0xf] + 0x30))
                                  ((longlong *)param_1[0xf],iVar11);
                uVar7 = (**(code **)(*(longlong *)param_1[0xf] + 0x30))
                                  ((longlong *)param_1[0xf],iVar11);
                FUN_01cd6430(uVar7,&local_70);
                FUN_01ce7d90(&local_78,param_1[0xc]);
                FUN_01ce7f10(&local_68,local_70,local_78);
                FUN_01cd64a0(uVar6,local_68);
              }
              lVar5 = (**(code **)(*(longlong *)param_1[0xf] + 0x30))
                                ((longlong *)param_1[0xf],iVar11);
              lVar8 = FUN_004aeac0(uVar14,0);
              uVar4 = FUN_005fd4d0(*(undefined8 *)(lVar8 + 0x60));
              FUN_005fc860(*(undefined8 *)(lVar5 + 0x98),uVar4);
            }
            local_88 = 0;
            while( true ) {
              lVar5 = (**(code **)(*(longlong *)param_1[0xf] + 0x30))
                                ((longlong *)param_1[0xf],local_8c + -1);
              if (*(int *)(*(longlong *)(lVar5 + 0xf8) + 0x10) < 2) break;
              plVar9 = (longlong *)FUN_004aeac0(uVar14,local_88);
              (**(code **)(*plVar9 + 0x50))(plVar9,1);
              iVar11 = 1;
              lVar5 = FUN_004aeac0(uVar14,local_88);
              bVar2 = FUN_004113d0(*(undefined8 *)(lVar5 + 0xe0),&PTR_FUN_01cb38a0);
              if ((param_2 & bVar2) != 0) {
                lVar5 = (**(code **)(*(longlong *)param_1[0xf] + 0x30))
                                  ((longlong *)param_1[0xf],local_8c + -1);
                local_84 = local_88 + 1;
                iVar12 = *(int *)(*(longlong *)(lVar5 + 0xf8) + 0x10) + -1;
                if (local_84 <= iVar12) {
                  iVar12 = (iVar12 - local_84) + 1;
                  do {
                    lVar5 = FUN_004aeac0(uVar14,local_88);
                    lVar8 = FUN_004aeac0(uVar14,local_84);
                    if ((*(int *)(*(longlong *)(lVar5 + 0xe0) + 0x15c) ==
                         *(int *)(*(longlong *)(lVar8 + 0xe0) + 0x15c)) &&
                       (lVar5 = FUN_004aeac0(uVar14,local_84),
                       *(int *)(*(longlong *)(lVar5 + 0xe0) + 0x15c) != -1)) {
                      plVar9 = (longlong *)FUN_004aeac0(uVar14,local_84);
                      (**(code **)(*plVar9 + 0x50))(plVar9,1);
                      iVar11 = iVar11 + 1;
                    }
                    local_84 = local_84 + 1;
                    iVar12 = iVar12 + -1;
                  } while (iVar12 != 0);
                }
              }
              lVar5 = (**(code **)(*(longlong *)param_1[0xf] + 0x30))
                                ((longlong *)param_1[0xf],local_8c + -1);
              if (iVar11 == *(int *)(*(longlong *)(lVar5 + 0xf8) + 0x10)) break;
              if (iVar11 < 1) {
                local_88 = local_88 + 1;
              }
              else {
                cVar1 = FUN_01ad72b0(param_1[10],0,0);
                if (cVar1 == '\0') {
                  local_88 = local_88 + 1;
                }
              }
              (**(code **)(*param_1 + 0x158))(param_1,*(undefined8 *)(param_1[10] + 0x80));
            }
            uVar6 = FUN_004aeac0(uVar14,local_88);
            FUN_01ab2940(uVar6,local_48);
            iVar11 = FUN_004170c0(&DAT_01ce74b0,local_48[0],1);
            if ((-1 < iVar11) &&
               (lVar5 = (**(code **)(*(longlong *)param_1[0xf] + 0x30))
                                  ((longlong *)param_1[0xf],local_8c + -1),
               1 < *(int *)(*(longlong *)(lVar5 + 0xf8) + 0x10))) {
              iVar11 = FUN_004170c0(&DAT_01ce74b0,local_48[0],1);
              FUN_00416dc0(local_48,local_48[0],1,iVar11 + -1);
            }
            FUN_01ce7b20(local_48);
            uVar6 = (**(code **)(*(longlong *)param_1[0xf] + 0x30))
                              ((longlong *)param_1[0xf],local_8c + -1);
            FUN_01cd64a0(uVar6,local_48[0]);
            lVar5 = (**(code **)(*(longlong *)param_1[0xf] + 0x30))
                              ((longlong *)param_1[0xf],local_8c + -1);
            lVar8 = FUN_004aeac0(uVar14,local_88);
            uVar4 = FUN_005fd4d0(*(undefined8 *)(lVar8 + 0x60));
            FUN_005fc860(*(undefined8 *)(lVar5 + 0x98),uVar4);
            (**(code **)(*param_1 + 0x158))(param_1,*(undefined8 *)(param_1[10] + 0x80));
          }
          lVar5 = (**(code **)(*(longlong *)param_1[0xf] + 0x30))
                            ((longlong *)param_1[0xf],local_8c + -1);
          if (0 < *(int *)(*(longlong *)(lVar5 + 0xf8) + 0x10)) {
            lVar5 = (**(code **)(*(longlong *)param_1[0xf] + 0x30))
                              ((longlong *)param_1[0xf],local_8c + -1);
            lVar8 = FUN_004aeac0(*(undefined8 *)(lVar5 + 0xf8),0);
            lVar10 = FUN_004aeac0(*(undefined8 *)(lVar5 + 0xf8),0);
            uVar14 = (**(code **)(**(longlong **)(lVar8 + 200) + 0x68))
                               (*(longlong **)(lVar8 + 200),*(undefined8 *)(lVar10 + 0xe0));
            *(undefined8 *)(lVar5 + 0xb8) = uVar14;
            lVar8 = FUN_004aeac0(*(undefined8 *)(lVar5 + 0xf8),0);
            lVar10 = FUN_004aeac0(*(undefined8 *)(lVar5 + 0xf8),0);
            uVar14 = (**(code **)(**(longlong **)(lVar8 + 200) + 0x70))
                               (*(longlong **)(lVar8 + 200),*(undefined8 *)(lVar10 + 0xe0));
            *(undefined8 *)(lVar5 + 0xc0) = uVar14;
            iVar11 = *(int *)(*(longlong *)(lVar5 + 0xf8) + 0x10) + -1;
            local_88 = 1;
            if (0 < iVar11) {
              do {
                lVar8 = FUN_004aeac0(*(undefined8 *)(lVar5 + 0xf8),local_88);
                lVar10 = FUN_004aeac0(*(undefined8 *)(lVar5 + 0xf8),local_88);
                uVar14 = (**(code **)(**(longlong **)(lVar8 + 200) + 0x68))
                                   (*(longlong **)(lVar8 + 200),*(undefined8 *)(lVar10 + 0xe0));
                uVar14 = FUN_00b90650(*(undefined8 *)(lVar5 + 0xb8),uVar14);
                *(undefined8 *)(lVar5 + 0xb8) = uVar14;
                lVar8 = FUN_004aeac0(*(undefined8 *)(lVar5 + 0xf8),local_88);
                lVar10 = FUN_004aeac0(*(undefined8 *)(lVar5 + 0xf8),local_88);
                uVar14 = (**(code **)(**(longlong **)(lVar8 + 200) + 0x70))
                                   (*(longlong **)(lVar8 + 200),*(undefined8 *)(lVar10 + 0xe0));
                uVar14 = FUN_00b90620(*(undefined8 *)(lVar5 + 0xc0),uVar14);
                *(undefined8 *)(lVar5 + 0xc0) = uVar14;
                local_88 = local_88 + 1;
                iVar11 = iVar11 + -1;
              } while (iVar11 != 0);
            }
            *(undefined8 *)(lVar5 + 200) = *(undefined8 *)(lVar5 + 0xb8);
            *(undefined8 *)(lVar5 + 0xd0) = *(undefined8 *)(lVar5 + 0xc0);
            uVar4 = FUN_01ccddc0(lVar5);
            FUN_01ccddd0(lVar5);
            FUN_01cd43b0(lVar5,uVar4);
            *(undefined8 *)(lVar5 + 200) = *(undefined8 *)(lVar5 + 0xb8);
            *(undefined8 *)(lVar5 + 0xd0) = *(undefined8 *)(lVar5 + 0xc0);
          }
          local_8c = local_8c + 1;
        } while (local_8c <= iVar3);
      }
      iVar3 = (**(code **)(*(longlong *)param_1[0xf] + 0x28))((longlong *)param_1[0xf]);
      local_8c = 1;
      if (0 < iVar3) {
        do {
          uVar14 = (**(code **)(*(longlong *)param_1[0xf] + 0x30))
                             ((longlong *)param_1[0xf],local_8c + -1);
          FUN_01cd6740(uVar14,1);
          local_8c = local_8c + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      iVar3 = (**(code **)(*(longlong *)param_1[0x11] + 0x28))((longlong *)param_1[0x11]);
      local_8c = 1;
      if (0 < iVar3) {
        do {
          uVar14 = (**(code **)(*(longlong *)param_1[0x11] + 0x30))
                             ((longlong *)param_1[0x11],local_8c + -1);
          FUN_00410f20(uVar14);
          local_8c = local_8c + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      iVar3 = (**(code **)(*(longlong *)param_1[0x11] + 0x28))((longlong *)param_1[0x11]);
      if (0 < iVar3) {
        (**(code **)(*(longlong *)param_1[0x11] + 0x90))((longlong *)param_1[0x11]);
      }
      iVar3 = (**(code **)(*(longlong *)param_1[0xf] + 0x28))((longlong *)param_1[0xf]);
      local_8c = 1;
      if (0 < iVar3) {
        do {
          uVar14 = FUN_01cd9760(&PTR_FUN_01cd9128,1);
          (**(code **)(*(longlong *)param_1[0x11] + 0x80))((longlong *)param_1[0x11],L"Grid",uVar14)
          ;
          iVar11 = local_8c + -1;
          lVar5 = (**(code **)(*(longlong *)param_1[0x11] + 0x30))((longlong *)param_1[0x11],iVar11)
          ;
          *(longlong **)(lVar5 + 0x78) = param_1;
          uVar14 = (**(code **)(*(longlong *)param_1[0x11] + 0x30))
                             ((longlong *)param_1[0x11],iVar11);
          uVar6 = (**(code **)(*(longlong *)param_1[0xe] + 0x30))((longlong *)param_1[0xe],0);
          FUN_01cd9880(uVar14,uVar6);
          uVar14 = (**(code **)(*(longlong *)param_1[0x11] + 0x30))
                             ((longlong *)param_1[0x11],iVar11);
          uVar6 = (**(code **)(*(longlong *)param_1[0xf] + 0x30))((longlong *)param_1[0xf],iVar11);
          FUN_01cd98a0(uVar14,uVar6);
          local_8c = local_8c + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      FUN_01ce8740(param_1);
    }
  }
  FUN_00414560(&local_80,8);
  FUN_00414480(local_res18);
  return;
}


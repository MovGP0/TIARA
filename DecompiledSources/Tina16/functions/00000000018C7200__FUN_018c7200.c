/* Ghidra address: 018c7200 */
/* Ghidra symbol: FUN_018c7200 */


void FUN_018c7200(longlong *param_1,longlong *param_2,char param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  bool bVar9;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  longlong *local_a0;
  int local_94;
  longlong local_90;
  int local_88;
  int local_84;
  longlong local_80;
  longlong *local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined *local_50;
  undefined1 local_48;
  undefined *local_40 [2];
  longlong local_30;
  
  local_60 = 0;
  local_68 = 0;
  local_58 = (undefined *)0x0;
  local_40[0] = (undefined *)0x0;
  local_a0 = param_1;
  local_78 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_004b67b0(local_78,1);
  (**(code **)(*(longlong *)local_a0[0x25] + 0x198))((longlong *)local_a0[0x25],0,0);
  if (param_3 == '\0') {
    (**(code **)(**(longlong **)(local_a0[0x25] + 0x240) + 0x10))
              (*(longlong **)(local_a0[0x25] + 0x240));
  }
  else {
    (**(code **)(**(longlong **)(local_a0[0x25] + 0x248) + 0x10))
              (*(longlong **)(local_a0[0x25] + 0x248));
  }
  iVar3 = (**(code **)(**(longlong **)(local_a0[0x25] + 0x80) + 0x30))();
  local_94 = 0;
  if (-1 < iVar3 + -1) {
    do {
      local_80 = (**(code **)(**(longlong **)(local_a0[0x25] + 0x80) + 0x20))
                           (*(longlong **)(local_a0[0x25] + 0x80),local_94);
      cVar2 = FUN_004113d0(local_80,&PTR_FUN_0192c3a0);
      if (cVar2 != '\0') {
        local_90 = local_80;
        if (*(char *)(local_80 + 0x1cc) == param_3) {
          if (*(char *)(local_80 + 0x1cc) == '\0') {
            (**(code **)(*local_a0 + 0x50))(local_a0,local_80);
          }
          (**(code **)(**(longlong **)(local_90 + 0x208) + 0x10))(*(longlong **)(local_90 + 0x208));
          *(undefined8 *)(local_90 + 0x210) = 0;
          *(undefined8 *)(local_90 + 0x218) = 0;
          *(undefined8 *)(local_90 + 0x220) = 0;
          *(undefined1 *)(local_90 + 0x230) = 0;
          cVar2 = FUN_004113d0(local_90,&PTR_FUN_0192d4e8);
          lVar1 = local_90;
          if (((cVar2 != '\0') && (*(longlong *)(local_90 + 600) == 0)) &&
             (0 < *(int *)(local_90 + 0x278))) {
            FUN_01969530(local_90,*(undefined8 *)(local_90 + 0x288));
            (**(code **)(**(longlong **)(lVar1 + 600) + 0x2d8))(*(longlong **)(lVar1 + 600));
          }
          if (param_3 == '\0') {
            cVar2 = FUN_004113d0(local_90,&PTR_FUN_01933a98);
            if (cVar2 == '\0') {
              iVar4 = (**(code **)(**(longlong **)(local_a0[0x25] + 0x80) + 0x30))();
              local_88 = 0;
              if (-1 < iVar4 + -1) {
                do {
                  local_80 = (**(code **)(**(longlong **)(local_a0[0x25] + 0x80) + 0x20))
                                       (*(longlong **)(local_a0[0x25] + 0x80),local_88);
                  cVar2 = FUN_004113d0(local_80,&PTR_FUN_0192c3a0);
                  if ((cVar2 != '\0') && (*(char *)(local_80 + 0x1cc) != '\0')) {
                    local_84 = 0;
                    while (iVar5 = (**(code **)(**(longlong **)(local_90 + 0x80) + 0x30))
                                             (*(longlong **)(local_90 + 0x80)), local_84 < iVar5) {
                      local_70 = (longlong *)
                                 (**(code **)(**(longlong **)(local_90 + 0x80) + 0x20))
                                           (*(longlong **)(local_90 + 0x80),local_84);
                      if (((double)local_70[0x13] < *(double *)(local_80 + 0x98) - 0.0001) ||
                         (*(double *)(local_80 + 0x98) + *(double *)(local_80 + 0xa8) + 0.0001 <
                          (double)local_70[0x13] + (double)local_70[0x15])) {
                        local_84 = local_84 + 1;
                      }
                      else {
                        *(undefined1 *)(local_90 + 0x230) = 1;
                        (**(code **)(*local_70 + 0xc0))(local_70,local_80);
                        local_70[0x27] = local_90;
                        (**(code **)(*local_70 + 200))
                                  (local_70,(double)local_70[0x13] - *(double *)(local_80 + 0x98));
                      }
                    }
                  }
                  local_88 = local_88 + 1;
                  iVar4 = iVar4 + -1;
                } while (iVar4 != 0);
              }
            }
          }
        }
      }
      local_94 = local_94 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iVar3 = (**(code **)(**(longlong **)(local_a0[0x25] + 0x80) + 0x30))();
  local_94 = 0;
  if (-1 < iVar3 + -1) {
    do {
      local_80 = (**(code **)(**(longlong **)(local_a0[0x25] + 0x80) + 0x20))
                           (*(longlong **)(local_a0[0x25] + 0x80),local_94);
      ppuVar8 = &PTR_FUN_0192c3a0;
      cVar2 = FUN_004113d0(local_80,&PTR_FUN_0192c3a0);
      if ((cVar2 != '\0') && (local_90 = local_80, *(char *)(local_80 + 0x1cc) == param_3)) {
        uVar6 = FUN_01968a80(local_80);
        if (uVar6 < 0x10) {
          bVar9 = ((int)CONCAT62((int6)((ulonglong)ppuVar8 >> 0x10),1) << ((byte)uVar6 & 0x1f) &
                  0x3ff0U) != 0;
        }
        else {
          bVar9 = false;
        }
        if (bVar9) {
          if (*(char *)(local_90 + 0x1cc) == '\0') {
            local_50 = (undefined *)(local_90 + 0xa0);
            local_48 = 3;
            FUN_00442f70(&local_58,L"%9.2f",&local_50,0);
            (**(code **)(*local_78 + 0x80))(local_78,local_58,local_90);
          }
          else {
            local_50 = (undefined *)(local_90 + 0x98);
            local_48 = 3;
            FUN_00442f70(local_40,L"%9.2f",&local_50,0);
            (**(code **)(*local_78 + 0x80))(local_78,local_40[0],local_90);
          }
        }
      }
      local_94 = local_94 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  local_30 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  iVar3 = (**(code **)(*local_78 + 0x28))();
  local_94 = 0;
  if (-1 < iVar3 + -1) {
    do {
      local_80 = (**(code **)(*local_78 + 0x30))(local_78,local_94);
      FUN_004ae7e0(local_30,local_80);
      local_94 = local_94 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00410f20(local_78);
  FUN_018c6d40(auStack_d8);
  FUN_018c6a90(auStack_d8);
  FUN_018c68a0(auStack_d8,local_a0[0x25],0);
  FUN_018c6850(auStack_d8);
  iVar3 = *(int *)(local_30 + 0x10);
  local_94 = 0;
  if (-1 < iVar3 + -1) {
    do {
      local_80 = FUN_004aeac0(local_30,local_94);
      uVar7 = FUN_0180bfb0();
      FUN_01809b60(uVar7,&local_68,L"enBandPos");
      local_b8 = *(undefined8 *)(local_80 + 0x10);
      FUN_00416cd0(&local_60,3,local_68,&LAB_018c7948);
      (**(code **)(*param_2 + 0x78))(param_2,local_60);
      local_94 = local_94 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00410f20(local_30);
  FUN_00414560(&local_68,3);
  FUN_00414480(local_40);
  return;
}


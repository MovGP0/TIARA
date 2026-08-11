/* Ghidra address: 016f75f0 */
/* Ghidra symbol: FUN_016f75f0 */


void FUN_016f75f0(longlong param_1,char param_2,undefined8 param_3)

{
  int *piVar1;
  double dVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  short sVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  undefined1 auStack_138 [40];
  undefined8 local_110;
  char local_105;
  int local_104;
  int local_100;
  int local_fc;
  char local_f5;
  int local_f4;
  undefined8 local_f0;
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  double local_c8;
  double dStack_c0;
  short *local_b0;
  double local_a8;
  int local_9c;
  double local_88;
  double local_80;
  int local_78;
  int local_74;
  int local_54;
  undefined1 local_50 [40];
  
  local_d8 = 0;
  local_d0 = 0;
  local_b0 = (short *)0x0;
  local_f0 = param_3;
  if (((*(char *)(param_1 + 0x33b) != '\0') && (*PTR_DAT_02002b78 == '\0')) &&
     (*(longlong *)(param_1 + 0xb8) != 0)) {
    local_110 = *(undefined8 *)(param_1 + 0xb8);
    if (DAT_0210fef5 != '\0') {
      if (*PTR_DAT_02003ed0 == '\0') {
        local_104 = 0;
        iVar10 = DAT_0210ff10;
        if (-1 < DAT_0210ff10 + -1) {
          do {
            piVar1 = (int *)(DAT_0210ff00 + (longlong)local_104 * 0x10);
            local_a8 = *(double *)(*(longlong *)(param_1 + 0x118) + (longlong)*piVar1 * 8);
            if (piVar1[1] != -1) {
              local_a8 = local_a8 -
                         *(double *)(*(longlong *)(param_1 + 0x118) + (longlong)piVar1[1] * 8);
            }
            *(double *)(*(longlong *)(param_1 + 0x1a8) + (longlong)local_104 * 8) =
                 local_a8 * *(double *)(piVar1 + 2);
            local_104 = local_104 + 1;
            iVar10 = iVar10 + -1;
          } while (iVar10 != 0);
        }
        if (0 < DAT_0210ff10) {
          FUN_01cc4620(local_110,param_3);
          FUN_01cc4700(local_110,*(undefined8 *)(param_1 + 0x1a8),DAT_0210ff10);
        }
      }
      else {
        **(undefined8 **)(DAT_0210ff08 + 0x30) = param_3;
        local_104 = 0;
        iVar10 = DAT_0210ff10;
        if (-1 < DAT_0210ff10 + -1) {
          do {
            piVar1 = (int *)(DAT_0210ff00 + (longlong)local_104 * 0x10);
            local_a8 = *(double *)(*(longlong *)(param_1 + 0x118) + (longlong)*piVar1 * 8);
            if (piVar1[1] != -1) {
              local_a8 = local_a8 -
                         *(double *)(*(longlong *)(param_1 + 0x118) + (longlong)piVar1[1] * 8);
            }
            *(double *)(*(longlong *)(DAT_0210ff08 + 0x30) + (longlong)(local_104 + 1) * 8) =
                 local_a8 * *(double *)(piVar1 + 2);
            local_104 = local_104 + 1;
            iVar10 = iVar10 + -1;
          } while (iVar10 != 0);
        }
        puVar8 = (undefined8 *)FUN_00da9bf0(DAT_0210ff08);
        if (puVar8 != (undefined8 *)0x0) {
          FUN_01cc4620(local_110,*puVar8);
          FUN_01cc4700(local_110,puVar8 + 1,DAT_0210ff10);
        }
      }
      goto LAB_016f83d9;
    }
    plVar3 = *(longlong **)(param_1 + 0xa0);
    if (((undefined **)*plVar3 == &PTR_FUN_014db5f8) || ((undefined1 *)*plVar3 == &LAB_014db6c8)) {
      local_105 = *(char *)(plVar3[0x1ce] + 0x9ac);
      local_f5 = *(char *)(plVar3[0x1ce] + 0x9ad);
    }
    else {
      local_105 = '\x01';
      local_f5 = '\x01';
    }
    if (param_2 == '\b') {
      FUN_016f7170(auStack_138);
    }
    if (*(longlong *)(param_1 + 0x1a8) == 0) {
      local_f4 = FUN_016f6da0(param_1,local_105,local_f5);
    }
    if (param_2 == '\b') {
      FUN_01cc47e0(local_110,local_f0);
      if (*(longlong *)(param_1 + 0x1a8) == 0) {
        uVar9 = FUN_00409570((longlong)(local_f4 << 4));
        *(undefined8 *)(param_1 + 0x1a8) = uVar9;
      }
    }
    else if (*(longlong *)(param_1 + 0x1a8) == 0) {
      uVar9 = FUN_00409570((longlong)(local_f4 * 8));
      *(undefined8 *)(param_1 + 0x1a8) = uVar9;
      FUN_00419260(&DAT_0210ff00,&DAT_016efe88,1,(longlong)local_f4);
    }
    local_9c = 0;
    local_100 = 0;
    if (local_105 != '\0') {
      iVar10 = FUN_019954d0(*(undefined8 *)(param_1 + 0xa0));
      local_104 = 1;
      if (0 < iVar10) {
        do {
          cVar5 = FUN_017cc990(local_104,*(undefined8 *)(param_1 + 0x1368));
          if ((cVar5 == '\0') &&
             ((iVar7 = FUN_019954e0(*(undefined8 *)(param_1 + 0xa0)), iVar11 = local_104,
              local_104 <= iVar7 || (local_105 != '\x02')))) {
            if (param_2 == '\b') {
              FUN_00c44460(&local_88,
                           *(undefined8 *)(*(longlong *)(param_1 + 0x118) + (longlong)local_104 * 8)
                           ,*(undefined8 *)
                             (*(longlong *)(param_1 + 0x120) + (longlong)local_104 * 8));
              FUN_00c44b60(&local_c8,&local_88,local_50);
              local_88 = local_c8;
              local_80 = dStack_c0;
            }
            else {
              local_a8 = *(double *)(*(longlong *)(param_1 + 0x118) + (longlong)local_104 * 8);
            }
            if (DAT_0210fef4 != '\0') {
              FUN_016f7580(auStack_138,iVar11,0xffffffff,0x3ff0000000000000);
            }
            FUN_016f74c0(auStack_138,local_100);
            local_100 = local_100 + 1;
          }
          local_104 = local_104 + 1;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
    }
    local_fc = 0;
    if (local_105 != '\0') {
      iVar10 = *(int *)(param_1 + 0x2d8);
      local_104 = 1;
      if (0 < iVar10) {
        do {
          lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x2b0) + -8 + (longlong)local_104 * 8);
          cVar5 = FUN_0198a580(*(undefined8 *)(lVar4 + 0x128));
          if ((cVar5 == '\x04') && (*(char *)(lVar4 + 5) == '\x02')) {
            uVar9 = *(undefined8 *)(lVar4 + 0x128);
            FUN_01b20020(&local_d0,uVar9,&DAT_016f846c);
            cVar5 = FUN_017cc9f0(uVar9,local_d0,*(undefined8 *)(param_1 + 0x1370));
            if (cVar5 == '\0') {
              local_74 = FUN_01b05600(lVar4,1);
              local_78 = FUN_01b05600(lVar4,2);
              if (param_2 == '\b') {
                local_88 = *(double *)(*(longlong *)(param_1 + 0x118) + (longlong)local_74 * 8) -
                           *(double *)(*(longlong *)(param_1 + 0x118) + (longlong)local_78 * 8);
                local_80 = *(double *)(*(longlong *)(param_1 + 0x120) + (longlong)local_74 * 8) -
                           *(double *)(*(longlong *)(param_1 + 0x120) + (longlong)local_78 * 8);
                FUN_00c44b60(&local_c8,&local_88,local_50);
                local_88 = local_c8;
                local_80 = dStack_c0;
              }
              else {
                local_a8 = *(double *)(*(longlong *)(param_1 + 0x118) + (longlong)local_74 * 8) -
                           *(double *)(*(longlong *)(param_1 + 0x118) + (longlong)local_78 * 8);
              }
              if (DAT_0210fef4 != '\0') {
                FUN_016f7580(auStack_138,local_74,local_78,0x3ff0000000000000);
              }
              FUN_016f74c0(auStack_138,local_100 + local_fc);
              local_fc = local_fc + 1;
            }
          }
          local_104 = local_104 + 1;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
    }
    iVar10 = 0;
    if (local_f5 != '\0') {
      iVar11 = *(int *)(param_1 + 0x2d8);
      local_104 = 1;
      if (0 < iVar11) {
        do {
          lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x2b0) + -8 + (longlong)local_104 * 8);
          cVar5 = FUN_0198a580(*(undefined8 *)(lVar4 + 0x128));
          if (((cVar5 == '\x04') &&
              ((((**(code **)(**(longlong **)(lVar4 + 0x128) + 0x288))
                           (*(longlong **)(lVar4 + 0x128),&local_b0), local_b0 == (short *)0x0 ||
                (*local_b0 != 0x58)) || (local_105 == '\x01')))) &&
             ((((sVar6 = (**(code **)(**(longlong **)(lVar4 + 0x128) + 0xf8))
                                   (*(longlong **)(lVar4 + 0x128)), sVar6 == 0x10 ||
                (sVar6 = (**(code **)(**(longlong **)(lVar4 + 0x128) + 0xf8))
                                   (*(longlong **)(lVar4 + 0x128)), sVar6 == 0xd9)) ||
               (sVar6 = (**(code **)(**(longlong **)(lVar4 + 0x128) + 0xf8))
                                  (*(longlong **)(lVar4 + 0x128)), sVar6 == 0xda)) ||
              (((sVar6 = (**(code **)(**(longlong **)(lVar4 + 0x128) + 0xf8))
                                   (*(longlong **)(lVar4 + 0x128)), sVar6 == 0xe ||
                (sVar6 = (**(code **)(**(longlong **)(lVar4 + 0x128) + 0xf8))
                                   (*(longlong **)(lVar4 + 0x128)), sVar6 == 0xb)) ||
               (((sVar6 = (**(code **)(**(longlong **)(lVar4 + 0x128) + 0xf8))
                                    (*(longlong **)(lVar4 + 0x128)), sVar6 == 0x6e ||
                 ((((sVar6 = (**(code **)(**(longlong **)(lVar4 + 0x128) + 0xf8))
                                       (*(longlong **)(lVar4 + 0x128)), sVar6 == 0x6e ||
                    (sVar6 = (**(code **)(**(longlong **)(lVar4 + 0x128) + 0xf8))
                                       (*(longlong **)(lVar4 + 0x128)), sVar6 == 9)) ||
                   (sVar6 = (**(code **)(**(longlong **)(lVar4 + 0x128) + 0xf8))
                                      (*(longlong **)(lVar4 + 0x128)), sVar6 == 0x6b)) ||
                  ((sVar6 = (**(code **)(**(longlong **)(lVar4 + 0x128) + 0xf8))
                                      (*(longlong **)(lVar4 + 0x128)), sVar6 == 200 ||
                   (sVar6 = (**(code **)(**(longlong **)(lVar4 + 0x128) + 0xf8))
                                      (*(longlong **)(lVar4 + 0x128)), sVar6 == 0xd2)))))) ||
                (sVar6 = (**(code **)(**(longlong **)(lVar4 + 0x128) + 0xf8))
                                   (*(longlong **)(lVar4 + 0x128)), sVar6 == 0xdc)))))))) {
            uVar9 = *(undefined8 *)(lVar4 + 0x128);
            FUN_01b20020(&local_d8,uVar9,&DAT_016f846c);
            cVar5 = FUN_017cc9f0(uVar9,local_d8,*(undefined8 *)(param_1 + 0x1370));
            if (cVar5 == '\0') {
              sVar6 = (**(code **)(**(longlong **)(lVar4 + 0x128) + 0xf8))
                                (*(longlong **)(lVar4 + 0x128));
              if (((sVar6 == 9) ||
                  (sVar6 = (**(code **)(**(longlong **)(lVar4 + 0x128) + 0xf8))
                                     (*(longlong **)(lVar4 + 0x128)), sVar6 == 0x6b)) ||
                 ((sVar6 = (**(code **)(**(longlong **)(lVar4 + 0x128) + 0xf8))
                                     (*(longlong **)(lVar4 + 0x128)), sVar6 == 200 ||
                  ((sVar6 = (**(code **)(**(longlong **)(lVar4 + 0x128) + 0xf8))
                                      (*(longlong **)(lVar4 + 0x128)), sVar6 == 0xd2 ||
                   (sVar6 = (**(code **)(**(longlong **)(lVar4 + 0x128) + 0xf8))
                                      (*(longlong **)(lVar4 + 0x128)), sVar6 == 0xdc)))))) {
                local_74 = FUN_01b05600(lVar4,1);
                local_78 = FUN_01b05600(lVar4,2);
                dVar2 = **(double **)(lVar4 + 0x48);
                if (param_2 == '\b') {
                  local_88 = *(double *)(*(longlong *)(param_1 + 0x118) + (longlong)local_74 * 8) -
                             *(double *)(*(longlong *)(param_1 + 0x118) + (longlong)local_78 * 8);
                  local_80 = *(double *)(*(longlong *)(param_1 + 0x120) + (longlong)local_74 * 8) -
                             *(double *)(*(longlong *)(param_1 + 0x120) + (longlong)local_78 * 8);
                  if (dVar2 == 0.0) {
                    FUN_00c44460(&local_88,0x54b249ad2594c37d,0);
                  }
                  else {
                    FUN_00c44460(local_e8,dVar2,0);
                    FUN_00c44b60(&local_c8,&local_88,local_e8);
                    local_88 = local_c8;
                    local_80 = dStack_c0;
                  }
                  FUN_00c44b60(&local_c8,&local_88,local_50);
                  local_88 = local_c8;
                  local_80 = dStack_c0;
                }
                else if (dVar2 == 0.0) {
                  local_a8 = 1e+100;
                }
                else {
                  local_a8 = (*(double *)(*(longlong *)(param_1 + 0x118) + (longlong)local_74 * 8) -
                             *(double *)(*(longlong *)(param_1 + 0x118) + (longlong)local_78 * 8)) /
                             dVar2;
                }
                if (DAT_0210fef4 != '\0') {
                  FUN_016f7580(auStack_138,local_74,local_78,dVar2);
                }
                FUN_016f74c0(auStack_138,local_100 + local_fc + iVar10);
              }
              else {
                local_54 = FUN_01b05690(lVar4,1,1);
                if (param_2 == '\b') {
                  FUN_00c44460(&local_88,
                               *(undefined8 *)
                                (*(longlong *)(param_1 + 0x118) + (longlong)local_54 * 8),
                               *(undefined8 *)
                                (*(longlong *)(param_1 + 0x120) + (longlong)local_54 * 8));
                  FUN_00c44b60(&local_c8,&local_88,local_50);
                  local_88 = local_c8;
                  local_80 = dStack_c0;
                }
                else {
                  local_a8 = *(double *)(*(longlong *)(param_1 + 0x118) + (longlong)local_54 * 8);
                }
                if (DAT_0210fef4 != '\0') {
                  FUN_016f7580(auStack_138,local_54,0xffffffff,0x3ff0000000000000);
                }
                FUN_016f74c0(auStack_138,local_100 + local_fc + iVar10);
              }
              iVar10 = iVar10 + 1;
            }
          }
          local_104 = local_104 + 1;
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
      }
    }
    if (param_2 == '\b') {
      FUN_01cc4b70(local_110,*(undefined8 *)(param_1 + 0x1a8),local_9c);
    }
    else {
      DAT_0210ff10 = local_9c;
      if (*PTR_DAT_02003ed0 == '\0') {
        if (0 < local_9c) {
          FUN_01cc4620(local_110,local_f0);
          FUN_01cc4700(local_110,*(undefined8 *)(param_1 + 0x1a8),local_9c);
        }
      }
      else {
        if (DAT_0210ff08 == 0) {
          DAT_0210ff08 = FUN_00da9920(&DAT_00da96e0,1,local_9c);
        }
        **(undefined8 **)(DAT_0210ff08 + 0x30) = local_f0;
        FUN_00409a70(*(undefined8 *)(param_1 + 0x1a8),*(longlong *)(DAT_0210ff08 + 0x30) + 8,
                     (longlong)(local_9c * 8));
        puVar8 = (undefined8 *)FUN_00da9bf0(DAT_0210ff08);
        if (puVar8 != (undefined8 *)0x0) {
          FUN_01cc4620(local_110,*puVar8);
          FUN_01cc4700(local_110,puVar8 + 1,local_9c);
        }
      }
    }
  }
  if (DAT_0210fef4 != '\0') {
    DAT_0210fef5 = '\x01';
  }
  DAT_0210fef4 = '\0';
LAB_016f83d9:
  FUN_00414560(&local_d8,2);
  FUN_00414480(&local_b0);
  return;
}


/* Ghidra address: 00961c00 */
/* Ghidra symbol: FUN_00961c00 */


void FUN_00961c00(longlong param_1)

{
  undefined1 *puVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  bool bVar11;
  undefined1 auStack_88 [40];
  undefined1 *local_60;
  int *local_58;
  int *local_50;
  char local_43;
  char local_42;
  char local_41;
  undefined8 local_40;
  undefined8 local_38 [3];
  
  local_60 = auStack_88;
  local_38[0] = 0;
  local_40 = 0;
  puVar1 = auStack_88;
  if (*(char *)(param_1 + 0xa8) == '\x06') goto LAB_0096311d;
  (**(code **)(**(longlong **)(param_1 + 0x98) + 0x20))(*(longlong **)(param_1 + 0x98));
  *(undefined1 *)(param_1 + 0x18) = 0;
  FUN_00414520(param_1 + 0x10);
  puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x88);
  puVar10 = (undefined8 *)(param_1 + 0x60);
  for (lVar4 = 7; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar10 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar10 = puVar10 + 1;
  }
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x28))(*(longlong **)(param_1 + 0x20));
  plVar7 = *(longlong **)(param_1 + 0x20);
  iVar6 = (int)plVar7[5];
  if (iVar6 == 0x26) {
    if ((int)plVar7[0x14] == 0x23) {
      (**(code **)(*plVar7 + 0x28))(plVar7);
      if (*(int *)(*(longlong *)(param_1 + 0x20) + 0xa0) == 0x78) {
        *(undefined1 *)(param_1 + 0xa8) = 2;
        (**(code **)(**(longlong **)(param_1 + 0x20) + 0x28))(*(longlong **)(param_1 + 0x20));
        puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x88);
        puVar10 = (undefined8 *)(param_1 + 0x60);
        for (lVar4 = 7; lVar4 != 0; lVar4 = lVar4 + -1) {
          *puVar10 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar10 = puVar10 + 1;
        }
        while (cVar2 = FUN_008ff0e0(*(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0xa0)),
              cVar2 != '\0') {
          (**(code **)(**(longlong **)(param_1 + 0x20) + 0x28))(*(longlong **)(param_1 + 0x20));
          (**(code **)(**(longlong **)(param_1 + 0x98) + 0x10))
                    (*(longlong **)(param_1 + 0x98),
                     *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x28));
        }
      }
      else {
        *(undefined1 *)(param_1 + 0xa8) = 1;
        puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x88);
        puVar10 = (undefined8 *)(param_1 + 0x60);
        for (lVar4 = 7; lVar4 != 0; lVar4 = lVar4 + -1) {
          *puVar10 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar10 = puVar10 + 1;
        }
        while (cVar2 = FUN_008ff100(*(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0xa0)),
              cVar2 != '\0') {
          (**(code **)(**(longlong **)(param_1 + 0x20) + 0x28))(*(longlong **)(param_1 + 0x20));
          (**(code **)(**(longlong **)(param_1 + 0x98) + 0x10))
                    (*(longlong **)(param_1 + 0x98),
                     *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x28));
        }
      }
      puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x10);
      puVar10 = (undefined8 *)(param_1 + 0x28);
      for (lVar4 = 7; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar10 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar10 = puVar10 + 1;
      }
      plVar7 = *(longlong **)(param_1 + 0x20);
      if ((int)plVar7[0x14] == 0x3b) {
        (**(code **)(*plVar7 + 0x28))(plVar7);
        puVar1 = local_60;
      }
      else {
        *(undefined1 *)(param_1 + 0x18) = 0x62;
        FUN_00414b90(param_1 + 0x10,&DAT_0096322c);
        puVar1 = local_60;
      }
    }
    else {
      *(undefined1 *)(param_1 + 0xa8) = 8;
      puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x88);
      puVar10 = (undefined8 *)(param_1 + 0x60);
      for (lVar4 = 7; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar10 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar10 = puVar10 + 1;
      }
      cVar2 = FUN_008ff170(*(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0xa0));
      if (cVar2 == '\0') {
        puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x10);
        puVar10 = (undefined8 *)(param_1 + 0x28);
        for (lVar4 = 7; lVar4 != 0; lVar4 = lVar4 + -1) {
          *puVar10 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar10 = puVar10 + 1;
        }
        *(undefined1 *)(param_1 + 0x18) = 0x52;
        puVar1 = local_60;
      }
      else {
        (**(code **)(**(longlong **)(param_1 + 0x20) + 0x28))(*(longlong **)(param_1 + 0x20));
        (**(code **)(**(longlong **)(param_1 + 0x98) + 0x10))
                  (*(longlong **)(param_1 + 0x98),
                   *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x28));
        while (cVar2 = FUN_008ff120(*(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0xa0)),
              cVar2 != '\0') {
          (**(code **)(**(longlong **)(param_1 + 0x20) + 0x28))(*(longlong **)(param_1 + 0x20));
          (**(code **)(**(longlong **)(param_1 + 0x98) + 0x10))
                    (*(longlong **)(param_1 + 0x98),
                     *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x28));
        }
        puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x10);
        puVar10 = (undefined8 *)(param_1 + 0x28);
        for (lVar4 = 7; lVar4 != 0; lVar4 = lVar4 + -1) {
          *puVar10 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar10 = puVar10 + 1;
        }
        plVar7 = *(longlong **)(param_1 + 0x20);
        if ((int)plVar7[0x14] == 0x3b) {
          (**(code **)(*plVar7 + 0x28))(plVar7);
          puVar1 = local_60;
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 0x66;
          FUN_00414b90(param_1 + 0x10,&DAT_0096322c);
          puVar1 = local_60;
        }
      }
    }
    goto LAB_0096311d;
  }
  puVar1 = local_60;
  if (iVar6 != 0x3c) {
    if (iVar6 == 0x9c) {
      plVar7 = plVar7 + 2;
      plVar9 = (longlong *)(param_1 + 0x28);
      for (lVar4 = 7; lVar4 != 0; lVar4 = lVar4 + -1) {
        *plVar9 = *plVar7;
        plVar7 = plVar7 + 1;
        plVar9 = plVar9 + 1;
      }
      *(undefined1 *)(param_1 + 0xa8) = 6;
    }
    else {
      *(undefined1 *)(param_1 + 0xa8) = 9;
      (**(code **)(**(longlong **)(param_1 + 0x98) + 0x10))
                (*(longlong **)(param_1 + 0x98),
                 *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x28));
      while( true ) {
        plVar7 = *(longlong **)(param_1 + 0x20);
        uVar3 = (int)plVar7[0x14] - 0x20;
        if (uVar3 < 0x80) {
          bVar11 = ((byte)(&DAT_00963230)[(longlong)(ulonglong)uVar3 >> 3] >> ((ulonglong)uVar3 & 7)
                   & 1) != 0;
        }
        else {
          bVar11 = false;
        }
        if (bVar11) break;
        (**(code **)(*plVar7 + 0x28))(plVar7);
        (**(code **)(**(longlong **)(param_1 + 0x98) + 0x10))
                  (*(longlong **)(param_1 + 0x98),
                   *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x28));
      }
      puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x10);
      puVar10 = (undefined8 *)(param_1 + 0x28);
      for (lVar4 = 7; puVar1 = local_60, lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar10 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar10 = puVar10 + 1;
      }
    }
    goto LAB_0096311d;
  }
  iVar6 = (int)plVar7[0x14];
  if (iVar6 < 0x3f) {
    if (iVar6 == 0x3e) {
      plVar7 = plVar7 + 2;
      plVar9 = (longlong *)(param_1 + 0x28);
      for (lVar4 = 7; lVar4 != 0; lVar4 = lVar4 + -1) {
        *plVar9 = *plVar7;
        plVar7 = plVar7 + 1;
        plVar9 = plVar9 + 1;
      }
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0x28))(*(longlong **)(param_1 + 0x20));
      *(undefined1 *)(param_1 + 0xa8) = 0xc;
      *(undefined1 *)(param_1 + 0x18) = 0x50;
      puVar1 = local_60;
      goto LAB_0096311d;
    }
    if (iVar6 == 0x21) {
      (**(code **)(*plVar7 + 0x28))(plVar7);
      lVar4 = *(longlong *)(param_1 + 0x20);
      iVar6 = *(int *)(lVar4 + 0xa0);
      if (iVar6 < 0x5c) {
        if (iVar6 == 0x5b) {
          *(undefined1 *)(param_1 + 0xa8) = 0;
          (**(code **)(**(longlong **)(param_1 + 0x20) + 0x28))(*(longlong **)(param_1 + 0x20));
          iVar6 = 6;
          local_50 = &DAT_01e32958;
          do {
            plVar7 = *(longlong **)(param_1 + 0x20);
            if ((int)plVar7[0x14] != *local_50) {
              plVar7 = plVar7 + 2;
              plVar9 = (longlong *)(param_1 + 0x28);
              for (lVar4 = 7; lVar4 != 0; lVar4 = lVar4 + -1) {
                *plVar9 = *plVar7;
                plVar7 = plVar7 + 1;
                plVar9 = plVar9 + 1;
              }
              *(undefined1 *)(param_1 + 0x18) = 0x34;
              FUN_00414b90(param_1 + 0x10,L"<![CDATA[");
              puVar1 = local_60;
              goto LAB_0096311d;
            }
            (**(code **)(*plVar7 + 0x28))(plVar7);
            local_50 = local_50 + 1;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
          puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x88);
          puVar10 = (undefined8 *)(param_1 + 0x60);
          for (lVar4 = 7; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar10 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar10 = puVar10 + 1;
          }
          while (plVar7 = *(longlong **)(param_1 + 0x20), (int)plVar7[0x14] != 0x9c) {
            (**(code **)(*plVar7 + 0x28))(plVar7);
            while ((lVar4 = *(longlong *)(param_1 + 0x20), *(int *)(lVar4 + 0x28) == 0x5d &&
                   (*(int *)(lVar4 + 0xa0) == 0x5d))) {
              puVar8 = (undefined8 *)(lVar4 + 0xc0);
              puVar10 = (undefined8 *)(param_1 + 0x28);
              for (lVar5 = 7; lVar5 != 0; lVar5 = lVar5 + -1) {
                *puVar10 = *puVar8;
                puVar8 = puVar8 + 1;
                puVar10 = puVar10 + 1;
              }
              (**(code **)(**(longlong **)(param_1 + 0x20) + 0x28))(*(longlong **)(param_1 + 0x20));
              plVar7 = *(longlong **)(param_1 + 0x20);
              if ((int)plVar7[0x14] == 0x3e) {
                (**(code **)(*plVar7 + 0x28))(plVar7);
                puVar1 = local_60;
                goto LAB_0096311d;
              }
              (**(code **)(**(longlong **)(param_1 + 0x98) + 0x10))
                        (*(longlong **)(param_1 + 0x98),0x5d);
            }
            (**(code **)(**(longlong **)(param_1 + 0x98) + 0x10))
                      (*(longlong **)(param_1 + 0x98),
                       *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x28));
          }
          puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x10);
          puVar10 = (undefined8 *)(param_1 + 0x28);
          for (lVar4 = 7; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar10 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar10 = puVar10 + 1;
          }
          *(undefined1 *)(param_1 + 0x18) = 0x61;
          FUN_00414b90(param_1 + 0x10,&DAT_009631b4);
          puVar1 = local_60;
          goto LAB_0096311d;
        }
        if (iVar6 == 0x2d) {
          *(undefined1 *)(param_1 + 0xa8) = 3;
          (**(code **)(**(longlong **)(param_1 + 0x20) + 0x28))(*(longlong **)(param_1 + 0x20));
          plVar7 = *(longlong **)(param_1 + 0x20);
          if ((int)plVar7[0x14] == 0x2d) {
            (**(code **)(*plVar7 + 0x28))(plVar7);
            puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x88);
            puVar10 = (undefined8 *)(param_1 + 0x60);
            for (lVar4 = 7; lVar4 != 0; lVar4 = lVar4 + -1) {
              *puVar10 = *puVar8;
              puVar8 = puVar8 + 1;
              puVar10 = puVar10 + 1;
            }
            while (plVar7 = *(longlong **)(param_1 + 0x20), (int)plVar7[0x14] != 0x9c) {
              (**(code **)(*plVar7 + 0x28))(plVar7);
              if (*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) == 0x2d) {
                puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xc0);
                puVar10 = (undefined8 *)(param_1 + 0x28);
                for (lVar4 = 7; lVar4 != 0; lVar4 = lVar4 + -1) {
                  *puVar10 = *puVar8;
                  puVar8 = puVar8 + 1;
                  puVar10 = puVar10 + 1;
                }
                (**(code **)(**(longlong **)(param_1 + 0x20) + 0x28))
                          (*(longlong **)(param_1 + 0x20));
                plVar7 = *(longlong **)(param_1 + 0x20);
                if ((int)plVar7[5] == 0x2d) {
                  if ((int)plVar7[0x14] == 0x3e) {
                    (**(code **)(*plVar7 + 0x28))(plVar7);
                    puVar1 = local_60;
                  }
                  else {
                    plVar7 = plVar7 + 2;
                    plVar9 = (longlong *)(param_1 + 0x28);
                    for (lVar4 = 7; lVar4 != 0; lVar4 = lVar4 + -1) {
                      *plVar9 = *plVar7;
                      plVar7 = plVar7 + 1;
                      plVar9 = plVar9 + 1;
                    }
                    *(undefined1 *)(param_1 + 0x18) = 0x39;
                    FUN_00414b90(param_1 + 0x10,&DAT_00963170);
                    puVar1 = local_60;
                  }
                  goto LAB_0096311d;
                }
                if ((int)plVar7[5] == 0x9c) {
                  plVar7 = plVar7 + 0x18;
                  plVar9 = (longlong *)(param_1 + 0x28);
                  for (lVar4 = 7; lVar4 != 0; lVar4 = lVar4 + -1) {
                    *plVar9 = *plVar7;
                    plVar7 = plVar7 + 1;
                    plVar9 = plVar9 + 1;
                  }
                  *(undefined1 *)(param_1 + 0x18) = 99;
                  FUN_00414b90(param_1 + 0x10,&DAT_00963180);
                  puVar1 = local_60;
                  goto LAB_0096311d;
                }
                (**(code **)(**(longlong **)(param_1 + 0x98) + 0x10))
                          (*(longlong **)(param_1 + 0x98),0x2d);
              }
              (**(code **)(**(longlong **)(param_1 + 0x98) + 0x10))
                        (*(longlong **)(param_1 + 0x98),
                         *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x28));
            }
            puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x10);
            puVar10 = (undefined8 *)(param_1 + 0x28);
            for (lVar4 = 7; lVar4 != 0; lVar4 = lVar4 + -1) {
              *puVar10 = *puVar8;
              puVar8 = puVar8 + 1;
              puVar10 = puVar10 + 1;
            }
            *(undefined1 *)(param_1 + 0x18) = 99;
            FUN_00414b90(param_1 + 0x10,&DAT_00963180);
            puVar1 = local_60;
          }
          else {
            puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x10);
            puVar10 = (undefined8 *)(param_1 + 0x28);
            for (lVar4 = 7; lVar4 != 0; lVar4 = lVar4 + -1) {
              *puVar10 = *puVar8;
              puVar8 = puVar8 + 1;
              puVar10 = puVar10 + 1;
            }
            *(undefined1 *)(param_1 + 0x18) = 0x35;
            FUN_00414b90(param_1 + 0x10,L"<!--");
            puVar1 = local_60;
          }
          goto LAB_0096311d;
        }
        if (iVar6 == 0x43) goto LAB_0096288b;
        if (iVar6 == 0x44) {
          *(undefined1 *)(param_1 + 0xa8) = 4;
          (**(code **)(**(longlong **)(param_1 + 0x20) + 0x28))(*(longlong **)(param_1 + 0x20));
          iVar6 = 6;
          local_58 = &DAT_01e32970;
          do {
            plVar7 = *(longlong **)(param_1 + 0x20);
            if ((int)plVar7[0x14] != *local_58) {
              *(undefined1 *)(param_1 + 0x18) = 0x36;
              FUN_00414b90(param_1 + 0x10,L"<!DOCTYPE");
              puVar1 = local_60;
              goto LAB_0096311d;
            }
            (**(code **)(*plVar7 + 0x28))(plVar7);
            local_58 = local_58 + 1;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
          local_42 = '\0';
          local_41 = '\0';
          local_43 = '\0';
          FUN_00414520(&local_40);
          FUN_00414520(local_38);
          puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x88);
          puVar10 = (undefined8 *)(param_1 + 0x60);
          for (lVar4 = 7; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar10 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar10 = puVar10 + 1;
          }
          while (plVar7 = *(longlong **)(param_1 + 0x20), (int)plVar7[0x14] != 0x9c) {
            (**(code **)(*plVar7 + 0x28))(plVar7);
            lVar4 = *(longlong *)(param_1 + 0x20);
            if ((((*(int *)(lVar4 + 0x28) == 0x3e) && (local_42 == '\0')) && (local_41 == '\0')) &&
               ((local_43 == '\0' && (iVar6 = FUN_00416420(local_38[0],0), iVar6 == 0)))) {
              puVar8 = (undefined8 *)(lVar4 + 0xc0);
              puVar10 = (undefined8 *)(param_1 + 0x28);
              for (lVar5 = 7; puVar1 = local_60, lVar5 != 0; lVar5 = lVar5 + -1) {
                *puVar10 = *puVar8;
                puVar8 = puVar8 + 1;
                puVar10 = puVar10 + 1;
              }
              goto LAB_0096311d;
            }
            (**(code **)(**(longlong **)(param_1 + 0x98) + 0x10))(*(longlong **)(param_1 + 0x98));
            iVar6 = FUN_00416420(local_38[0],0);
            if (iVar6 == 0) {
              if ((*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) == 0x27) && (local_42 == '\0')) {
                local_41 = local_41 == '\0';
              }
              else if ((*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) == 0x22) &&
                      (local_41 == '\0')) {
                local_42 = local_42 == '\0';
              }
              if (local_43 == '\0') {
                if (((*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) == 0x5b) && (local_41 == '\0'))
                   && (local_42 == '\0')) {
                  local_43 = '\x01';
                }
              }
              else if (local_41 == '\0' && local_42 == '\0') {
                if (*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) == 0x3c) {
                  FUN_00414be0(&local_40);
                }
                else if ((*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) == 0x21) &&
                        (iVar6 = FUN_00416420(local_40,&DAT_009631d8), iVar6 == 0)) {
                  FUN_00414be0(&local_40);
                }
                else if ((*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) == 0x3f) &&
                        (iVar6 = FUN_00416420(local_40,&DAT_009631d8), iVar6 == 0)) {
                  FUN_00414520(&local_40);
                  FUN_00414be0(local_38);
                }
                else if ((*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) == 0x2d) &&
                        (iVar6 = FUN_00416420(local_40,&DAT_009631e0), iVar6 == 0)) {
                  FUN_00414be0(&local_40);
                }
                else if ((*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) == 0x2d) &&
                        (iVar6 = FUN_00416420(local_40,&DAT_009631ec), iVar6 == 0)) {
                  FUN_00414520(&local_40);
                  FUN_00414be0(local_38);
                }
                else {
                  iVar6 = FUN_00416420(local_40,0);
                  if (iVar6 != 0) {
                    FUN_00414520(&local_40);
                  }
                }
                if (((*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) == 0x5d) && (local_41 == '\0'))
                   && (local_42 == '\0')) {
                  local_43 = '\0';
                }
              }
            }
            else {
              cVar2 = (**(code **)(**(longlong **)(param_1 + 0x98) + 0x30))
                                (*(longlong **)(param_1 + 0x98));
              if (cVar2 != '\0') {
                FUN_00414520(local_38);
              }
            }
          }
          puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x10);
          puVar10 = (undefined8 *)(param_1 + 0x28);
          for (lVar4 = 7; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar10 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar10 = puVar10 + 1;
          }
          *(undefined1 *)(param_1 + 0x18) = 100;
          FUN_00414b90(param_1 + 0x10,&DAT_009631f8);
          puVar1 = local_60;
          goto LAB_0096311d;
        }
        if (iVar6 != 0x4f) goto LAB_009628d7;
      }
      else {
        if ((iVar6 == 0x5d) || (iVar6 == 99)) {
LAB_0096288b:
          puVar8 = (undefined8 *)(lVar4 + 0x10);
          puVar10 = (undefined8 *)(param_1 + 0x28);
          for (lVar5 = 7; lVar5 != 0; lVar5 = lVar5 + -1) {
            *puVar10 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar10 = puVar10 + 1;
          }
          *(undefined1 *)(param_1 + 0xa8) = 0;
          *(undefined1 *)(param_1 + 0x18) = 0x34;
          FUN_00414b90(param_1 + 0x10,L"<![CDATA[");
          puVar1 = local_60;
          goto LAB_0096311d;
        }
        if ((iVar6 != 100) && (iVar6 != 0x6f)) {
LAB_009628d7:
          puVar8 = (undefined8 *)(lVar4 + 0x10);
          puVar10 = (undefined8 *)(param_1 + 0x28);
          for (lVar5 = 7; lVar5 != 0; lVar5 = lVar5 + -1) {
            *puVar10 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar10 = puVar10 + 1;
          }
          *(undefined1 *)(param_1 + 0xa8) = 3;
          *(undefined1 *)(param_1 + 0x18) = 0x35;
          FUN_00414b90(param_1 + 0x10,L"<!--");
          puVar1 = local_60;
          goto LAB_0096311d;
        }
      }
      puVar8 = (undefined8 *)(lVar4 + 0x10);
      puVar10 = (undefined8 *)(param_1 + 0x28);
      for (lVar5 = 7; lVar5 != 0; lVar5 = lVar5 + -1) {
        *puVar10 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar10 = puVar10 + 1;
      }
      *(undefined1 *)(param_1 + 0xa8) = 4;
      *(undefined1 *)(param_1 + 0x18) = 0x36;
      FUN_00414b90(param_1 + 0x10,L"<!DOCTYPE");
      puVar1 = local_60;
      goto LAB_0096311d;
    }
    if (iVar6 == 0x2f) {
      *(undefined1 *)(param_1 + 0xa8) = 7;
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0x28))(*(longlong **)(param_1 + 0x20));
      puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x88);
      puVar10 = (undefined8 *)(param_1 + 0x60);
      for (lVar4 = 7; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar10 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar10 = puVar10 + 1;
      }
      while (((cVar2 = FUN_008ff090(*(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0xa0)),
              cVar2 == '\0' && (*(int *)(*(longlong *)(param_1 + 0x20) + 0xa0) != 0x3e)) &&
             (*(int *)(*(longlong *)(param_1 + 0x20) + 0xa0) != 0x9c))) {
        (**(code **)(**(longlong **)(param_1 + 0x20) + 0x28))(*(longlong **)(param_1 + 0x20));
        (**(code **)(**(longlong **)(param_1 + 0x98) + 0x10))
                  (*(longlong **)(param_1 + 0x98),
                   *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x28));
      }
      puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x10);
      puVar10 = (undefined8 *)(param_1 + 0x28);
      for (lVar4 = 7; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar10 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar10 = puVar10 + 1;
      }
      while (cVar2 = FUN_008ff090(*(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0xa0)),
            cVar2 != '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x20) + 0x28))(*(longlong **)(param_1 + 0x20));
      }
      plVar7 = *(longlong **)(param_1 + 0x20);
      if ((int)plVar7[0x14] == 0x3e) {
        (**(code **)(*plVar7 + 0x28))(plVar7);
        puVar1 = local_60;
      }
      else {
        *(undefined1 *)(param_1 + 0x18) = 0x65;
        FUN_00414b90(param_1 + 0x10,&DAT_00963170);
        puVar1 = local_60;
      }
      goto LAB_0096311d;
    }
  }
  else {
    if (iVar6 == 0x3f) {
      *(undefined1 *)(param_1 + 0xa8) = 10;
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0x28))(*(longlong **)(param_1 + 0x20));
      puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x88);
      puVar10 = (undefined8 *)(param_1 + 0x60);
      for (lVar4 = 7; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar10 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar10 = puVar10 + 1;
      }
      while (plVar7 = *(longlong **)(param_1 + 0x20), (int)plVar7[0x14] != 0x9c) {
        (**(code **)(*plVar7 + 0x28))(plVar7);
        lVar4 = *(longlong *)(param_1 + 0x20);
        if ((*(int *)(lVar4 + 0x28) == 0x3f) && (*(int *)(lVar4 + 0xa0) == 0x3e)) {
          puVar8 = (undefined8 *)(lVar4 + 0xc0);
          puVar10 = (undefined8 *)(param_1 + 0x28);
          for (lVar5 = 7; lVar5 != 0; lVar5 = lVar5 + -1) {
            *puVar10 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar10 = puVar10 + 1;
          }
          (**(code **)(**(longlong **)(param_1 + 0x20) + 0x28))(*(longlong **)(param_1 + 0x20));
          puVar1 = local_60;
          goto LAB_0096311d;
        }
        (**(code **)(**(longlong **)(param_1 + 0x98) + 0x10))
                  (*(longlong **)(param_1 + 0x98),
                   *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x28));
      }
      puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xc0);
      puVar10 = (undefined8 *)(param_1 + 0x28);
      for (lVar4 = 7; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar10 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar10 = puVar10 + 1;
      }
      *(undefined1 *)(param_1 + 0x18) = 0x67;
      FUN_00414b90(param_1 + 0x10,&DAT_00963178);
      puVar1 = local_60;
      goto LAB_0096311d;
    }
    if (iVar6 == 0x9c) {
      plVar7 = plVar7 + 2;
      plVar9 = (longlong *)(param_1 + 0x28);
      for (lVar4 = 7; lVar4 != 0; lVar4 = lVar4 + -1) {
        *plVar9 = *plVar7;
        plVar7 = plVar7 + 1;
        plVar9 = plVar9 + 1;
      }
      *(undefined1 *)(param_1 + 0xa8) = 0xc;
      *(undefined1 *)(param_1 + 0x18) = 0x50;
      goto LAB_0096311d;
    }
  }
  local_41 = '\0';
  local_42 = '\0';
  (**(code **)(*plVar7 + 0x28))(plVar7);
  puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x10);
  puVar10 = (undefined8 *)(param_1 + 0x60);
  for (lVar4 = 7; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar10 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar10 = puVar10 + 1;
  }
  (**(code **)(**(longlong **)(param_1 + 0x98) + 0x10))
            (*(longlong **)(param_1 + 0x98),*(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x28));
  while( true ) {
    plVar7 = *(longlong **)(param_1 + 0x20);
    if ((int)plVar7[0x14] - 0x28U < 0x78) {
      uVar3 = (int)plVar7[0x14] - 0x18;
      bVar11 = ((byte)(&DAT_009631fc)[(longlong)(int)uVar3 >> 3] >> (uVar3 & 7) & 1) != 0;
    }
    else {
      bVar11 = false;
    }
    if (bVar11) break;
    (**(code **)(*plVar7 + 0x28))(plVar7);
    (**(code **)(**(longlong **)(param_1 + 0x98) + 0x10))
              (*(longlong **)(param_1 + 0x98),*(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x28))
    ;
    iVar6 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x28);
    if (iVar6 == 0x27) {
      local_41 = '\x01';
    }
    if (iVar6 == 0x22) {
      local_42 = '\x01';
    }
    while ((local_41 != '\0' && (*(int *)(*(longlong *)(param_1 + 0x20) + 0xa0) != 0x9c))) {
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0x28))(*(longlong **)(param_1 + 0x20));
      (**(code **)(**(longlong **)(param_1 + 0x98) + 0x10))
                (*(longlong **)(param_1 + 0x98),
                 *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x28));
      if (*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) == 0x27) {
        local_41 = '\0';
      }
    }
    while ((local_42 != '\0' && (*(int *)(*(longlong *)(param_1 + 0x20) + 0xa0) != 0x9c))) {
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0x28))(*(longlong **)(param_1 + 0x20));
      (**(code **)(**(longlong **)(param_1 + 0x98) + 0x10))
                (*(longlong **)(param_1 + 0x98),
                 *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x28));
      if (*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) == 0x22) {
        local_42 = '\0';
      }
    }
  }
  puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x10);
  puVar10 = (undefined8 *)(param_1 + 0x28);
  for (lVar4 = 7; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar10 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar10 = puVar10 + 1;
  }
  iVar6 = *(int *)(*(longlong *)(param_1 + 0x20) + 0xa0);
  if (iVar6 == 0x2f) {
    *(undefined1 *)(param_1 + 0xa8) = 5;
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x28))(*(longlong **)(param_1 + 0x20));
    plVar7 = *(longlong **)(param_1 + 0x20);
    if ((int)plVar7[0x14] == 0x3e) {
      (**(code **)(*plVar7 + 0x28))(plVar7);
      puVar1 = local_60;
    }
    else {
      *(undefined1 *)(param_1 + 0x18) = 0x65;
      FUN_00414b90(param_1 + 0x10,&DAT_00963170);
      puVar1 = local_60;
    }
  }
  else if (iVar6 == 0x3e) {
    *(undefined1 *)(param_1 + 0xa8) = 0xc;
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x28))(*(longlong **)(param_1 + 0x20));
    puVar1 = local_60;
  }
  else {
    puVar1 = local_60;
    if (iVar6 == 0x9c) {
      *(undefined1 *)(param_1 + 0xa8) = 0xc;
      *(undefined1 *)(param_1 + 0x18) = 0x65;
      if (local_41 == '\0') {
        if (local_42 == '\0') {
          FUN_00414b90(param_1 + 0x10,&DAT_00963170);
          puVar1 = local_60;
        }
        else {
          FUN_00414b90(param_1 + 0x10,&DAT_00963220);
          puVar1 = local_60;
        }
      }
      else {
        FUN_00414b90(param_1 + 0x10,&DAT_00963214);
        puVar1 = local_60;
      }
    }
  }
LAB_0096311d:
  local_60 = puVar1;
  FUN_004145c0(&local_40,2);
  return;
}


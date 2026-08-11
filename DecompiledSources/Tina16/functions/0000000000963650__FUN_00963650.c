/* Ghidra address: 00963650 */
/* Ghidra symbol: FUN_00963650 */


void FUN_00963650(longlong *param_1,undefined8 param_2)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_a8 [40];
  byte local_80 [32];
  undefined1 *local_60;
  int *local_50;
  uint *local_48;
  char local_3d;
  uint local_3c;
  char local_37;
  char local_36;
  char local_35;
  char local_2d;
  char local_2c;
  char local_2b;
  char local_2a;
  char local_29;
  
  local_60 = auStack_a8;
  if ((char)param_1[0x14] != '\0') {
    (**(code **)(*(longlong *)param_1[0x15] + 0x20))((longlong *)param_1[0x15]);
    *(undefined1 *)(param_1 + 3) = 0;
    FUN_00414520(param_1 + 2);
    plVar8 = (longlong *)(param_1[4] + 0x88);
    plVar9 = param_1 + 0xd;
    for (lVar4 = 7; lVar4 != 0; lVar4 = lVar4 + -1) {
      *plVar9 = *plVar8;
      plVar8 = plVar8 + 1;
      plVar9 = plVar9 + 1;
    }
    bVar1 = *(byte *)(param_1 + 0x14);
    if (bVar1 < 4) {
      if (bVar1 == 3) {
        *(undefined1 *)(param_1 + 0x14) = 5;
        plVar8 = (longlong *)(param_1[4] + 0x88);
        plVar9 = param_1 + 0xd;
        for (lVar4 = 7; lVar4 != 0; lVar4 = lVar4 + -1) {
          *plVar9 = *plVar8;
          plVar8 = plVar8 + 1;
          plVar9 = plVar9 + 1;
        }
        cVar2 = FUN_008ff090(*(undefined4 *)(param_1[4] + 0xa0));
        if (cVar2 == '\0') {
          plVar8 = (longlong *)(param_1[4] + 0x10);
          plVar9 = param_1 + 6;
          for (lVar4 = 7; lVar4 != 0; lVar4 = lVar4 + -1) {
            *plVar9 = *plVar8;
            plVar8 = plVar8 + 1;
            plVar9 = plVar9 + 1;
          }
          *(undefined1 *)(param_1 + 3) = 0x56;
          FUN_00414b90(param_1 + 2,&DAT_009645b8);
        }
        else {
          (**(code **)(*(longlong *)param_1[4] + 0x28))((longlong *)param_1[4]);
          while (cVar2 = FUN_008ff090(*(undefined4 *)(param_1[4] + 0xa0)), cVar2 != '\0') {
            (**(code **)(*(longlong *)param_1[4] + 0x28))((longlong *)param_1[4]);
          }
          plVar8 = (longlong *)(param_1[4] + 0x88);
          plVar9 = param_1 + 0xd;
          for (lVar4 = 7; lVar4 != 0; lVar4 = lVar4 + -1) {
            *plVar9 = *plVar8;
            plVar8 = plVar8 + 1;
            plVar9 = plVar9 + 1;
          }
          uVar3 = *(int *)(param_1[4] + 0xa0) - 0x20;
          if (uVar3 < 8) {
            bVar10 = ((int)CONCAT71((int7)((ulonglong)param_2 >> 8),1) << ((byte)uVar3 & 0x1f) &
                     0x84U) != 0;
          }
          else {
            bVar10 = false;
          }
          if (bVar10) {
            (**(code **)(*(longlong *)param_1[4] + 0x28))((longlong *)param_1[4]);
            local_3c = *(uint *)(param_1[4] + 0x28);
            while( true ) {
              local_80[0] = 0;
              local_80[1] = 0;
              local_80[2] = 0;
              local_80[3] = 0;
              local_80[4] = 0;
              local_80[5] = 0;
              local_80[6] = 0;
              local_80[7] = 0;
              local_80[8] = 0;
              local_80[9] = 0;
              local_80[10] = 0;
              local_80[0xb] = 0;
              local_80[0xc] = 0;
              local_80[0xd] = 0;
              local_80[0xe] = 0;
              local_80[0xf] = 0;
              local_80[0x10] = 0;
              local_80[0x11] = 0;
              local_80[0x12] = 0;
              local_80[0x13] = 0x10;
              local_80[0x14] = 0;
              local_80[0x15] = 0;
              local_80[0x16] = 0;
              local_80[0x17] = 0;
              local_80[0x18] = 0;
              local_80[0x19] = 0;
              local_80[0x1a] = 0;
              local_80[0x1b] = 0;
              local_80[0x1c] = 0;
              local_80[0x1d] = 0;
              local_80[0x1e] = 0;
              local_80[0x1f] = 0;
              if (local_3c < 0x100) {
                local_80[(longlong)(ulonglong)local_3c >> 3] =
                     local_80[(longlong)(ulonglong)local_3c >> 3] |
                     '\x01' << ((ulonglong)local_3c & 7);
              }
              plVar8 = (longlong *)param_1[4];
              uVar3 = *(uint *)(plVar8 + 0x14);
              if (uVar3 < 0x100) {
                bVar10 = (local_80[(longlong)(ulonglong)uVar3 >> 3] >> ((ulonglong)uVar3 & 7) & 1)
                         != 0;
              }
              else {
                bVar10 = false;
              }
              if (bVar10) break;
              (**(code **)(*plVar8 + 0x28))(plVar8);
              (**(code **)(*(longlong *)param_1[0x15] + 0x10))
                        ((longlong *)param_1[0x15],*(undefined4 *)(param_1[4] + 0x28));
            }
            plVar8 = (longlong *)(param_1[4] + 0x10);
            plVar9 = param_1 + 6;
            for (lVar4 = 7; lVar4 != 0; lVar4 = lVar4 + -1) {
              *plVar9 = *plVar8;
              plVar8 = plVar8 + 1;
              plVar9 = plVar9 + 1;
            }
            if (*(uint *)(param_1[4] + 0xa0) == local_3c) {
              (**(code **)(*(longlong *)param_1[4] + 0x28))((longlong *)param_1[4]);
            }
            else {
              *(undefined1 *)(param_1 + 3) = 0x5b;
              FUN_00415e60(param_1 + 2,(undefined2)local_3c);
            }
          }
          else {
            plVar8 = (longlong *)(param_1[4] + 0x10);
            plVar9 = param_1 + 6;
            for (lVar4 = 7; lVar4 != 0; lVar4 = lVar4 + -1) {
              *plVar9 = *plVar8;
              plVar8 = plVar8 + 1;
              plVar9 = plVar9 + 1;
            }
            *(undefined1 *)(param_1 + 3) = 0x5b;
            FUN_00414b90(param_1 + 2,&DAT_009645c4);
          }
        }
      }
      else if (bVar1 == 1) {
        while (cVar2 = FUN_008ff090(*(undefined4 *)(param_1[4] + 0xa0)), cVar2 != '\0') {
          (**(code **)(*(longlong *)param_1[4] + 0x28))((longlong *)param_1[4]);
        }
        (**(code **)(*(longlong *)param_1[4] + 0x28))((longlong *)param_1[4]);
        lVar4 = param_1[4];
        if (*(int *)(lVar4 + 0x28) == 0x9c) {
          plVar8 = (longlong *)(lVar4 + 0xc0);
          plVar9 = param_1 + 6;
          for (lVar5 = 7; lVar5 != 0; lVar5 = lVar5 + -1) {
            *plVar9 = *plVar8;
            plVar8 = plVar8 + 1;
            plVar9 = plVar9 + 1;
          }
          *(undefined1 *)(param_1 + 0x14) = 0;
        }
        else {
          plVar8 = (longlong *)(lVar4 + 0x10);
          plVar9 = param_1 + 6;
          for (lVar5 = 7; lVar5 != 0; lVar5 = lVar5 + -1) {
            *plVar9 = *plVar8;
            plVar8 = plVar8 + 1;
            plVar9 = plVar9 + 1;
          }
          *(undefined1 *)(param_1 + 3) = 100;
        }
      }
      else if (bVar1 == 2) {
        while (cVar2 = FUN_008ff090(*(undefined4 *)(param_1[4] + 0xa0)), cVar2 != '\0') {
          (**(code **)(*(longlong *)param_1[4] + 0x28))((longlong *)param_1[4]);
        }
        plVar8 = (longlong *)param_1[4];
        iVar7 = (int)plVar8[0x14];
        if (iVar7 == 0x50) {
          (**(code **)(*plVar8 + 0x28))(plVar8);
          plVar8 = (longlong *)(param_1[4] + 0x10);
          plVar9 = param_1 + 0xd;
          for (lVar4 = 7; lVar4 != 0; lVar4 = lVar4 + -1) {
            *plVar9 = *plVar8;
            plVar8 = plVar8 + 1;
            plVar9 = plVar9 + 1;
          }
          iVar7 = 5;
          local_48 = &DAT_01e32990;
          do {
            plVar8 = (longlong *)param_1[4];
            uVar6 = (ulonglong)*(uint *)(plVar8 + 0x14);
            if (*(uint *)(plVar8 + 0x14) != *local_48) {
              plVar8 = plVar8 + 2;
              plVar9 = param_1 + 6;
              for (lVar4 = 7; lVar4 != 0; lVar4 = lVar4 + -1) {
                *plVar9 = *plVar8;
                plVar8 = plVar8 + 1;
                plVar9 = plVar9 + 1;
              }
              *(undefined1 *)(param_1 + 3) = 0x5a;
              FUN_00414b90(param_1 + 2,L"PUBLIC");
              return;
            }
            (**(code **)(*plVar8 + 0x28))(plVar8);
            local_48 = local_48 + 1;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
          *(undefined1 *)(param_1 + 0x14) = 3;
          plVar8 = (longlong *)(param_1[4] + 0x88);
          plVar9 = param_1 + 0xd;
          for (lVar4 = 7; lVar4 != 0; lVar4 = lVar4 + -1) {
            *plVar9 = *plVar8;
            plVar8 = plVar8 + 1;
            plVar9 = plVar9 + 1;
          }
          cVar2 = FUN_008ff090(*(undefined4 *)(param_1[4] + 0xa0));
          if (cVar2 == '\0') {
            plVar8 = (longlong *)(param_1[4] + 0x10);
            plVar9 = param_1 + 6;
            for (lVar4 = 7; lVar4 != 0; lVar4 = lVar4 + -1) {
              *plVar9 = *plVar8;
              plVar8 = plVar8 + 1;
              plVar9 = plVar9 + 1;
            }
            *(undefined1 *)(param_1 + 3) = 0x56;
            FUN_00414b90(param_1 + 2,&DAT_009645b8);
          }
          else {
            (**(code **)(*(longlong *)param_1[4] + 0x28))((longlong *)param_1[4]);
            while (cVar2 = FUN_008ff090(*(undefined4 *)(param_1[4] + 0xa0)), cVar2 != '\0') {
              (**(code **)(*(longlong *)param_1[4] + 0x28))((longlong *)param_1[4]);
            }
            plVar8 = (longlong *)(param_1[4] + 0x88);
            plVar9 = param_1 + 0xd;
            for (lVar4 = 7; lVar4 != 0; lVar4 = lVar4 + -1) {
              *plVar9 = *plVar8;
              plVar8 = plVar8 + 1;
              plVar9 = plVar9 + 1;
            }
            uVar3 = *(int *)(param_1[4] + 0xa0) - 0x20;
            if (uVar3 < 8) {
              bVar10 = ((int)CONCAT71((int7)(uVar6 >> 8),1) << ((byte)uVar3 & 0x1f) & 0x84U) != 0;
            }
            else {
              bVar10 = false;
            }
            if (bVar10) {
              (**(code **)(*(longlong *)param_1[4] + 0x28))((longlong *)param_1[4]);
              plVar8 = (longlong *)(param_1[4] + 0x88);
              plVar9 = param_1 + 0xd;
              for (lVar4 = 7; lVar4 != 0; lVar4 = lVar4 + -1) {
                *plVar9 = *plVar8;
                plVar8 = plVar8 + 1;
                plVar9 = plVar9 + 1;
              }
              local_3c = *(uint *)(param_1[4] + 0x28);
              while( true ) {
                local_80[0] = 0;
                local_80[1] = 0;
                local_80[2] = 0;
                local_80[3] = 0;
                local_80[4] = 0;
                local_80[5] = 0;
                local_80[6] = 0;
                local_80[7] = 0;
                local_80[8] = 0;
                local_80[9] = 0;
                local_80[10] = 0;
                local_80[0xb] = 0;
                local_80[0xc] = 0;
                local_80[0xd] = 0;
                local_80[0xe] = 0;
                local_80[0xf] = 0;
                local_80[0x10] = 0;
                local_80[0x11] = 0;
                local_80[0x12] = 0;
                local_80[0x13] = 0x10;
                local_80[0x14] = 0;
                local_80[0x15] = 0;
                local_80[0x16] = 0;
                local_80[0x17] = 0;
                local_80[0x18] = 0;
                local_80[0x19] = 0;
                local_80[0x1a] = 0;
                local_80[0x1b] = 0;
                local_80[0x1c] = 0;
                local_80[0x1d] = 0;
                local_80[0x1e] = 0;
                local_80[0x1f] = 0;
                if (local_3c < 0x100) {
                  local_80[(longlong)(ulonglong)local_3c >> 3] =
                       local_80[(longlong)(ulonglong)local_3c >> 3] |
                       '\x01' << ((ulonglong)local_3c & 7);
                }
                plVar8 = (longlong *)param_1[4];
                uVar3 = *(uint *)(plVar8 + 0x14);
                if (uVar3 < 0x100) {
                  bVar10 = (local_80[(longlong)(ulonglong)uVar3 >> 3] >> ((ulonglong)uVar3 & 7) & 1)
                           != 0;
                }
                else {
                  bVar10 = false;
                }
                if (bVar10) break;
                (**(code **)(*plVar8 + 0x28))(plVar8);
                (**(code **)(*(longlong *)param_1[0x15] + 0x10))
                          ((longlong *)param_1[0x15],*(undefined4 *)(param_1[4] + 0x28));
              }
              plVar8 = (longlong *)(param_1[4] + 0x10);
              plVar9 = param_1 + 6;
              for (lVar4 = 7; lVar4 != 0; lVar4 = lVar4 + -1) {
                *plVar9 = *plVar8;
                plVar8 = plVar8 + 1;
                plVar9 = plVar9 + 1;
              }
              if (*(uint *)(param_1[4] + 0xa0) == local_3c) {
                (**(code **)(*(longlong *)param_1[4] + 0x28))((longlong *)param_1[4]);
              }
              else {
                *(undefined1 *)(param_1 + 3) = 0x5b;
                FUN_00415e60(param_1 + 2,(undefined2)local_3c);
              }
            }
            else {
              plVar8 = (longlong *)(param_1[4] + 0x10);
              plVar9 = param_1 + 6;
              for (lVar4 = 7; lVar4 != 0; lVar4 = lVar4 + -1) {
                *plVar9 = *plVar8;
                plVar8 = plVar8 + 1;
                plVar9 = plVar9 + 1;
              }
              *(undefined1 *)(param_1 + 3) = 0x5b;
              FUN_00414b90(param_1 + 2,&DAT_009645c4);
            }
          }
        }
        else if (iVar7 == 0x53) {
          (**(code **)(*plVar8 + 0x28))(plVar8);
          plVar8 = (longlong *)(param_1[4] + 0x10);
          plVar9 = param_1 + 0xd;
          for (lVar4 = 7; lVar4 != 0; lVar4 = lVar4 + -1) {
            *plVar9 = *plVar8;
            plVar8 = plVar8 + 1;
            plVar9 = plVar9 + 1;
          }
          iVar7 = 5;
          local_50 = &DAT_01e329a4;
          do {
            plVar8 = (longlong *)param_1[4];
            if ((int)plVar8[0x14] != *local_50) {
              plVar8 = plVar8 + 2;
              plVar9 = param_1 + 6;
              for (lVar4 = 7; lVar4 != 0; lVar4 = lVar4 + -1) {
                *plVar9 = *plVar8;
                plVar8 = plVar8 + 1;
                plVar9 = plVar9 + 1;
              }
              *(undefined1 *)(param_1 + 3) = 0x60;
              FUN_00414b90(param_1 + 2,L"SYSTEM");
              return;
            }
            (**(code **)(*plVar8 + 0x28))(plVar8);
            local_50 = local_50 + 1;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
          *(undefined1 *)(param_1 + 0x14) = 3;
          (**(code **)(*param_1 + 0x70))(param_1);
        }
        else if (iVar7 == 0x5b) {
          *(undefined1 *)(param_1 + 0x14) = 5;
          (**(code **)(*param_1 + 0x70))(param_1);
        }
        else if (iVar7 == 0x9c) {
          (**(code **)(*plVar8 + 0x28))(plVar8);
          plVar8 = (longlong *)(param_1[4] + 0xc0);
          plVar9 = param_1 + 6;
          for (lVar4 = 7; lVar4 != 0; lVar4 = lVar4 + -1) {
            *plVar9 = *plVar8;
            plVar8 = plVar8 + 1;
            plVar9 = plVar9 + 1;
          }
          *(undefined1 *)(param_1 + 0x14) = 0;
        }
        else {
          (**(code **)(*plVar8 + 0x28))(plVar8);
          plVar8 = (longlong *)(param_1[4] + 0x10);
          plVar9 = param_1 + 6;
          for (lVar4 = 7; lVar4 != 0; lVar4 = lVar4 + -1) {
            *plVar9 = *plVar8;
            plVar8 = plVar8 + 1;
            plVar9 = plVar9 + 1;
          }
          *(undefined1 *)(param_1 + 3) = 0x60;
          FUN_00414b90(param_1 + 2,L"SYSTEM");
        }
      }
    }
    else if (bVar1 == 4) {
      *(undefined1 *)(param_1 + 0x14) = 2;
      (**(code **)(*(longlong *)param_1[4] + 0x28))((longlong *)param_1[4]);
      plVar8 = (longlong *)(param_1[4] + 0x10);
      plVar9 = param_1 + 0xd;
      for (lVar4 = 7; lVar4 != 0; lVar4 = lVar4 + -1) {
        *plVar9 = *plVar8;
        plVar8 = plVar8 + 1;
        plVar9 = plVar9 + 1;
      }
      cVar2 = FUN_008ff090(*(undefined4 *)(param_1[4] + 0x28));
      if (cVar2 == '\0') {
        plVar8 = (longlong *)(param_1[4] + 0x10);
        plVar9 = param_1 + 6;
        for (lVar4 = 7; lVar4 != 0; lVar4 = lVar4 + -1) {
          *plVar9 = *plVar8;
          plVar8 = plVar8 + 1;
          plVar9 = plVar9 + 1;
        }
        *(undefined1 *)(param_1 + 3) = 0x56;
        FUN_00414b90(param_1 + 2,&DAT_009645b8);
      }
      else {
        while (cVar2 = FUN_008ff090(*(undefined4 *)(param_1[4] + 0xa0)), cVar2 != '\0') {
          (**(code **)(*(longlong *)param_1[4] + 0x28))((longlong *)param_1[4]);
        }
        local_2b = '\x01';
        plVar8 = (longlong *)(param_1[4] + 0x88);
        plVar9 = param_1 + 0xd;
        for (lVar4 = 7; lVar4 != 0; lVar4 = lVar4 + -1) {
          *plVar9 = *plVar8;
          plVar8 = plVar8 + 1;
          plVar9 = plVar9 + 1;
        }
        while ((((cVar2 = FUN_008ff090(*(undefined4 *)(param_1[4] + 0xa0)), cVar2 == '\0' &&
                 (*(int *)(param_1[4] + 0xa0) != 0x5b)) && (*(int *)(param_1[4] + 0xa0) != 0x3e)) &&
               (*(int *)(param_1[4] + 0xa0) != 0x9c))) {
          (**(code **)(*(longlong *)param_1[4] + 0x28))((longlong *)param_1[4]);
          (**(code **)(*(longlong *)param_1[0x15] + 0x10))
                    ((longlong *)param_1[0x15],*(undefined4 *)(param_1[4] + 0x28));
          if (local_2b != '\0') {
            local_2b = '\0';
          }
        }
        plVar8 = (longlong *)(param_1[4] + 0x10);
        plVar9 = param_1 + 6;
        for (lVar4 = 7; lVar4 != 0; lVar4 = lVar4 + -1) {
          *plVar9 = *plVar8;
          plVar8 = plVar8 + 1;
          plVar9 = plVar9 + 1;
        }
      }
    }
    else if (bVar1 == 5) {
      while (cVar2 = FUN_008ff090(*(undefined4 *)(param_1[4] + 0xa0)), cVar2 != '\0') {
        (**(code **)(*(longlong *)param_1[4] + 0x28))((longlong *)param_1[4]);
      }
      plVar8 = (longlong *)param_1[4];
      if ((int)plVar8[0x14] == 0x5b) {
        *(undefined1 *)(param_1 + 0x14) = 1;
        (**(code **)(*(longlong *)param_1[4] + 0x28))((longlong *)param_1[4]);
        plVar8 = (longlong *)(param_1[4] + 0x88);
        plVar9 = param_1 + 0xd;
        for (lVar4 = 7; lVar4 != 0; lVar4 = lVar4 + -1) {
          *plVar9 = *plVar8;
          plVar8 = plVar8 + 1;
          plVar9 = plVar9 + 1;
        }
        local_37 = '\0';
        local_2d = '\0';
        local_29 = '\0';
        local_2a = '\0';
        local_35 = '\0';
        local_36 = '\0';
        local_2c = '\0';
        local_3d = '\0';
        while (plVar8 = (longlong *)param_1[4], (int)plVar8[0x14] != 0x9c) {
          (**(code **)(*plVar8 + 0x28))(plVar8);
          if (local_2a != '\0') {
            local_2a = '\0';
            local_35 = '\0';
            if (*(int *)(param_1[4] + 0xa0) != 0x3e) {
              plVar8 = (longlong *)(param_1[4] + 0x10);
              plVar9 = param_1 + 6;
              for (lVar4 = 7; lVar4 != 0; lVar4 = lVar4 + -1) {
                *plVar9 = *plVar8;
                plVar8 = plVar8 + 1;
                plVar9 = plVar9 + 1;
              }
              *(undefined1 *)(param_1 + 3) = 99;
              FUN_00414b90(param_1 + 2,&DAT_00964600);
              return;
            }
          }
          if (((local_35 != '\0') && (*(int *)(param_1[4] + 0x28) == 0x2d)) &&
             (*(int *)(param_1[4] + 0xa0) == 0x2d)) {
            local_2a = '\x01';
          }
          if (((local_36 != '\0') && (*(int *)(param_1[4] + 0x28) == 0x3f)) &&
             (*(int *)(param_1[4] + 0xa0) == 0x3e)) {
            local_36 = '\0';
          }
          if ((local_29 != '\0') && (local_29 = '\0', *(int *)(param_1[4] + 0x28) == 0x2d)) {
            local_35 = '\x01';
          }
          if ((local_2d != '\0') && (local_2d = '\0', *(int *)(param_1[4] + 0x28) == 0x2d)) {
            local_29 = '\x01';
          }
          if (local_37 != '\0') {
            local_37 = '\0';
            if (*(int *)(param_1[4] + 0x28) == 0x21) {
              local_2d = '\x01';
            }
            else if (*(int *)(param_1[4] + 0x28) == 0x3f) {
              local_36 = '\x01';
            }
          }
          if (local_2c == '\0') {
            if (local_3d == '\0') {
              if (local_36 == '\0' && local_35 == '\0') {
                iVar7 = *(int *)(param_1[4] + 0x28);
                if (iVar7 == 0x22) {
                  local_2c = '\x01';
                }
                else if (iVar7 == 0x27) {
                  local_3d = '\x01';
                }
                else if (iVar7 == 0x3c) {
                  local_37 = '\x01';
                }
                else if (iVar7 == 0x5d) {
                  plVar8 = (longlong *)(param_1[4] + 0xc0);
                  plVar9 = param_1 + 6;
                  for (lVar4 = 7; lVar4 != 0; lVar4 = lVar4 + -1) {
                    *plVar9 = *plVar8;
                    plVar8 = plVar8 + 1;
                    plVar9 = plVar9 + 1;
                  }
                  return;
                }
              }
            }
            else {
              local_3d = *(int *)(param_1[4] + 0x28) != 0x27;
            }
          }
          else {
            local_2c = *(int *)(param_1[4] + 0x28) != 0x22;
          }
          (**(code **)(*(longlong *)param_1[0x15] + 0x10))
                    ((longlong *)param_1[0x15],*(undefined4 *)(param_1[4] + 0x28));
        }
        if (*(int *)(param_1[4] + 0xa0) == 0x5d) {
          (**(code **)(*(longlong *)param_1[4] + 0x28))((longlong *)param_1[4]);
        }
        else {
          plVar8 = (longlong *)(param_1[4] + 0x10);
          plVar9 = param_1 + 6;
          for (lVar4 = 7; lVar4 != 0; lVar4 = lVar4 + -1) {
            *plVar9 = *plVar8;
            plVar8 = plVar8 + 1;
            plVar9 = plVar9 + 1;
          }
          *(undefined1 *)(param_1 + 3) = 0x5e;
          FUN_00414b90(param_1 + 2,&DAT_0096460c);
        }
      }
      else if ((int)plVar8[0x14] == 0x9c) {
        (**(code **)(*plVar8 + 0x28))(plVar8);
        plVar8 = (longlong *)(param_1[4] + 0xc0);
        plVar9 = param_1 + 6;
        for (lVar4 = 7; lVar4 != 0; lVar4 = lVar4 + -1) {
          *plVar9 = *plVar8;
          plVar8 = plVar8 + 1;
          plVar9 = plVar9 + 1;
        }
        *(undefined1 *)(param_1 + 0x14) = 0;
      }
      else {
        (**(code **)(*plVar8 + 0x28))(plVar8);
        plVar8 = (longlong *)(param_1[4] + 0x10);
        plVar9 = param_1 + 6;
        for (lVar4 = 7; lVar4 != 0; lVar4 = lVar4 + -1) {
          *plVar9 = *plVar8;
          plVar8 = plVar8 + 1;
          plVar9 = plVar9 + 1;
        }
        *(undefined1 *)(param_1 + 3) = 0x4e;
        FUN_00414b90(param_1 + 2,&LAB_00964614);
      }
    }
  }
  return;
}


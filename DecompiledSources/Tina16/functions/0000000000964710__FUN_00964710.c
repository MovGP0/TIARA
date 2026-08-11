/* Ghidra address: 00964710 */
/* Ghidra symbol: FUN_00964710 */


void FUN_00964710(longlong param_1)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_88 [40];
  undefined1 *local_60;
  int *local_50;
  int *local_48;
  int *local_40;
  int *local_38;
  int local_30;
  
  local_60 = auStack_88;
  if (*(char *)(param_1 + 0xab) == '\a') {
    return;
  }
  (**(code **)(**(longlong **)(param_1 + 0x98) + 0x20))(*(longlong **)(param_1 + 0x98));
  *(undefined1 *)(param_1 + 0xab) = 9;
  *(undefined1 *)(param_1 + 0x18) = 0;
  FUN_00414520(param_1 + 0x10);
  puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x88);
  puVar8 = (undefined8 *)(param_1 + 0x60);
  for (lVar3 = 7; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 1;
  }
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x28))(*(longlong **)(param_1 + 0x20));
  if (*(char *)(param_1 + 0xa9) != '\0') {
    iVar5 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x28);
    if (iVar5 == 0x9c) {
      *(undefined1 *)(param_1 + 0xab) = 7;
      puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x10);
      puVar8 = (undefined8 *)(param_1 + 0x28);
      for (lVar3 = 7; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar8 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
      }
      *(undefined1 *)(param_1 + 0x18) = 0x67;
      *(undefined1 *)(param_1 + 0xa9) = 0;
      return;
    }
    cVar1 = FUN_008ff090(iVar5);
    if (cVar1 != '\0') {
      *(undefined1 *)(param_1 + 0xab) = 0x13;
      (**(code **)(**(longlong **)(param_1 + 0x98) + 0x10))
                (*(longlong **)(param_1 + 0x98),
                 *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x28));
      while (cVar1 = FUN_008ff090(*(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0xa0)),
            cVar1 != '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x20) + 0x28))(*(longlong **)(param_1 + 0x20));
        (**(code **)(**(longlong **)(param_1 + 0x98) + 0x10))
                  (*(longlong **)(param_1 + 0x98),
                   *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x28));
      }
      puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x10);
      puVar8 = (undefined8 *)(param_1 + 0x28);
      for (lVar3 = 7; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar8 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
      }
      return;
    }
    *(undefined1 *)(param_1 + 0xab) = 0xe;
    while( true ) {
      if (*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) == 0x9c) {
        puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x10);
        puVar8 = (undefined8 *)(param_1 + 0x28);
        for (lVar3 = 7; lVar3 != 0; lVar3 = lVar3 + -1) {
          *puVar8 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar8 = puVar8 + 1;
        }
        *(undefined1 *)(param_1 + 0x18) = 0x67;
        FUN_00414b90(param_1 + 0x10,&DAT_009657c4);
        *(undefined1 *)(param_1 + 0xa9) = 0;
        return;
      }
      lVar3 = *(longlong *)(param_1 + 0x20);
      if ((*(int *)(lVar3 + 0x28) == 0x3f) && (*(int *)(lVar3 + 0xa0) == 0x3e)) break;
      (**(code **)(**(longlong **)(param_1 + 0x98) + 0x10))
                (*(longlong **)(param_1 + 0x98),
                 *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x28));
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0x28))(*(longlong **)(param_1 + 0x20));
    }
    puVar6 = (undefined8 *)(lVar3 + 0xc0);
    puVar8 = (undefined8 *)(param_1 + 0x28);
    for (lVar4 = 7; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    }
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x28))(*(longlong **)(param_1 + 0x20));
    *(undefined1 *)(param_1 + 0xa9) = 0;
    return;
  }
  plVar7 = *(longlong **)(param_1 + 0x20);
  iVar5 = (int)plVar7[5];
  if (iVar5 < 0x3d) {
    if (iVar5 == 0x3c) {
      if ((int)plVar7[0x14] != 0x21) {
        if ((int)plVar7[0x14] == 0x3f) {
          (**(code **)(*plVar7 + 0x28))(plVar7);
          *(undefined1 *)(param_1 + 0xab) = 0xf;
          puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x88);
          puVar8 = (undefined8 *)(param_1 + 0x60);
          for (lVar3 = 7; lVar3 != 0; lVar3 = lVar3 + -1) {
            *puVar8 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar8 = puVar8 + 1;
          }
          while( true ) {
            iVar5 = *(int *)(*(longlong *)(param_1 + 0x20) + 0xa0);
            uVar2 = iVar5 - 0x20;
            if (uVar2 < 0x80) {
              bVar10 = ((byte)(&DAT_009657c8)[(longlong)(ulonglong)uVar2 >> 3] >>
                        ((ulonglong)uVar2 & 7) & 1) != 0;
            }
            else {
              bVar10 = false;
            }
            if ((bVar10) || (cVar1 = FUN_008ff090(iVar5), cVar1 != '\0')) break;
            (**(code **)(**(longlong **)(param_1 + 0x20) + 0x28))(*(longlong **)(param_1 + 0x20));
            (**(code **)(**(longlong **)(param_1 + 0x98) + 0x10))
                      (*(longlong **)(param_1 + 0x98),
                       *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x28));
          }
          puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x10);
          puVar8 = (undefined8 *)(param_1 + 0x28);
          for (lVar3 = 7; lVar3 != 0; lVar3 = lVar3 + -1) {
            *puVar8 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar8 = puVar8 + 1;
          }
          *(undefined1 *)(param_1 + 0xa9) = 1;
          return;
        }
        plVar7 = plVar7 + 2;
        plVar9 = (longlong *)(param_1 + 0x28);
        for (lVar3 = 7; lVar3 != 0; lVar3 = lVar3 + -1) {
          *plVar9 = *plVar7;
          plVar7 = plVar7 + 1;
          plVar9 = plVar9 + 1;
        }
        *(undefined1 *)(param_1 + 0x18) = 0x7d;
        FUN_00414b90(param_1 + 0x10,&DAT_00965864);
        return;
      }
      (**(code **)(*plVar7 + 0x28))(plVar7);
      plVar7 = *(longlong **)(param_1 + 0x20);
      iVar5 = (int)plVar7[0x14];
      if (iVar5 == 0x2d) {
        *(undefined1 *)(param_1 + 0xab) = 1;
        (**(code **)(**(longlong **)(param_1 + 0x20) + 0x28))(*(longlong **)(param_1 + 0x20));
        plVar7 = *(longlong **)(param_1 + 0x20);
        if ((int)plVar7[0x14] != 0x2d) {
          puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x10);
          puVar8 = (undefined8 *)(param_1 + 0x28);
          for (lVar3 = 7; lVar3 != 0; lVar3 = lVar3 + -1) {
            *puVar8 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar8 = puVar8 + 1;
          }
          *(undefined1 *)(param_1 + 0x18) = 0x35;
          FUN_00414b90(param_1 + 0x10,L"<!--");
          return;
        }
        (**(code **)(*plVar7 + 0x28))(plVar7);
        puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x88);
        puVar8 = (undefined8 *)(param_1 + 0x60);
        for (lVar3 = 7; lVar3 != 0; lVar3 = lVar3 + -1) {
          *puVar8 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar8 = puVar8 + 1;
        }
        do {
          plVar7 = *(longlong **)(param_1 + 0x20);
          if ((int)plVar7[0x14] == 0x9c) {
            puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x10);
            puVar8 = (undefined8 *)(param_1 + 0x28);
            for (lVar3 = 7; lVar3 != 0; lVar3 = lVar3 + -1) {
              *puVar8 = *puVar6;
              puVar6 = puVar6 + 1;
              puVar8 = puVar8 + 1;
            }
            *(undefined1 *)(param_1 + 0x18) = 99;
            FUN_00414b90(param_1 + 0x10,&DAT_009657e4);
            return;
          }
          (**(code **)(*plVar7 + 0x28))(plVar7);
          if (*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) == 0x2d) {
            puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xc0);
            puVar8 = (undefined8 *)(param_1 + 0x28);
            for (lVar3 = 7; lVar3 != 0; lVar3 = lVar3 + -1) {
              *puVar8 = *puVar6;
              puVar6 = puVar6 + 1;
              puVar8 = puVar8 + 1;
            }
            (**(code **)(**(longlong **)(param_1 + 0x20) + 0x28))(*(longlong **)(param_1 + 0x20));
            plVar7 = *(longlong **)(param_1 + 0x20);
            if ((int)plVar7[5] == 0x2d) {
              if ((int)plVar7[0x14] == 0x3e) {
                (**(code **)(*plVar7 + 0x28))(plVar7);
                return;
              }
              plVar7 = plVar7 + 2;
              plVar9 = (longlong *)(param_1 + 0x28);
              for (lVar3 = 7; lVar3 != 0; lVar3 = lVar3 + -1) {
                *plVar9 = *plVar7;
                plVar7 = plVar7 + 1;
                plVar9 = plVar9 + 1;
              }
              *(undefined1 *)(param_1 + 0x18) = 0x39;
              FUN_00414b90(param_1 + 0x10,&DAT_009657dc);
              return;
            }
            if ((int)plVar7[5] == 0x9c) {
              plVar7 = plVar7 + 0x18;
              plVar9 = (longlong *)(param_1 + 0x28);
              for (lVar3 = 7; lVar3 != 0; lVar3 = lVar3 + -1) {
                *plVar9 = *plVar7;
                plVar7 = plVar7 + 1;
                plVar9 = plVar9 + 1;
              }
              *(undefined1 *)(param_1 + 0x18) = 99;
              FUN_00414b90(param_1 + 0x10,&DAT_009657e4);
              return;
            }
            (**(code **)(**(longlong **)(param_1 + 0x98) + 0x10))
                      (*(longlong **)(param_1 + 0x98),0x2d);
          }
          (**(code **)(**(longlong **)(param_1 + 0x98) + 0x10))
                    (*(longlong **)(param_1 + 0x98),
                     *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x28));
        } while( true );
      }
      if (iVar5 == 0x5b) {
        *(undefined1 *)(param_1 + 0xab) = 4;
        (**(code **)(**(longlong **)(param_1 + 0x20) + 0x28))(*(longlong **)(param_1 + 0x20));
        puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x10);
        puVar8 = (undefined8 *)(param_1 + 0x28);
        for (lVar3 = 7; lVar3 != 0; lVar3 = lVar3 + -1) {
          *puVar8 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar8 = puVar8 + 1;
        }
        return;
      }
      if (iVar5 == 0x41) {
        *(undefined1 *)(param_1 + 0xab) = 0;
        (**(code **)(**(longlong **)(param_1 + 0x20) + 0x28))(*(longlong **)(param_1 + 0x20));
        iVar5 = 6;
        local_48 = &DAT_01e329dc;
        do {
          plVar7 = *(longlong **)(param_1 + 0x20);
          if ((int)plVar7[0x14] != *local_48) {
            plVar7 = plVar7 + 2;
            plVar9 = (longlong *)(param_1 + 0x28);
            for (lVar3 = 7; lVar3 != 0; lVar3 = lVar3 + -1) {
              *plVar9 = *plVar7;
              plVar7 = plVar7 + 1;
              plVar9 = plVar9 + 1;
            }
            *(undefined1 *)(param_1 + 0x18) = 0x6a;
            FUN_00414b90(param_1 + 0x10,L"<!ATTLIST");
            return;
          }
          (**(code **)(*plVar7 + 0x28))(plVar7);
          local_48 = local_48 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        return;
      }
      if (iVar5 != 0x45) {
        if (iVar5 != 0x4e) {
          plVar7 = plVar7 + 2;
          plVar9 = (longlong *)(param_1 + 0x28);
          for (lVar3 = 7; lVar3 != 0; lVar3 = lVar3 + -1) {
            *plVar9 = *plVar7;
            plVar7 = plVar7 + 1;
            plVar9 = plVar9 + 1;
          }
          *(undefined1 *)(param_1 + 0x18) = 0x7d;
          return;
        }
        *(undefined1 *)(param_1 + 0xab) = 0xb;
        (**(code **)(**(longlong **)(param_1 + 0x20) + 0x28))(*(longlong **)(param_1 + 0x20));
        iVar5 = 7;
        local_50 = &DAT_01e329f4;
        do {
          plVar7 = *(longlong **)(param_1 + 0x20);
          if ((int)plVar7[0x14] != *local_50) {
            plVar7 = plVar7 + 2;
            plVar9 = (longlong *)(param_1 + 0x28);
            for (lVar3 = 7; lVar3 != 0; lVar3 = lVar3 + -1) {
              *plVar9 = *plVar7;
              plVar7 = plVar7 + 1;
              plVar9 = plVar9 + 1;
            }
            *(undefined1 *)(param_1 + 0x18) = 0x8a;
            FUN_00414b90(param_1 + 0x10,L"<!NOTATION");
            return;
          }
          (**(code **)(*plVar7 + 0x28))(plVar7);
          local_50 = local_50 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        return;
      }
      (**(code **)(*plVar7 + 0x28))(plVar7);
      iVar5 = *(int *)(*(longlong *)(param_1 + 0x20) + 0xa0);
      if (iVar5 == 0x4c) {
        *(undefined1 *)(param_1 + 0xab) = 6;
        (**(code **)(**(longlong **)(param_1 + 0x20) + 0x28))(*(longlong **)(param_1 + 0x20));
        iVar5 = 5;
        local_38 = &DAT_01e329c8;
        do {
          plVar7 = *(longlong **)(param_1 + 0x20);
          if ((int)plVar7[0x14] != *local_38) {
            plVar7 = plVar7 + 2;
            plVar9 = (longlong *)(param_1 + 0x28);
            for (lVar3 = 7; lVar3 != 0; lVar3 = lVar3 + -1) {
              *plVar9 = *plVar7;
              plVar7 = plVar7 + 1;
              plVar9 = plVar9 + 1;
            }
            *(undefined1 *)(param_1 + 0x18) = 0x6d;
            FUN_00414b90(param_1 + 0x10,L"<!ELEMENT");
            return;
          }
          (**(code **)(*plVar7 + 0x28))(plVar7);
          local_38 = local_38 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        return;
      }
      if (iVar5 == 0x4e) {
        *(undefined1 *)(param_1 + 0xab) = 8;
        (**(code **)(**(longlong **)(param_1 + 0x20) + 0x28))(*(longlong **)(param_1 + 0x20));
        iVar5 = 4;
        local_40 = &DAT_01e329b8;
        do {
          plVar7 = *(longlong **)(param_1 + 0x20);
          if ((int)plVar7[0x14] != *local_40) {
            plVar7 = plVar7 + 2;
            plVar9 = (longlong *)(param_1 + 0x28);
            for (lVar3 = 7; lVar3 != 0; lVar3 = lVar3 + -1) {
              *plVar9 = *plVar7;
              plVar7 = plVar7 + 1;
              plVar9 = plVar9 + 1;
            }
            *(undefined1 *)(param_1 + 0x18) = 0x6e;
            FUN_00414b90(param_1 + 0x10,L"<!ENTITY");
            return;
          }
          (**(code **)(*plVar7 + 0x28))(plVar7);
          local_40 = local_40 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        return;
      }
      puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x10);
      puVar8 = (undefined8 *)(param_1 + 0x28);
      for (lVar3 = 7; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar8 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
      }
      *(undefined1 *)(param_1 + 0x18) = 0x7d;
      return;
    }
    if (iVar5 < 0x29) {
      if (iVar5 != 0x28) {
        if ((iVar5 == 0x22) || (iVar5 == 0x27)) {
          *(undefined1 *)(param_1 + 0xab) = 0x10;
          local_30 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x28);
          (**(code **)(**(longlong **)(param_1 + 0x98) + 0x10))
                    (*(longlong **)(param_1 + 0x98),local_30);
          while( true ) {
            iVar5 = *(int *)(*(longlong *)(param_1 + 0x20) + 0xa0);
            if (iVar5 == local_30) {
              (**(code **)(**(longlong **)(param_1 + 0x20) + 0x28))(*(longlong **)(param_1 + 0x20));
              (**(code **)(**(longlong **)(param_1 + 0x98) + 0x10))
                        (*(longlong **)(param_1 + 0x98),
                         *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x28));
              puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x10);
              puVar8 = (undefined8 *)(param_1 + 0x28);
              for (lVar3 = 7; lVar3 != 0; lVar3 = lVar3 + -1) {
                *puVar8 = *puVar6;
                puVar6 = puVar6 + 1;
                puVar8 = puVar8 + 1;
              }
              return;
            }
            if (iVar5 == 0x9c) break;
            (**(code **)(**(longlong **)(param_1 + 0x20) + 0x28))(*(longlong **)(param_1 + 0x20));
            (**(code **)(**(longlong **)(param_1 + 0x98) + 0x10))
                      (*(longlong **)(param_1 + 0x98),
                       *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x28));
          }
          puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x10);
          puVar8 = (undefined8 *)(param_1 + 0x28);
          for (lVar3 = 7; lVar3 != 0; lVar3 = lVar3 + -1) {
            *puVar8 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar8 = puVar8 + 1;
          }
          *(undefined1 *)(param_1 + 0x18) = 0x5b;
          FUN_00415e60(param_1 + 0x10,(undefined2)local_30);
          return;
        }
        goto LAB_009655c0;
      }
    }
    else {
      if (iVar5 == 0x29) {
        *(undefined1 *)(param_1 + 0xab) = 0xc;
        (**(code **)(**(longlong **)(param_1 + 0x98) + 0x10))
                  (*(longlong **)(param_1 + 0x98),
                   *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x28));
        plVar7 = *(longlong **)(param_1 + 0x20);
        uVar2 = (int)plVar7[0x14] - 0x28;
        if (uVar2 < 0x20) {
          bVar10 = (1 << ((byte)uVar2 & 0x1f) & 0x80000cU) != 0;
        }
        else {
          bVar10 = false;
        }
        if (bVar10) {
          (**(code **)(*plVar7 + 0x28))(plVar7);
          (**(code **)(**(longlong **)(param_1 + 0x98) + 0x10))
                    (*(longlong **)(param_1 + 0x98),
                     *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x28));
        }
        puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x10);
        puVar8 = (undefined8 *)(param_1 + 0x28);
        for (lVar3 = 7; lVar3 != 0; lVar3 = lVar3 + -1) {
          *puVar8 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar8 = puVar8 + 1;
        }
        return;
      }
      if (iVar5 != 0x2c) goto LAB_009655c0;
    }
LAB_00965476:
    *(undefined1 *)(param_1 + 0xab) = 0xc;
    (**(code **)(**(longlong **)(param_1 + 0x98) + 0x10))
              (*(longlong **)(param_1 + 0x98),*(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x28))
    ;
    puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x10);
    puVar8 = (undefined8 *)(param_1 + 0x28);
    for (lVar3 = 7; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    }
  }
  else {
    if (iVar5 < 0x5e) {
      if (iVar5 == 0x5d) {
        *(undefined1 *)(param_1 + 0xab) = 2;
        plVar7 = *(longlong **)(param_1 + 0x20);
        if ((int)plVar7[0x14] == 0x5d) {
          (**(code **)(*plVar7 + 0x28))(plVar7);
          if (*(int *)(*(longlong *)(param_1 + 0x20) + 0xa0) == 0x3e) {
            puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x88);
            puVar8 = (undefined8 *)(param_1 + 0x60);
            for (lVar3 = 7; lVar3 != 0; lVar3 = lVar3 + -1) {
              *puVar8 = *puVar6;
              puVar6 = puVar6 + 1;
              puVar8 = puVar8 + 1;
            }
            (**(code **)(**(longlong **)(param_1 + 0x20) + 0x28))(*(longlong **)(param_1 + 0x20));
          }
          else {
            *(undefined1 *)(param_1 + 0x18) = 0x41;
            FUN_00414b90(param_1 + 0x10,&DAT_00965870);
          }
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 0x41;
          FUN_00414b90(param_1 + 0x10,&DAT_00965870);
        }
        puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x10);
        puVar8 = (undefined8 *)(param_1 + 0x28);
        for (lVar3 = 7; lVar3 != 0; lVar3 = lVar3 + -1) {
          *puVar8 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar8 = puVar8 + 1;
        }
        return;
      }
      if (iVar5 == 0x3e) {
        *(undefined1 *)(param_1 + 0xab) = 5;
        puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x10);
        puVar8 = (undefined8 *)(param_1 + 0x28);
        for (lVar3 = 7; lVar3 != 0; lVar3 = lVar3 + -1) {
          *puVar8 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar8 = puVar8 + 1;
        }
        return;
      }
      if (iVar5 == 0x5b) {
        *(undefined1 *)(param_1 + 0xab) = 3;
        puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x10);
        puVar8 = (undefined8 *)(param_1 + 0x28);
        for (lVar3 = 7; lVar3 != 0; lVar3 = lVar3 + -1) {
          *puVar8 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar8 = puVar8 + 1;
        }
        return;
      }
    }
    else {
      if (iVar5 == 0x7c) goto LAB_00965476;
      if (iVar5 == 0x9c) {
        *(undefined1 *)(param_1 + 0xab) = 7;
        puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x10);
        puVar8 = (undefined8 *)(param_1 + 0x28);
        for (lVar3 = 7; lVar3 != 0; lVar3 = lVar3 + -1) {
          *puVar8 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar8 = puVar8 + 1;
        }
        return;
      }
    }
LAB_009655c0:
    cVar1 = FUN_008ff090();
    if (cVar1 == '\0') {
      if (*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) == 0x25) {
        *(undefined1 *)(param_1 + 0xab) = 10;
      }
      else {
        *(undefined1 *)(param_1 + 0xab) = 0x12;
      }
      (**(code **)(**(longlong **)(param_1 + 0x98) + 0x10))
                (*(longlong **)(param_1 + 0x98),
                 *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x28));
      do {
        iVar5 = *(int *)(*(longlong *)(param_1 + 0x20) + 0xa0);
        uVar2 = iVar5 - 0x20;
        if (uVar2 < 0x80) {
          bVar10 = ((byte)(&DAT_0096587c)[(longlong)(ulonglong)uVar2 >> 3] >> ((ulonglong)uVar2 & 7)
                   & 1) != 0;
        }
        else {
          bVar10 = false;
        }
        if ((bVar10) || (cVar1 = FUN_008ff090(iVar5), cVar1 != '\0')) break;
        (**(code **)(**(longlong **)(param_1 + 0x20) + 0x28))(*(longlong **)(param_1 + 0x20));
        (**(code **)(**(longlong **)(param_1 + 0x98) + 0x10))
                  (*(longlong **)(param_1 + 0x98),
                   *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x28));
      } while (*(int *)(*(longlong *)(param_1 + 0x20) + 0x28) != 0x3b);
    }
    else {
      *(undefined1 *)(param_1 + 0xab) = 0x13;
      (**(code **)(**(longlong **)(param_1 + 0x98) + 0x10))
                (*(longlong **)(param_1 + 0x98),
                 *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x28));
      while (cVar1 = FUN_008ff090(*(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0xa0)),
            cVar1 != '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x20) + 0x28))(*(longlong **)(param_1 + 0x20));
        (**(code **)(**(longlong **)(param_1 + 0x98) + 0x10))
                  (*(longlong **)(param_1 + 0x98),
                   *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x28));
      }
    }
    puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x10);
    puVar8 = (undefined8 *)(param_1 + 0x28);
    for (lVar3 = 7; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    }
  }
  return;
}


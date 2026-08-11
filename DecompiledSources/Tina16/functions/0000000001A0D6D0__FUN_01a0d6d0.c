/* Ghidra address: 01a0d6d0 */
/* Ghidra symbol: FUN_01a0d6d0 */


bool FUN_01a0d6d0(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined7 uVar9;
  double *pdVar5;
  double *pdVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar10;
  bool bVar11;
  bool bVar12;
  bool local_79;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  double *local_38;
  double *local_30;
  
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  iVar2 = FUN_01cfd2d0(param_2);
  iVar3 = FUN_01cfd2d0(param_3);
  local_79 = iVar2 == iVar3;
  if (local_79) {
    for (iVar2 = 0; iVar3 = FUN_01cfd2d0(param_2), (local_79 & iVar2 < iVar3) != 0;
        iVar2 = iVar2 + 1) {
      uVar4 = (**(code **)(*param_2 + 0x2d0))(param_2,iVar2,&local_30);
      (**(code **)(*param_3 + 0x2d0))(param_3,iVar2,&local_38);
      uVar10 = (ulonglong)uVar4 & 0xff;
      if (uVar10 < 10) {
        if (uVar10 == 9) {
          FUN_004169a0(&local_50,local_30);
          lVar7 = local_50;
          FUN_004169a0(&local_58,local_38);
          if (lVar7 == local_58) {
            local_79 = true;
          }
          else if ((lVar7 == 0) || (local_58 == 0)) {
            local_79 = false;
          }
          else {
            iVar3 = FUN_0043e420(lVar7,local_58);
            local_79 = iVar3 == 0;
          }
        }
        else if (uVar10 < 6) {
          if (uVar10 == 5) {
            uVar9 = (undefined7)((ulonglong)local_30 >> 8);
            if (*(char *)local_30 == *(char *)local_38) {
              if (*(byte *)local_30 < 8) {
                bVar11 = ((int)CONCAT71(uVar9,1) << (*(byte *)local_30 & 0x1f) & 0xfeU) != 0;
              }
              else {
                bVar11 = false;
              }
              if (!bVar11) goto LAB_01a0d9dd;
LAB_01a0d9ed:
              local_79 = true;
            }
            else {
LAB_01a0d9dd:
              if (*(char *)local_30 == '\t') goto LAB_01a0d9ed;
              local_79 = false;
            }
            if (*(byte *)local_30 < 8) {
              bVar11 = ((int)CONCAT71(uVar9,1) << (*(byte *)local_30 & 0x1f) & 0xfeU) != 0;
            }
            else {
              bVar11 = false;
            }
            if (bVar11) {
              if ((local_79 == false) ||
                 (cVar1 = FUN_0043e2c0(*(undefined8 *)((longlong)local_30 + 1),
                                       *(undefined8 *)((longlong)local_38 + 1),
                                       *(undefined2 *)((longlong)local_30 + 0x11)), cVar1 == '\0'))
              {
                local_79 = false;
              }
              else {
                local_79 = true;
              }
            }
            if (*(char *)local_30 == '\t') {
              if ((local_79 == false) ||
                 (cVar1 = FUN_0043e2c0(*(undefined8 *)((longlong)local_30 + 9),
                                       *(undefined8 *)((longlong)local_38 + 9),
                                       *(int *)((longlong)local_30 + 1) << 4), cVar1 == '\0')) {
                local_79 = false;
              }
              else {
                local_79 = true;
              }
            }
          }
          else if (uVar10 == 1) {
            iVar3 = FUN_00414f50(local_30,local_38,(ulonglong)*(byte *)local_30 + 1);
            local_79 = iVar3 == 0;
          }
          else if (uVar10 == 2) {
            local_79 = *(short *)local_30 == *(short *)local_38;
          }
          else if (uVar10 == 3) {
            local_79 = *local_30 == *local_38;
          }
          else if (uVar10 == 4) {
            iVar3 = FUN_00414f50(local_30,local_38,(ulonglong)*(byte *)local_30 + 1);
            if (((iVar3 == 0) &&
                (iVar3 = FUN_00414f50((longlong)local_30 + 0x15,(longlong)local_38 + 0x15,
                                      (ulonglong)*(byte *)((longlong)local_30 + 0x15) + 1),
                iVar3 == 0)) &&
               (cVar1 = FUN_0043e2c0(*(undefined8 *)(*(longlong *)((longlong)local_30 + 0x26) + 9),
                                     *(undefined8 *)(*(longlong *)((longlong)local_38 + 0x26) + 9),
                                     *(undefined2 *)
                                      (*(longlong *)((longlong)local_30 + 0x26) + 0x23)),
               cVar1 != '\0')) {
              local_79 = true;
            }
            else {
              local_79 = false;
            }
          }
        }
        else if (uVar10 == 6) {
          local_79 = *local_30 == *local_38;
        }
        else if (uVar10 == 7) {
          iVar3 = FUN_00414f50(local_30,local_38,(ulonglong)*(byte *)local_30 + 1);
          if (((iVar3 == 0) &&
              (iVar3 = FUN_00414f50((longlong)local_30 + 0x15,(longlong)local_38 + 0x15,
                                    (ulonglong)*(byte *)((longlong)local_30 + 0x15) + 1), iVar3 == 0
              )) && (cVar1 = FUN_0043e2c0(*(undefined8 *)
                                           (*(longlong *)((longlong)local_30 + 0x26) + 9),
                                          *(undefined8 *)
                                           (*(longlong *)((longlong)local_38 + 0x26) + 9),
                                          *(undefined2 *)
                                           (*(longlong *)((longlong)local_30 + 0x26) + 0x23)),
                    cVar1 != '\0')) {
            local_79 = true;
          }
          else {
            local_79 = false;
          }
          if (*(char *)((longlong)local_30 + 0x2f) != '\0') {
            if (local_79 == false) {
              local_79 = false;
            }
            else {
              (**(code **)(*(longlong *)local_30[6] + 0x38))((longlong *)local_30[6],&local_40);
              lVar7 = local_40;
              (**(code **)(*(longlong *)local_38[6] + 0x38))((longlong *)local_38[6],&local_48);
              if (lVar7 == local_48) {
                local_79 = true;
              }
              else if ((lVar7 == 0) || (local_48 == 0)) {
                local_79 = false;
              }
              else {
                iVar3 = FUN_0043e420(lVar7,local_48);
                local_79 = iVar3 == 0;
              }
            }
          }
        }
        else if (uVar10 == 8) {
          local_79 = *(char *)local_30 == *(char *)local_38;
        }
      }
      else if (uVar10 < 0xe) {
        if (uVar10 == 10) {
          if ((((*(char *)local_30 == *(char *)local_38) &&
               (*(int *)(local_30 + 3) == *(int *)(local_38 + 3))) && (*(char *)local_30 == '\x01'))
             && (*(int *)((longlong)local_30[1] + 0x10) == *(int *)((longlong)local_38[1] + 0x10)))
          {
            local_79 = true;
          }
          else {
            local_79 = false;
          }
          for (iVar3 = 0; (local_79 & iVar3 < *(int *)((longlong)local_30[1] + 0x10)) != 0;
              iVar3 = iVar3 + 1) {
            pdVar5 = (double *)FUN_01d3aab0(local_30[1],iVar3);
            pdVar6 = (double *)FUN_01d3aab0(local_38[1],iVar3);
            if (*pdVar5 == *pdVar6) {
              lVar7 = FUN_01d3aab0(local_30[1],iVar3);
              lVar8 = FUN_01d3aab0(local_38[1],iVar3);
              if (*(char *)(lVar7 + 8) != *(char *)(lVar8 + 8)) goto LAB_01a0dd07;
              local_79 = true;
            }
            else {
LAB_01a0dd07:
              local_79 = false;
            }
          }
        }
        else if (uVar10 == 0xb) {
          if ((*(char *)(local_30 + 8) == *(char *)(local_38 + 8)) &&
             (*(char *)local_30 == *(char *)local_38)) {
            if (local_30[1] == 0.0) {
              bVar11 = false;
            }
            else {
              (**(code **)(*(longlong *)local_30[1] + 0x38))((longlong *)local_30[1],&local_60);
              lVar7 = local_60;
              (**(code **)(*(longlong *)local_38[1] + 0x38))((longlong *)local_38[1],&local_68);
              if (lVar7 == local_68) {
                bVar11 = true;
              }
              else if ((lVar7 == 0) || (local_68 == 0)) {
                bVar11 = false;
              }
              else {
                iVar3 = FUN_0043e420(lVar7,local_68);
                bVar11 = iVar3 == 0;
              }
            }
          }
          else {
            bVar11 = false;
          }
          if (*(byte *)(local_30 + 8) < 8) {
            bVar12 = ((int)CONCAT71((int7)((ulonglong)local_30 >> 8),1) <<
                      (*(byte *)(local_30 + 8) & 0x1f) & 3U) != 0;
          }
          else {
            bVar12 = false;
          }
          if (bVar12) {
            if ((bVar11) &&
               (cVar1 = FUN_0043e2c0(local_30[3],local_38[3],
                                     (ulonglong)*(ushort *)(local_30 + 2) << 3), cVar1 != '\0')) {
              local_79 = true;
            }
            else {
              local_79 = false;
            }
          }
          else if (((bVar11) && (iVar3 = FUN_004426f0(local_30[4],local_38[4]), iVar3 == 0)) &&
                  (cVar1 = FUN_0043e2c0(local_30[10],local_38[10],
                                        (ulonglong)*(ushort *)(local_30 + 9) << 3), cVar1 != '\0'))
          {
            local_79 = true;
          }
          else {
            local_79 = false;
          }
        }
        else {
          if (uVar10 == 0xc) goto LAB_01a0df58;
          if (uVar10 == 0xd) {
            if ((*local_30 == *local_38) && (*(char *)(local_30 + 1) == *(char *)(local_38 + 1))) {
              local_79 = true;
            }
            else {
              local_79 = false;
            }
          }
        }
      }
      else if (uVar10 - 0xe < 2) {
LAB_01a0df58:
        local_79 = true;
      }
      else if (uVar10 == 0x10) {
        local_79 = *local_30 == *local_38;
      }
      else if (uVar10 == 0x11) {
        (**(code **)(*(longlong *)*local_30 + 0x38))((longlong *)*local_30,&local_70);
        lVar7 = local_70;
        (**(code **)(*(longlong *)*local_38 + 0x38))((longlong *)*local_38,&local_78);
        if (lVar7 == local_78) {
          local_79 = true;
        }
        else if ((lVar7 == 0) || (local_78 == 0)) {
          local_79 = false;
        }
        else {
          iVar3 = FUN_0043e420(lVar7,local_78);
          local_79 = iVar3 == 0;
        }
      }
      else if (uVar10 - 0x12 < 3) goto LAB_01a0df58;
    }
  }
  FUN_00414560(&local_78,8);
  return local_79;
}


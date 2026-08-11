/* Ghidra address: 01654100 */
/* Ghidra symbol: FUN_01654100 */


void FUN_01654100(char *param_1,undefined8 param_2,longlong param_3,byte param_4)

{
  short sVar1;
  int iVar2;
  undefined8 in_RAX;
  undefined7 uVar3;
  int iVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  bool bVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  double dVar12;
  double dVar13;
  undefined4 uVar14;
  ulonglong in_stack_ffffffffffffff10;
  undefined8 *in_stack_ffffffffffffff18;
  int local_a0;
  int local_9c;
  double local_98;
  double local_90;
  undefined1 local_79 [17];
  short *local_68;
  double local_60;
  double local_58;
  undefined8 local_50 [5];
  
  local_68 = (short *)0x0;
  if ((byte)(param_4 - 8) < 8) {
    bVar8 = ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (param_4 - 8 & 0x1f) & 0x11U) != 0;
  }
  else {
    bVar8 = false;
  }
  if (!bVar8) {
    dVar12 = 0.0;
    dVar13 = 0.0;
    dVar9 = *(double *)(param_3 + 0x438);
    if ((*(byte *)(param_3 + 0x88) & 0x20) == 0) {
      if ((param_1[0x6c] != '\0') && (param_1[0x6d] != '\0')) {
        if ((*(byte *)(param_3 + 0x88) & 0x80) == 0) {
          dVar10 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),param_1[0xa0],
                                        param_1[0xa1],0);
          local_90 = *(double *)(param_3 + 0x3b8) * dVar10;
        }
        else {
          FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),param_1[0xa0],param_1[0xa1],0);
          local_90 = (double)FUN_016eebe0(param_2,param_3 + 0x1b8,1,*(short *)(param_1 + 0x98) + 3,0
                                         );
        }
      }
      cVar6 = '\x01';
      iVar7 = *(int *)(param_1 + 4);
      local_a0 = 0;
      if (-1 < iVar7 + -1) {
        do {
          (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))
                    (*(longlong **)(param_1 + 0x10),&local_68,local_a0);
          if (*local_68 == 0x49) {
            uVar11 = FUN_016ee520(param_2,*(undefined8 *)(param_3 + 0x118),*param_1 + cVar6 + '\x01'
                                  ,1,0);
            *(undefined8 *)(*(longlong *)(param_1 + 0x28) + (longlong)local_a0 * 8) = uVar11;
            cVar6 = cVar6 + '\x02';
          }
          else {
            iVar2 = 0;
            if (local_68 != (short *)0x0) {
              iVar2 = *(int *)(local_68 + -2);
            }
            local_9c = 1;
            iVar4 = 0;
            if (0 < iVar2) {
              do {
                iVar4 = local_9c;
                if (local_68[(longlong)local_9c + -1] == 0x5f) break;
                local_9c = local_9c + 1;
                iVar2 = iVar2 + -1;
                iVar4 = 0;
              } while (iVar2 != 0);
            }
            iVar4 = iVar4 + 1;
            iVar2 = 0;
            if (local_68 != (short *)0x0) {
              iVar2 = *(int *)(local_68 + -2);
            }
            iVar2 = iVar2 - iVar4;
            local_9c = 1;
            if (0 < iVar2) {
              do {
                lVar5 = FUN_00414de0(&local_68);
                *(short *)(lVar5 + -2 + (longlong)local_9c * 2) =
                     local_68[(longlong)(local_9c + iVar4) + -1];
                local_9c = local_9c + 1;
                iVar2 = iVar2 + -1;
              } while (iVar2 != 0);
            }
            iVar2 = 0;
            if (local_68 != (short *)0x0) {
              iVar2 = *(int *)(local_68 + -2);
            }
            FUN_004169f0(&local_68,iVar2 - iVar4);
            iVar4 = 0;
            iVar2 = 0;
            if (local_68 != (short *)0x0) {
              iVar2 = *(int *)(local_68 + -2);
            }
            local_9c = 1;
            if (0 < iVar2) {
              do {
                iVar4 = iVar4 * 10 + (uint)(ushort)local_68[(longlong)local_9c + -1] + -0x30;
                local_9c = local_9c + 1;
                iVar2 = iVar2 + -1;
              } while (iVar2 != 0);
            }
            uVar11 = FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),iVar4,0,0);
            *(undefined8 *)(*(longlong *)(param_1 + 0x28) + (longlong)local_a0 * 8) = uVar11;
            cVar6 = cVar6 + '\x01';
          }
          local_a0 = local_a0 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      uVar3 = (undefined7)((ulonglong)param_1 >> 8);
      if ((byte)param_1[0xc] < 8) {
        bVar8 = ((int)CONCAT71(uVar3,1) << (param_1[0xc] & 0x1fU) & 0x8cU) != 0;
      }
      else {
        bVar8 = false;
      }
      if (bVar8) {
        local_98 = (double)FUN_016586b0(param_2,param_3,*(undefined8 *)(param_1 + 0x50),1,
                                        *(undefined8 *)(param_1 + 0x28),param_1,param_4,
                                        in_stack_ffffffffffffff10 & 0xffffffffffffff00);
        if (param_1[0xc] == '\x03') {
          uVar11 = FUN_016eebe0(param_2,param_3 + 0x1b8,0,*(short *)(param_1 + 0x98) + 2,0);
          *(undefined8 *)(param_1 + 0x78) = uVar11;
          in_stack_ffffffffffffff18 = local_50;
          local_98 = (double)FUN_0164bac0(param_2,param_3,*(undefined8 *)(param_1 + 0x40),
                                          *(undefined2 *)(param_1 + 10),local_98,
                                          *(undefined8 *)(param_1 + 0x78),param_1[0x6c],
                                          param_1 + 0x80,in_stack_ffffffffffffff18,param_1 + 0x70,
                                          local_79);
          FUN_016e9f80(param_2,param_3,local_79[0],0xc);
          *(undefined8 *)(param_1 + 0x78) = local_50[0];
          FUN_016eeca0(param_2,param_3 + 0x1b8,0,*(short *)(param_1 + 0x98) + 2,
                       *(undefined8 *)(param_1 + 0x78),0);
        }
        cVar6 = '\x01';
        iVar7 = *(int *)(param_1 + 4);
        local_a0 = 1;
        if (0 < iVar7) {
          do {
            lVar5 = (longlong)(local_a0 + -1);
            in_stack_ffffffffffffff18 =
                 (undefined8 *)((ulonglong)in_stack_ffffffffffffff18 & 0xffffffffffffff00);
            dVar9 = (double)FUN_0165a4e0(param_2,param_3,
                                         *(undefined8 *)(*(longlong *)(param_1 + 0x20) + lVar5 * 8),
                                         1,*(undefined8 *)(param_1 + 0x28),local_a0,param_1,param_4,
                                         in_stack_ffffffffffffff18,1);
            *(double *)(*(longlong *)(param_1 + 0x38) + lVar5 * 8) = dVar9;
            if (param_1[0xc] == '\x03') {
              dVar9 = dVar9 * *(double *)(param_1 + 0x80);
            }
            dVar13 = dVar13 + dVar9 * *(double *)(*(longlong *)(param_1 + 0x28) + lVar5 * 8);
            (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))
                      (*(longlong **)(param_1 + 0x10),&local_68,local_a0 + -1);
            if (*local_68 == 0x49) {
              FUN_016ed220(param_2,*param_1 + cVar6 + '\x02',dVar9,0);
              cVar6 = cVar6 + '\x02';
            }
            else {
              FUN_016ed220(param_2,*param_1 + cVar6 + '\x01',dVar9,0);
              cVar6 = cVar6 + '\x01';
            }
            local_a0 = local_a0 + 1;
            iVar7 = iVar7 + -1;
            dVar12 = dVar13;
          } while (iVar7 != 0);
        }
        dVar9 = *(double *)(param_3 + 0x430);
      }
      *(double *)(param_1 + 0x78) = local_98;
      FUN_016eeca0(param_2,param_3 + 0x1b8,0,*(short *)(param_1 + 0x98) + 1,
                   *(undefined8 *)(param_1 + 0x78),0);
      if (param_1[0x6c] == '\0') {
        *(double *)(param_1 + 0x88) = local_98 - dVar12;
        FUN_016ed320(param_2,*param_1 + '\x01',*(undefined8 *)(param_1 + 0x88),
                     *(undefined8 *)PTR_DAT_02003468,0);
      }
      else {
        if (param_1[0x6d] != '\0') {
          if (param_4 < 8) {
            bVar8 = ((int)CONCAT71(uVar3,1) << (param_4 & 0x1f) & 0xe0U) != 0;
          }
          else {
            bVar8 = false;
          }
          if (bVar8) {
            uVar14 = 0;
            FUN_016eeca0(param_2,param_3 + 0x1b8,0,*(short *)(param_1 + 0x98) + 3,local_90,0);
            if ((*(byte *)(param_3 + 0x88) & 0x40) != 0) {
              sVar1 = *(short *)(param_1 + 0x98);
              uVar11 = FUN_016eebe0(param_2,param_3 + 0x1b8,0,sVar1 + 3,0);
              uVar14 = 0;
              FUN_016eeca0(param_2,param_3 + 0x1b8,1,sVar1 + 3,uVar11,0);
            }
            if (param_4 == 6) {
              FUN_00dafac0(param_2,param_3,&local_60,&local_58,*(undefined8 *)(param_3 + 0x3b8),
                           CONCAT44(uVar14,*(ushort *)(param_1 + 0x98) + 3),0,1);
            }
            if ((*(byte *)(param_3 + 0x88) & 0x40) != 0) {
              sVar1 = *(short *)(param_1 + 0x98);
              uVar11 = FUN_016eebe0(param_2,param_3 + 0x1b8,0,sVar1 + 4,0);
              FUN_016eeca0(param_2,param_3 + 0x1b8,1,sVar1 + 4,uVar11,0);
            }
            *(double *)(param_1 + 0x88) = (local_98 - dVar12) + local_58;
            FUN_016ed460(param_2,*param_1 + '\x01',*(undefined8 *)(param_1 + 0x88),local_60 + dVar9,
                         *(undefined8 *)(param_3 + 0x3b8),0);
            goto LAB_01654be2;
          }
        }
        *(double *)(param_1 + 0x88) = local_98 - dVar12;
        FUN_016ed320(param_2,*param_1 + '\x01',*(undefined8 *)(param_1 + 0x88),dVar9,0);
      }
    }
    else {
      FUN_016eeca0(param_2,param_3 + 0x1b8,0,*(short *)(param_1 + 0x98) + 1,0,0);
      if (param_1[0x6d] != '\0') {
        dVar9 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),param_1[0xa0],
                                     param_1[0xa1],0);
        FUN_016eeca0(param_2,param_3 + 0x1b8,0,*(short *)(param_1 + 0x98) + 3,
                     *(double *)(param_3 + 0x3b8) * dVar9,0);
      }
    }
  }
LAB_01654be2:
  FUN_00414480(&local_68);
  return;
}


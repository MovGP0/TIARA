/* Ghidra address: 0164df10 */
/* Ghidra symbol: FUN_0164df10 */


void FUN_0164df10(char *param_1,double param_2,longlong param_3,longlong param_4,char param_5,
                 longlong param_6,char param_7)

{
  byte bVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  double dVar11;
  int local_84;
  undefined8 local_78 [3];
  longlong local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  uVar7 = 0;
  (**(code **)(**(longlong **)(param_3 + 0x128) + 0x2d0))
            (*(longlong **)(param_3 + 0x128),0,&local_60);
  lVar8 = *(longlong *)(local_60 + 0x38);
  lVar2 = *(longlong *)(lVar8 + 0x50);
  if ((byte)(param_5 - 8U) < 8) {
    bVar10 = ((int)CONCAT71((int7)((ulonglong)lVar8 >> 8),1) << (param_5 - 8U & 0x1f) & 0x11U) != 0;
  }
  else {
    bVar10 = false;
  }
  if (bVar10) {
    if (param_1[0xc] == '\x02') {
      iVar6 = *(int *)(param_1 + 4);
      local_84 = 0;
      if (-1 < iVar6 + -1) {
        do {
          lVar8 = (longlong)local_84;
          if (*(char *)(*(longlong *)(param_1 + 0x18) + lVar8 * 0xc) == '\0') {
            uVar7 = *(ulonglong *)(param_4 + 0x4c0);
            FUN_017d1750(local_78,uVar7,0,
                         *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 4 + lVar8 * 0xc),
                         *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 8 + lVar8 * 0xc));
            *(undefined8 *)(*(longlong *)(param_1 + 0x28) + lVar8 * 8) = local_78[0];
          }
          else {
            uVar7 = *(ulonglong *)(param_4 + 0x4c0);
            FUN_017d16e0(local_78,uVar7,0,
                         *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 4 + lVar8 * 0xc));
            *(undefined8 *)(*(longlong *)(param_1 + 0x28) + lVar8 * 8) = local_78[0];
          }
          local_84 = local_84 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      iVar6 = *(int *)(param_1 + 4);
      local_84 = 1;
      if (0 < iVar6) {
        do {
          FUN_0165adb0(&local_58,param_4,
                       *(undefined8 *)
                        (*(longlong *)(param_6 + 0x98) + (longlong)(local_84 + -1) * 8),
                       *(undefined8 *)(param_1 + 0x28));
          uVar7 = (ulonglong)(byte)(*param_1 + (char)local_84 + 1);
          FUN_016ed320(param_3,uVar7,local_58,local_50,0);
          local_84 = local_84 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
    }
    bVar1 = param_1[0xc];
    if (bVar1 < 8) {
      bVar10 = ((int)CONCAT71((int7)(uVar7 >> 8),1) << (bVar1 & 0x1f) & 0x70U) != 0;
    }
    else {
      bVar10 = false;
    }
    if (bVar10) {
      if (bVar1 == 4) {
        FUN_0165adb0(&local_48,param_4,*(undefined8 *)(param_1 + 0x58),0);
      }
      else if (bVar1 == 5) {
        uVar4 = FUN_016ed7f0(param_4,param_5);
        FUN_0164bb90(&local_48,*(undefined8 *)(param_1 + 0x40),*(undefined2 *)(param_1 + 10),uVar4);
      }
      else {
        local_48 = *(undefined8 *)PTR_DAT_02002618;
        uStack_40 = *(undefined8 *)(PTR_DAT_02002618 + 8);
      }
      iVar6 = *(int *)(param_1 + 4);
      local_84 = 1;
      if (0 < iVar6) {
        do {
          FUN_00c44460(local_78,*(undefined8 *)
                                 (*(longlong *)(param_1 + 0x38) + (longlong)(local_84 + -1) * 8),0);
          FUN_00c44a50(&local_58,&local_48,local_78);
          FUN_016ed320(param_3,*param_1 + (char)local_84 + '\x01',local_58,local_50,0);
          local_84 = local_84 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
    }
  }
  else {
    if (*(int *)(param_1 + 0x9c) == -1) {
      uVar3 = FUN_016eebb0(param_3,*(undefined2 *)(param_1 + 0x98),0);
      *(undefined4 *)(param_1 + 0x9c) = uVar3;
    }
    if ((*(byte *)(param_4 + 0x88) & 0x20) == 0) {
      if (param_1[0x6d] != '\0') {
        if ((*(byte *)(param_4 + 0x88) & 0x80) == 0) {
          FUN_016ee810(param_3,*(undefined8 *)(param_4 + 0x118),param_1[0xa0],param_1[0xa1],0);
        }
        else {
          FUN_016ee9a0(param_3,param_4,param_1[0xa0],param_1[0xa1],1,0);
        }
      }
      if (param_1[0xc] == '\x01') {
        uVar4 = FUN_0044d490(&PTR_FUN_004334c0,1,0);
        FUN_004134c0(uVar4);
      }
      else {
        iVar6 = *(int *)(lVar8 + 0x44);
        lVar9 = 0;
        local_84 = 0;
        if (-1 < iVar6 + -1) {
          do {
            lVar5 = (longlong)local_84;
            if (*(char *)(*(longlong *)(param_1 + 0x18) + lVar5 * 0xc) == '\0') {
              lVar9 = *(longlong *)(param_1 + 0x28);
              *(double *)(lVar9 + lVar5 * 8) =
                   *(double *)
                    (*(longlong *)(param_4 + 0x118) +
                    (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + 4 + lVar5 * 0xc) * 8) -
                   *(double *)
                    (*(longlong *)(param_4 + 0x118) +
                    (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + 8 + lVar5 * 0xc) * 8);
            }
            else {
              lVar9 = *(longlong *)(param_1 + 0x28);
              *(undefined8 *)(lVar9 + lVar5 * 8) =
                   *(undefined8 *)
                    (*(longlong *)(param_4 + 0x118) +
                    (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + 4 + lVar5 * 0xc) * 8);
            }
            local_84 = local_84 + 1;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        bVar1 = param_1[0xc];
        if (bVar1 < 8) {
          bVar10 = ((int)CONCAT71((int7)((ulonglong)lVar9 >> 8),1) << (bVar1 & 0x1f) & 0xfcU) != 0;
        }
        else {
          bVar10 = false;
        }
        if (bVar10) {
          if (bVar1 == 4) {
            FUN_0165adb0(local_78,param_4,*(undefined8 *)(param_1 + 0x58),0);
          }
          else if (bVar1 == 5) {
            FUN_00c43d30(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 8));
          }
          dVar11 = (double)FUN_016586b0(param_3,param_4,*(undefined8 *)(param_6 + 0x90),1,
                                        *(undefined8 *)(param_1 + 0x28),param_1,param_5,
                                        param_1[0x60]);
          if (param_7 == '\0') {
            dVar11 = param_2;
          }
          if (*(char *)(lVar8 + 0x48) == '\0') {
            *(double *)(lVar8 + 0x18) = dVar11;
          }
          else {
            *(double *)(lVar8 + 0x18) = *(double *)(lVar8 + 0x18) + dVar11;
          }
          if (param_1[0xc] == '\x03') {
            uVar4 = FUN_0044d490(&PTR_FUN_004334c0,1,0);
            FUN_004134c0(uVar4);
          }
          iVar6 = *(int *)(lVar8 + 0x44);
          local_84 = 1;
          if (0 < iVar6) {
            do {
              lVar9 = (longlong)(local_84 + -1);
              dVar11 = (double)FUN_0165a4e0(param_3,param_4,
                                            *(undefined8 *)
                                             (*(longlong *)(param_6 + 0x98) + lVar9 * 8),1,
                                            *(undefined8 *)(param_1 + 0x28),local_84,param_1,param_5
                                            ,param_1[0x60],1);
              if (*(char *)(lVar8 + 0x48) == '\0') {
                *(double *)(*(longlong *)(lVar8 + 0x38) + lVar9 * 8) = dVar11;
              }
              else {
                *(double *)(*(longlong *)(lVar8 + 0x38) + lVar9 * 8) =
                     *(double *)(*(longlong *)(lVar8 + 0x38) + lVar9 * 8) + dVar11;
              }
              local_84 = local_84 + 1;
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
          }
          if (*(char *)(lVar2 + 10) != '\0') {
            FUN_0163d660(lVar2,lVar2,L"Evaluate: ",param_3);
          }
        }
      }
    }
    else {
      if (*(ushort *)(param_1 + 0x98) < 0xff) {
        FUN_016eeca0(param_3,param_4 + 0x1b8,0,*(ushort *)(param_1 + 0x98) + 1,0,0);
      }
      if (param_1[0x6d] != '\0') {
        dVar11 = (double)FUN_016ee810(param_3,*(undefined8 *)(param_4 + 0x118),param_1[0xa0],
                                      param_1[0xa1],0);
        FUN_016eeca0(param_3,param_4 + 0x1b8,0,*(short *)(param_1 + 0x98) + 3,
                     *(double *)(param_4 + 0x3b8) * dVar11,0);
      }
    }
  }
  return;
}


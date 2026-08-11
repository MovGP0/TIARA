/* Ghidra address: 0164ef00 */
/* Ghidra symbol: FUN_0164ef00 */


void FUN_0164ef00(char *param_1,ulonglong param_2,ulonglong param_3,undefined4 param_4)

{
  char *pcVar1;
  byte bVar2;
  longlong *plVar3;
  char cVar4;
  undefined4 uVar5;
  undefined8 in_RAX;
  byte bVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  bool bVar11;
  double dVar12;
  undefined8 uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double unaff_XMM6_Qa;
  double dVar17;
  double dVar18;
  double unaff_XMM9_Qa;
  undefined1 auStack_198 [32];
  double local_178;
  char *local_170;
  char *local_168;
  char *local_160;
  undefined8 *local_158;
  char *local_150;
  undefined1 *local_148;
  char *local_130;
  ulonglong local_128;
  ulonglong local_120;
  double local_118 [3];
  undefined1 local_f9;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  double local_d8;
  double local_d0;
  undefined8 local_c8;
  double local_c0;
  undefined8 local_b0;
  double local_a8;
  double local_98;
  double local_90;
  
  bVar6 = (byte)param_4;
  if ((byte)(bVar6 - 8) < 8) {
    bVar11 = ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (bVar6 - 8 & 0x1f) & 0x11U) != 0;
  }
  else {
    bVar11 = false;
  }
  local_130 = param_1;
  local_128 = param_2;
  local_120 = param_3;
  if (bVar11) {
    bVar6 = param_1[0xc];
    if (bVar6 < 8) {
      bVar11 = ((int)CONCAT71((int7)(param_2 >> 8),1) << (bVar6 & 0x1f) & 0x70U) != 0;
    }
    else {
      bVar11 = false;
    }
    if (bVar11) {
      if (bVar6 == 4) {
        FUN_0165adb0(&local_e8,param_3,*(undefined8 *)(param_1 + 0x58),0);
      }
      else if (bVar6 == 5) {
        uVar13 = FUN_016ed7f0(param_3,param_4);
        FUN_0164bb90(&local_e8,*(undefined8 *)(local_130 + 0x40),*(undefined2 *)(local_130 + 10),
                     uVar13);
      }
      else {
        local_e8 = *(undefined8 *)PTR_DAT_02002618;
        uStack_e0 = *(undefined8 *)(PTR_DAT_02002618 + 8);
      }
      iVar7 = *(int *)(local_130 + 4);
      iVar10 = 1;
      if (0 < iVar7) {
        do {
          FUN_00c44460(local_118,
                       *(undefined8 *)
                        (*(longlong *)(local_130 + 0x38) + (longlong)(iVar10 + -1) * 8),0);
          FUN_00c44a50(&local_f8,&local_e8,local_118);
          local_178 = 0.0;
          FUN_016ed320(local_128,*local_130 + (char)iVar10 + '\x01',local_f8,local_f0);
          iVar10 = iVar10 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
    }
  }
  else {
    dVar18 = 0.0;
    dVar17 = 0.0;
    dVar15 = 1.0;
    dVar16 = *(double *)(param_3 + 0x438);
    local_f9 = 0;
    local_a8 = *(double *)(param_3 + 0x418) * 10.0;
    if (param_1[0xc] == '\x03') {
      local_98 = *(double *)
                  (*(longlong *)(param_3 + 0x1b8) + (longlong)(*(int *)(param_1 + 0x9c) + 2) * 8);
      dVar12 = (double)FUN_0040c850(*(undefined8 *)
                                     (*(longlong *)(param_3 + 0x180) +
                                     (longlong)(*(int *)(param_1 + 0x9c) + 2) * 8));
      dVar12 = *(double *)(local_120 + 0x3c0) * dVar12;
    }
    else {
      local_98 = *(double *)
                  (*(longlong *)(param_3 + 0x1b8) + (longlong)(*(int *)(param_1 + 0x9c) + 1) * 8);
      dVar12 = (double)FUN_0040c850(*(undefined8 *)
                                     (*(longlong *)(param_3 + 0x180) +
                                     (longlong)(*(int *)(param_1 + 0x9c) + 1) * 8));
      dVar12 = *(double *)(local_120 + 0x3c0) * dVar12;
    }
    *(undefined8 *)(local_130 + 0x78) =
         *(undefined8 *)
          (*(longlong *)(local_120 + 0x1b8) + (longlong)(*(int *)(local_130 + 0x9c) + 1) * 8);
    if (local_130[0x6c] == '\0') {
      uVar13 = FUN_0040c850(local_98);
      dVar14 = (double)FUN_00b90620(uVar13,dVar12);
      local_c0 = *(double *)(local_120 + 0x3c8) * dVar14 + *(double *)(local_120 + 0x3d0);
      local_b0 = FUN_00b90620(*(undefined8 *)(local_120 + 0x408),dVar12);
    }
    else {
      uVar13 = FUN_0040c850(local_98);
      dVar14 = (double)FUN_00b90620(uVar13,dVar12);
      local_c0 = *(double *)(local_120 + 0x3c8) * dVar14 + *(double *)(local_120 + 0x3d8);
      local_b0 = FUN_00b90620(*(undefined8 *)(local_120 + 0x410),dVar12);
    }
    if (*(int *)(local_130 + 0x9c) == -1) {
      param_2 = (ulonglong)*(ushort *)(local_130 + 0x98);
      uVar5 = FUN_016eebb0(local_128,param_2,0);
      *(undefined4 *)(local_130 + 0x9c) = uVar5;
    }
    if ((*(byte *)(local_120 + 0x88) & 0x20) == 0) {
      if (local_130[0x6d] != '\0') {
        if ((*(byte *)(local_120 + 0x88) & 0x80) == 0) {
          param_2 = *(ulonglong *)(local_120 + 0x118);
          local_178 = 0.0;
          dVar12 = (double)FUN_016ee810(local_128,param_2,local_130[0xa0],local_130[0xa1]);
          unaff_XMM9_Qa = *(double *)(local_120 + 0x3b8) * dVar12;
        }
        else {
          local_178 = (double)CONCAT71(local_178._1_7_,1);
          local_170 = (char *)0x0;
          param_2 = local_120;
          FUN_016ee9a0(local_128,local_120,local_130[0xa0],local_130[0xa1]);
          unaff_XMM9_Qa =
               *(double *)
                (*(longlong *)(local_120 + 0x1c0) + (longlong)(*(int *)(local_130 + 0x9c) + 3) * 8);
        }
      }
      if ((((*(byte *)(local_120 + 0x88) & 2) == 0) && ((*(byte *)(local_120 + 0x88) & 0x40) == 0))
         && ((*(byte *)(local_120 + 0x88) & 0x80) == 0)) {
        iVar7 = *(int *)(local_130 + 4);
        iVar10 = 0;
        if (-1 < iVar7 + -1) {
          do {
            param_2 = *(ulonglong *)(local_130 + 0x30);
            *(undefined8 *)(param_2 + (longlong)iVar10 * 8) =
                 *(undefined8 *)(*(longlong *)(local_130 + 0x38) + (longlong)iVar10 * 8);
            iVar10 = iVar10 + 1;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
      }
      else {
        iVar7 = *(int *)(local_130 + 4);
        iVar10 = 0;
        if (-1 < iVar7 + -1) {
          do {
            param_2 = (ulonglong)iVar10;
            *(undefined8 *)(*(longlong *)(local_130 + 0x30) + param_2 * 8) = 0;
            iVar10 = iVar10 + 1;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
      }
      if (local_130[0xc] == '\x01') {
        iVar7 = *(int *)(local_130 + 4);
        iVar10 = 0;
        if (-1 < iVar7 + -1) {
          do {
            lVar8 = *(longlong *)(local_130 + 0x18) + (longlong)iVar10 * 0xc;
            *(double *)(*(longlong *)(local_130 + 0x28) + (longlong)iVar10 * 8) =
                 *(double *)(*(longlong *)(local_120 + 0x118) + (longlong)*(int *)(lVar8 + 4) * 8) -
                 *(double *)(*(longlong *)(local_120 + 0x118) + (longlong)*(int *)(lVar8 + 8) * 8);
            iVar10 = iVar10 + 1;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
        local_178 = (double)CONCAT44(local_178._4_4_,*(undefined4 *)(local_130 + 4));
        local_170 = (char *)((ulonglong)local_170 & 0xffffffff00000000);
        unaff_XMM6_Qa =
             (double)FUN_00dff9c0(*(undefined8 *)(local_130 + 0x20),
                                  *(undefined8 *)(local_130 + 0x28),
                                  *(undefined8 *)(local_130 + 0x48),*(undefined2 *)(local_130 + 8));
        iVar7 = *(int *)(local_130 + 4);
        iVar10 = 1;
        if (0 < iVar7) {
          do {
            local_178 = (double)CONCAT44(local_178._4_4_,*(undefined4 *)(local_130 + 4));
            local_170 = (char *)CONCAT44(local_170._4_4_,iVar10);
            local_90 = (double)FUN_00dff9c0(*(undefined8 *)(local_130 + 0x20),
                                            *(undefined8 *)(local_130 + 0x28),
                                            *(undefined8 *)(local_130 + 0x48),
                                            *(undefined2 *)(local_130 + 8));
            *(double *)(*(longlong *)(local_130 + 0x38) + (longlong)(iVar10 + -1) * 8) = local_90;
            dVar17 = dVar17 + local_90 *
                              *(double *)
                               (*(longlong *)(local_130 + 0x28) + (longlong)(iVar10 + -1) * 8);
            FUN_016ed220(local_128,*local_130 + (char)iVar10 + '\x01',local_90,0);
            iVar10 = iVar10 + 1;
            iVar7 = iVar7 + -1;
            dVar18 = dVar17;
          } while (iVar7 != 0);
        }
      }
      else {
        cVar4 = FUN_01d44bc0(*(undefined1 *)(local_120 + 0xed6));
        if ((cVar4 != '\0') || (*(int *)(*(longlong *)(local_128 + 0x130) + 0x10) == 0)) {
          uVar9 = *(uint *)(local_130 + 4) - 1;
          param_2 = (ulonglong)uVar9;
          iVar7 = 0;
          if (-1 < (int)uVar9) {
            param_2 = (ulonglong)*(uint *)(local_130 + 4);
            do {
              lVar8 = (longlong)iVar7;
              pcVar1 = (char *)(*(longlong *)(local_130 + 0x18) + lVar8 * 0xc);
              if (*pcVar1 == '\0') {
                *(double *)(*(longlong *)(local_130 + 0x28) + lVar8 * 8) =
                     *(double *)
                      (*(longlong *)(local_120 + 0x118) + (longlong)*(int *)(pcVar1 + 4) * 8) -
                     *(double *)
                      (*(longlong *)(local_120 + 0x118) + (longlong)*(int *)(pcVar1 + 8) * 8);
              }
              else {
                *(undefined8 *)(*(longlong *)(local_130 + 0x28) + lVar8 * 8) =
                     *(undefined8 *)
                      (*(longlong *)(local_120 + 0x118) + (longlong)*(int *)(pcVar1 + 4) * 8);
              }
              iVar7 = iVar7 + 1;
              uVar9 = (int)param_2 - 1;
              param_2 = (ulonglong)uVar9;
            } while (uVar9 != 0);
          }
        }
        bVar2 = local_130[0xc];
        if (bVar2 < 8) {
          uVar9 = (int)CONCAT71((int7)(param_2 >> 8),1) << (bVar2 & 0x1f);
          param_2 = (ulonglong)uVar9;
          bVar11 = (uVar9 & 0xfc) != 0;
        }
        else {
          bVar11 = false;
        }
        if (bVar11) {
          if (bVar2 == 4) {
            if (bVar6 < 0x10) {
              bVar11 = ((int)CONCAT62((int6)(param_2 >> 0x10),1) << (bVar6 & 0x1f) & 0x1182U) != 0;
            }
            else {
              bVar11 = false;
            }
            if (!bVar11) {
              local_178 = *(double *)(local_130 + 0x58);
              uVar13 = FUN_0164ea30(local_120,local_128,local_130,param_4);
              local_178 = 0.0;
              local_170 = (char *)0x0;
              local_168 = (char *)0x0;
              FUN_016ed5d0(local_128,*local_130 + '\x02',uVar13,0);
              return;
            }
            FUN_0165adb0(local_118,local_120,*(undefined8 *)(local_130 + 0x58),0);
            dVar15 = local_118[0];
          }
          else if (bVar2 == 5) {
            dVar15 = (double)FUN_00c43d30(*(undefined8 *)(*(longlong *)(local_130 + 0x40) + 8));
          }
          else {
            dVar15 = 1.0;
          }
          cVar4 = FUN_01d44bc0(*(undefined1 *)(local_120 + 0xed6));
          if ((cVar4 != '\0') || (*(int *)(*(longlong *)(local_128 + 0x130) + 0x10) == 0)) {
            local_178 = *(double *)(local_130 + 0x28);
            local_170 = local_130;
            local_168 = (char *)CONCAT71(local_168._1_7_,bVar6);
            local_160 = (char *)CONCAT71(local_160._1_7_,local_130[0x60]);
            unaff_XMM6_Qa =
                 (double)FUN_016586b0(local_128,local_120,*(undefined8 *)(local_130 + 0x50),1);
          }
          local_90 = unaff_XMM6_Qa - local_98;
          dVar16 = (double)FUN_0164ee60(auStack_198);
          if (dVar16 < 1.0) {
            unaff_XMM6_Qa = local_98 + dVar16 * local_90;
            local_f9 = 1;
            FUN_016e9f80(local_128,local_120,1,0x6e);
          }
          if (local_130[0xc] == '\x03') {
            local_170 = *(char **)(*(longlong *)(local_120 + 0x1b8) +
                                  (longlong)(*(int *)(local_130 + 0x9c) + 2) * 8);
            local_168 = (char *)CONCAT71(local_168._1_7_,local_130[0x6c]);
            local_160 = local_130 + 0x80;
            local_158 = &local_c8;
            local_150 = local_130 + 0x70;
            local_148 = &local_f9;
            local_178 = unaff_XMM6_Qa;
            unaff_XMM6_Qa =
                 (double)FUN_0164bac0(local_128,local_120,*(undefined8 *)(local_130 + 0x40),
                                      *(undefined2 *)(local_130 + 10));
            FUN_016e9f80(local_128,local_120,local_f9,0xb);
            *(undefined8 *)
             (*(longlong *)(local_120 + 0x1b8) + (longlong)(*(int *)(local_130 + 0x9c) + 2) * 8) =
                 local_c8;
          }
          cVar4 = FUN_01d44bc0(*(undefined1 *)(local_120 + 0xed6));
          if ((cVar4 == '\0') && (*(int *)(*(longlong *)(local_128 + 0x130) + 0x10) != 0)) {
            if (0 < *(int *)(*(longlong *)(local_128 + 0x130) + 0x10)) {
              lVar8 = *(longlong *)(local_128 + 0x130);
              if (*(int *)(lVar8 + 0x10) == 0) {
                FUN_00594f90();
              }
              plVar3 = (longlong *)**(undefined8 **)(lVar8 + 8);
              iVar7 = (**(code **)(*plVar3 + 0x58))(plVar3);
              dVar18 = dVar17;
              if (0 < iVar7) {
                lVar8 = *(longlong *)(local_128 + 0x130);
                if (*(int *)(lVar8 + 0x10) == 0) {
                  FUN_00594f90();
                }
                plVar3 = (longlong *)**(undefined8 **)(lVar8 + 8);
                uVar13 = (**(code **)(*plVar3 + 0x10))(plVar3,local_120,0xffffffff);
                FUN_016ed220(local_128,*local_130 + (char)iVar7 + '\x01',uVar13,0);
              }
            }
          }
          else {
            iVar7 = *(int *)(local_130 + 4);
            iVar10 = 1;
            if (0 < iVar7) {
              do {
                lVar8 = (longlong)(iVar10 + -1);
                local_178 = *(double *)(local_130 + 0x28);
                local_170 = (char *)CONCAT44(local_170._4_4_,iVar10);
                local_168 = local_130;
                local_160 = (char *)CONCAT71(local_160._1_7_,bVar6);
                local_158 = (undefined8 *)CONCAT71(local_158._1_7_,local_130[0x60]);
                local_150 = (char *)CONCAT71(local_150._1_7_,1);
                local_90 = (double)FUN_0165a4e0(local_128,local_120,
                                                *(undefined8 *)
                                                 (*(longlong *)(local_130 + 0x20) + lVar8 * 8),1);
                if (local_130[0xc] == '\x03') {
                  local_90 = local_90 * *(double *)(local_130 + 0x80);
                }
                *(double *)(*(longlong *)(local_130 + 0x38) + lVar8 * 8) = local_90;
                dVar18 = dVar18 + local_90 *
                                  *(double *)(*(longlong *)(local_130 + 0x28) + lVar8 * 8);
                FUN_016ed220(local_128,*local_130 + (char)iVar10 + '\x01',local_90 * dVar15,0);
                iVar10 = iVar10 + 1;
                iVar7 = iVar7 + -1;
              } while (iVar7 != 0);
            }
          }
          dVar16 = *(double *)(local_120 + 0x430);
        }
      }
      *(double *)(local_130 + 0x78) = unaff_XMM6_Qa;
      *(undefined8 *)
       (*(longlong *)(local_120 + 0x1b8) + (longlong)(*(int *)(local_130 + 0x9c) + 1) * 8) =
           *(undefined8 *)(local_130 + 0x78);
      if (local_130[0x6c] == '\0') {
        cVar4 = FUN_01d44bc0(*(undefined1 *)(local_120 + 0xed6));
        if ((cVar4 == '\0') && (*(int *)(*(longlong *)(local_128 + 0x130) + 0x10) != 0)) {
          if (0 < *(int *)(*(longlong *)(local_128 + 0x130) + 0x10)) {
            lVar8 = *(longlong *)(local_128 + 0x130);
            if (*(int *)(lVar8 + 0x10) == 0) {
              FUN_00594f90();
            }
            plVar3 = (longlong *)**(undefined8 **)(lVar8 + 8);
            uVar13 = (**(code **)(*plVar3 + 0x20))(plVar3,local_120,0xffffffff);
            local_178 = 0.0;
            FUN_016ed320(local_128,*local_130 + '\x01',uVar13,0);
          }
        }
        else {
          *(double *)(local_130 + 0x88) = dVar15 * (unaff_XMM6_Qa - dVar18);
          local_178 = 0.0;
          FUN_016ed320(local_128,*local_130 + '\x01',*(undefined8 *)(local_130 + 0x88),
                       *(undefined8 *)PTR_DAT_02003468);
        }
      }
      else {
        if (local_130[0x6d] != '\0') {
          if (bVar6 < 8) {
            bVar11 = ((int)CONCAT71((int7)((ulonglong)local_130 >> 8),1) << (bVar6 & 0x1f) & 0xe0U)
                     != 0;
          }
          else {
            bVar11 = false;
          }
          if (bVar11) {
            *(double *)
             (*(longlong *)(local_120 + 0x1b8) + (longlong)(*(int *)(local_130 + 0x9c) + 3) * 8) =
                 unaff_XMM9_Qa;
            if ((*(byte *)(local_120 + 0x88) & 0x40) != 0) {
              *(undefined8 *)
               (*(longlong *)(local_120 + 0x1c0) + (longlong)(*(int *)(local_130 + 0x9c) + 3) * 8) =
                   *(undefined8 *)
                    (*(longlong *)(local_120 + 0x1b8) +
                    (longlong)(*(int *)(local_130 + 0x9c) + 3) * 8);
            }
            if (bVar6 == 6) {
              local_178 = *(double *)(local_120 + 0x3b8);
              local_170 = (char *)CONCAT44(local_170._4_4_,*(ushort *)(local_130 + 0x98) + 3);
              local_168 = (char *)0x0;
              local_160 = (char *)CONCAT71(local_160._1_7_,1);
              FUN_00dafac0(local_128,local_120,&local_d8,&local_d0);
            }
            if ((*(byte *)(local_120 + 0x88) & 0x40) != 0) {
              *(undefined8 *)
               (*(longlong *)(local_120 + 0x1c0) + (longlong)(*(int *)(local_130 + 0x9c) + 4) * 8) =
                   *(undefined8 *)
                    (*(longlong *)(local_120 + 0x1b8) +
                    (longlong)(*(int *)(local_130 + 0x9c) + 4) * 8);
            }
            *(double *)(local_130 + 0x88) = dVar15 * (unaff_XMM6_Qa - dVar18) + local_d0;
            local_178 = *(double *)(local_120 + 0x3b8);
            local_170 = (char *)0x0;
            FUN_016ed460(local_128,*local_130 + '\x01',*(undefined8 *)(local_130 + 0x88),
                         local_d8 + dVar16);
            return;
          }
        }
        cVar4 = FUN_01d44bc0(*(undefined1 *)(local_120 + 0xed6));
        if ((cVar4 == '\0') && (*(int *)(*(longlong *)(local_128 + 0x130) + 0x10) != 0)) {
          if (0 < *(int *)(*(longlong *)(local_128 + 0x130) + 0x10)) {
            lVar8 = *(longlong *)(local_128 + 0x130);
            if (*(int *)(lVar8 + 0x10) == 0) {
              FUN_00594f90();
            }
            plVar3 = (longlong *)**(undefined8 **)(lVar8 + 8);
            uVar13 = (**(code **)(*plVar3 + 0x20))(plVar3,local_120,0xffffffff);
            local_178 = 0.0;
            FUN_016ed320(local_128,*local_130 + '\x01',uVar13,0);
          }
        }
        else {
          *(double *)(local_130 + 0x88) = dVar15 * (unaff_XMM6_Qa - dVar18);
          local_178 = 0.0;
          FUN_016ed320(local_128,*local_130 + '\x01',*(undefined8 *)(local_130 + 0x88),dVar16);
        }
      }
    }
    else {
      local_178 = 0.0;
      local_170 = (char *)0x0;
      FUN_016eeca0(local_128,local_120 + 0x1b8,0,*(short *)(local_130 + 0x98) + 1);
      local_178 = 0.0;
      local_170 = (char *)0x0;
      FUN_016eeca0(local_128,local_120 + 0x1b8,0,*(short *)(local_130 + 0x98) + 2);
      local_178 = 0.0;
      local_170 = (char *)0x0;
      FUN_016eeca0(local_128,local_120 + 0x1b8,0,*(short *)(local_130 + 0x98) + 3);
      if (local_130[0x6d] != '\0') {
        local_178 = 0.0;
        local_178 = (double)FUN_016ee810(local_128,*(undefined8 *)(local_120 + 0x118),
                                         local_130[0xa0],local_130[0xa1]);
        local_178 = *(double *)(local_120 + 0x3b8) * local_178;
        local_170 = (char *)0x0;
        FUN_016eeca0(local_128,local_120 + 0x1b8,0,*(short *)(local_130 + 0x98) + 3);
      }
    }
  }
  return;
}


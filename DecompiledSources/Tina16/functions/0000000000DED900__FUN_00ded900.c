/* Ghidra address: 00ded900 */
/* Ghidra symbol: FUN_00ded900 */


void FUN_00ded900(undefined8 param_1,longlong param_2,byte param_3)

{
  char *pcVar1;
  longlong lVar2;
  longlong *plVar3;
  double dVar4;
  undefined8 in_RAX;
  longlong lVar5;
  longlong lVar6;
  short sVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  uint uVar11;
  bool bVar12;
  undefined8 uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  longlong in_stack_fffffffffffffec0;
  longlong lVar17;
  undefined4 uVar18;
  int local_11c;
  int local_fc;
  undefined8 local_f8;
  double local_e0;
  undefined8 local_a8;
  double local_90;
  
  if ((byte)(param_3 - 8) < 8) {
    bVar12 = ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (param_3 - 8 & 0x1f) & 0x11U) != 0;
  }
  else {
    bVar12 = false;
  }
  if (bVar12) {
    if (param_3 == 8) {
      iVar8 = *(int *)(*(longlong *)(param_2 + 0x1348) + 0x10);
      local_11c = 0;
      if (-1 < iVar8 + -1) {
        do {
          lVar5 = FUN_004aeac0(*(undefined8 *)(param_2 + 0x1348),local_11c);
          FUN_016ed460(0,**(char **)(lVar5 + 0x60) + '\x01',0,0,
                       *(undefined8 *)(*(char **)(lVar5 + 0x60) + 8),lVar5);
          local_11c = local_11c + 1;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
    }
  }
  else {
    iVar8 = *(int *)(*(longlong *)(param_2 + 0x1348) + 0x10);
    local_11c = 0;
    if (-1 < iVar8 + -1) {
      do {
        dVar16 = 0.0;
        in_stack_fffffffffffffec0 = FUN_004aeac0(*(undefined8 *)(param_2 + 0x1348),local_11c);
        pcVar1 = *(char **)(in_stack_fffffffffffffec0 + 0x60);
        if ((*(byte *)(param_2 + 0x88) & 0x20) == 0) {
          if (param_3 < 8 && (1 << (param_3 & 0x1f) & 0xa2U) != 0) {
            if ((*(char *)(param_2 + 0x32c) != '\0') && (pcVar1[0x40] != '\0')) {
              *(undefined8 *)(pcVar1 + 0x18) = *(undefined8 *)(pcVar1 + 0x10);
              dVar16 = *(double *)(pcVar1 + 8) * *(double *)(pcVar1 + 0x18);
              pcVar1[0x28] = '\0';
              pcVar1[0x29] = '\0';
              pcVar1[0x2a] = '\0';
              pcVar1[0x2b] = '\0';
              pcVar1[0x2c] = 'e';
              pcVar1[0x2d] = -0x33;
              pcVar1[0x2e] = -0x33;
              pcVar1[0x2f] = 'A';
              *(double *)(pcVar1 + 0x20) = -*(double *)(pcVar1 + 0x18) * *(double *)(pcVar1 + 0x28);
            }
          }
          else if (((*(byte *)(param_2 + 0x88) & 0x40) == 0) ||
                  ((*(byte *)(param_2 + 0x88) & 0x10) == 0)) {
            if ((*(byte *)(param_2 + 0x88) & 2) == 0) {
              if ((*(byte *)(param_2 + 0x88) & 0x80) == 0) {
                uVar13 = FUN_016ee520(0,*(undefined8 *)(param_2 + 0x118),*pcVar1 + '\x01',1,
                                      in_stack_fffffffffffffec0);
                *(undefined8 *)(pcVar1 + 0x18) = uVar13;
                dVar16 = *(double *)(pcVar1 + 8) * *(double *)(pcVar1 + 0x18);
              }
              else {
                uVar13 = FUN_016ee520(0,*(undefined8 *)(param_2 + 0x118),*pcVar1 + '\x01',1,
                                      in_stack_fffffffffffffec0);
                *(undefined8 *)(pcVar1 + 0x18) = uVar13;
                dVar16 = (double)FUN_016eebe0(0,param_2 + 0x1b8,1,*(short *)(pcVar1 + 2) + 1,
                                              in_stack_fffffffffffffec0);
              }
            }
            else {
              *(undefined8 *)(pcVar1 + 0x18) = *(undefined8 *)(pcVar1 + 0x10);
              dVar16 = *(double *)(pcVar1 + 8) * *(double *)(pcVar1 + 0x18);
            }
          }
          else {
            if (pcVar1[0x40] == '\0') {
              uVar13 = FUN_016ee520(0,*(undefined8 *)(param_2 + 0x118),*pcVar1 + '\x01',1,
                                    in_stack_fffffffffffffec0);
              *(undefined8 *)(pcVar1 + 0x10) = uVar13;
            }
            else {
              dVar16 = *(double *)(pcVar1 + 8) * *(double *)(pcVar1 + 0x10) *
                       *(double *)(param_2 + 0x478);
            }
            *(undefined8 *)(pcVar1 + 0x18) = *(undefined8 *)(pcVar1 + 0x10);
            FUN_016eeca0(0,param_2 + 0x1b8,0,*(short *)(pcVar1 + 2) + 1,dVar16,
                         in_stack_fffffffffffffec0);
          }
          FUN_016eeca0(0,param_2 + 0x1b8,0,*(short *)(pcVar1 + 2) + 1,dVar16,
                       in_stack_fffffffffffffec0);
        }
        else {
          if (pcVar1[0x40] == '\0') {
            uVar13 = FUN_016ee520(0,*(undefined8 *)(param_2 + 0x118),*pcVar1 + '\x01',1,
                                  in_stack_fffffffffffffec0);
            *(undefined8 *)(pcVar1 + 0x10) = uVar13;
          }
          FUN_016eeca0(0,param_2 + 0x1b8,0,*(short *)(pcVar1 + 2) + 1,
                       *(double *)(pcVar1 + 8) * *(double *)(pcVar1 + 0x10),
                       in_stack_fffffffffffffec0);
        }
        local_11c = local_11c + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    if ((*(byte *)(param_2 + 0x88) & 0x20) == 0) {
      iVar8 = *(int *)(*(longlong *)(param_2 + 0x1350) + 0x10);
      local_11c = 0;
      if (-1 < iVar8 + -1) {
        do {
          lVar5 = FUN_004aeac0(*(undefined8 *)(param_2 + 0x1350),local_11c);
          local_fc = 1;
          for (uVar11 = (uint)*(byte *)(lVar5 + 4); uVar11 != 0; uVar11 = uVar11 - 1) {
            lVar2 = *(longlong *)(*(longlong *)(lVar5 + 0x40) + -8 + (longlong)local_fc * 8);
            dVar16 = **(double **)(lVar2 + 0x18);
            plVar3 = *(longlong **)(lVar2 + 0x40);
            lVar2 = *plVar3;
            lVar17 = plVar3[1];
            puVar9 = *(undefined8 **)(lVar2 + 0x60);
            puVar10 = &local_a8;
            for (lVar6 = 10; lVar6 != 0; lVar6 = lVar6 + -1) {
              *puVar10 = *puVar9;
              puVar9 = puVar9 + 1;
              puVar10 = puVar10 + 1;
            }
            puVar9 = *(undefined8 **)(lVar17 + 0x60);
            puVar10 = &local_f8;
            for (lVar6 = 10; dVar4 = local_90, dVar15 = local_e0, lVar6 != 0; lVar6 = lVar6 + -1) {
              *puVar10 = *puVar9;
              puVar9 = puVar9 + 1;
              puVar10 = puVar10 + 1;
            }
            if (param_3 < 8) {
              bVar12 = ((int)CONCAT71((int7)((ulonglong)lVar17 >> 8),1) << (param_3 & 0x1f) & 0xa2U)
                       != 0;
            }
            else {
              bVar12 = false;
            }
            if ((!bVar12) && ((*(byte *)(param_2 + 0x88) & 0x80) == 0)) {
              sVar7 = local_a8._2_2_ + 1;
              dVar14 = (double)FUN_016eebe0(0,param_2 + 0x1b8,0,sVar7,lVar2);
              FUN_016eeca0(0,param_2 + 0x1b8,0,sVar7,dVar14 + dVar16 * dVar15,lVar2);
              sVar7 = local_f8._2_2_ + 1;
              dVar15 = (double)FUN_016eebe0(0,param_2 + 0x1b8,0,sVar7,lVar17);
              FUN_016eeca0(0,param_2 + 0x1b8,0,sVar7,dVar15 + dVar16 * dVar4,lVar17);
              in_stack_fffffffffffffec0 = lVar17;
            }
            local_fc = local_fc + 1;
          }
          local_11c = local_11c + 1;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      iVar8 = *(int *)(*(longlong *)(param_2 + 0x1348) + 0x10);
      local_11c = 0;
      if (-1 < iVar8 + -1) {
        do {
          uVar18 = (undefined4)((ulonglong)in_stack_fffffffffffffec0 >> 0x20);
          in_stack_fffffffffffffec0 = FUN_004aeac0(*(undefined8 *)(param_2 + 0x1348),local_11c);
          pcVar1 = *(char **)(in_stack_fffffffffffffec0 + 0x60);
          if ((*(byte *)(param_2 + 0x88) & 0x40) != 0) {
            sVar7 = *(short *)(pcVar1 + 2);
            uVar13 = FUN_016eebe0(0,param_2 + 0x1b8,0,sVar7 + 1,in_stack_fffffffffffffec0);
            lVar5 = in_stack_fffffffffffffec0;
            FUN_016eeca0(0,param_2 + 0x1b8,1,sVar7 + 1,uVar13,in_stack_fffffffffffffec0);
            uVar18 = (undefined4)((ulonglong)lVar5 >> 0x20);
          }
          if (param_3 == 6) {
            FUN_00dafac0(0,param_2,pcVar1 + 0x28,pcVar1 + 0x20,*(undefined8 *)(pcVar1 + 8),
                         CONCAT44(uVar18,*(ushort *)(pcVar1 + 2) + 1),in_stack_fffffffffffffec0,1);
          }
          if ((*(byte *)(param_2 + 0x88) & 0x40) != 0) {
            sVar7 = *(short *)(pcVar1 + 2);
            uVar13 = FUN_016eebe0(0,param_2 + 0x1b8,0,sVar7 + 2,in_stack_fffffffffffffec0);
            FUN_016eeca0(0,param_2 + 0x1b8,1,sVar7 + 2,uVar13,in_stack_fffffffffffffec0);
          }
          FUN_016ed460(0,*pcVar1 + '\x01',*(undefined8 *)(pcVar1 + 0x20),
                       *(undefined8 *)(pcVar1 + 0x28),*(undefined8 *)(pcVar1 + 8),
                       in_stack_fffffffffffffec0);
          local_11c = local_11c + 1;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
    }
  }
  return;
}


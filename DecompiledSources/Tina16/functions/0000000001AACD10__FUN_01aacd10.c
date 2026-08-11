/* Ghidra address: 01aacd10 */
/* Ghidra symbol: FUN_01aacd10 */


char FUN_01aacd10(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  ushort uVar9;
  int iVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  short sVar16;
  int iVar17;
  int iVar18;
  char cVar19;
  ushort local_a4;
  char local_a1;
  double local_a0;
  ushort local_92;
  ushort *local_70;
  int local_64;
  undefined8 local_60 [2];
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  
  local_60[0] = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_a0 = 0.0;
  if ((1 < *(byte *)(param_1 + 0x198fa)) && (DAT_01fce42d != '\0')) {
    uVar11 = FUN_00b89270();
    FUN_00b8e520(uVar11,local_60,0x509);
    FUN_00414ad0(DAT_02110a68,local_60[0]);
    FUN_01aa37d0(1,&DAT_02110a68);
  }
  if ((*(char *)(param_1 + 0x198fa) != '\0') && (*(char *)(param_1 + 0x198ff) == '\0')) {
    local_a0 = *(double *)
                (*(longlong *)(param_1 + 0x10 + (ulonglong)*(ushort *)(param_1 + 0x198fc) * 8) +
                 -0x1d8 + (ulonglong)*(byte *)(param_1 + 0x198fe) * 0x788);
  }
  cVar19 = *(char *)(param_1 + 0x198fa);
  if (cVar19 != '\0') {
    local_70 = (ushort *)(param_1 + 0x198fc);
    do {
      lVar13 = *(longlong *)(param_1 + 0x10 + (ulonglong)*local_70 * 8);
      if (*(char *)((longlong)local_70 + 3) != '\0') {
        lVar15 = *(longlong *)(param_1 + 0x10 + (ulonglong)*local_70 * 8);
        uVar12 = FUN_01d03160(*(undefined8 *)(lVar15 + 0x550));
        iVar17 = *(int *)(local_70 + 2);
        uVar12 = uVar12 & 0xffff;
        if (uVar12 < 0xe6) {
          if (uVar12 == 0x8a) {
            FUN_014fbdb0();
          }
          else if (uVar12 == 0x8b) {
            FUN_014fbee0();
          }
        }
        else if (uVar12 - 0xe6 < 3) {
          puVar2 = *(undefined8 **)(lVar15 + 0x28 + (longlong)iVar17 * 0x10);
          FUN_014fa650(*puVar2,*(undefined1 *)(puVar2 + 1));
          puVar2 = (undefined8 *)(lVar15 + 0x20 + (longlong)iVar17 * 0x10);
          FUN_004095f0();
          *puVar2 = 0;
          puVar2[1] = 0;
        }
        else if (uVar12 == 0x5dc) {
          lVar4 = *(longlong *)(lVar15 + 0x28 + (longlong)iVar17 * 0x10);
          FUN_013a5ac0(*(undefined8 *)(lVar13 + 0x558),*(undefined4 *)(lVar4 + 4),lVar4);
          iVar10 = *(int *)(local_70 + 2);
          FUN_004095f0();
          *(undefined8 *)(lVar15 + (longlong)iVar10 * 0x10 + 0x28) = 0;
        }
        else if (uVar12 == 0xbb9) {
          FUN_01aa7880();
        }
        bVar6 = false;
        if (0 < iVar17) {
          piVar1 = (int *)(lVar15 + 0x28);
          bVar6 = false;
          if (iVar17 <= *piVar1 + -1) {
            iVar18 = ((*piVar1 + -1) - iVar17) + 1;
            iVar10 = iVar17;
            do {
              puVar2 = (undefined8 *)(lVar15 + 0x20 + (longlong)iVar10 * 0x10);
              puVar3 = (undefined8 *)(lVar15 + 0x20 + (longlong)(iVar10 + 1) * 0x10);
              *puVar2 = *puVar3;
              puVar2[1] = puVar3[1];
              bVar6 = true;
              iVar10 = iVar10 + 1;
              iVar18 = iVar18 + -1;
            } while (iVar18 != 0);
          }
          if (0 < *piVar1) {
            *piVar1 = *piVar1 + -1;
          }
        }
        if ((bVar6) && (uVar14 = (uint)*(byte *)(param_1 + 0x198fa), uVar14 != 0)) {
          lVar13 = param_1 + 0x198fc;
          do {
            if (*(char *)(lVar13 + 3) != '\0') {
              if (*(int *)(lVar13 + 4) == iVar17) {
                *(undefined4 *)(lVar13 + 4) = 0xffffffff;
              }
              if (iVar17 < *(int *)(lVar13 + 4)) {
                *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + -1;
              }
            }
            lVar13 = lVar13 + 8;
            uVar14 = uVar14 - 1;
          } while (uVar14 != 0);
        }
      }
      local_70 = local_70 + 4;
      cVar19 = cVar19 + -1;
    } while (cVar19 != '\0');
  }
  FUN_01aad950(param_1);
  FUN_01aade60();
  iVar17 = *(int *)(*(longlong *)(param_1 + 0x19c48) + 0x10);
  local_64 = 0;
  if (-1 < iVar17 + -1) {
    do {
      uVar9 = FUN_00dae940(*(undefined8 *)(param_1 + 0x19c48),local_64);
      bVar6 = false;
      iVar10 = *(int *)(*(longlong *)
                         (*(longlong *)
                           (*(longlong *)(param_1 + 0x19c40) + -8 + (ulonglong)uVar9 * 8) + 0x10) +
                       0x10);
      iVar18 = 0;
      if (-1 < iVar10 + -1) {
        do {
          uVar11 = FUN_014f9500(*(undefined8 *)
                                 (*(longlong *)
                                   (*(longlong *)(param_1 + 0x19c40) + -8 + (ulonglong)uVar9 * 8) +
                                 0x10),iVar18);
          local_50._0_2_ = (ushort)uVar11;
          local_50._2_1_ = (byte)((ulonglong)uVar11 >> 0x10);
          uVar14 = (uint)local_50._2_1_;
          lVar13 = *(longlong *)(param_1 + 0x10 + (longlong)(int)(uint)(ushort)local_50 * 8);
          plVar5 = *(longlong **)(lVar13 + 0x550);
          local_50 = uVar11;
          (**(code **)(*plVar5 + 0x288))(plVar5,&local_48);
          if (local_48 == 0) {
            FUN_004169a0(&local_48,(longlong)plVar5 + 0xfe);
          }
          lVar15 = (longlong)(int)uVar14;
          local_a1 = *(char *)(lVar13 + -0x1cf + lVar15 * 0x788) != '\x01';
          if ((bool)local_a1) {
            *(undefined1 *)(lVar13 + -0x1e0 + lVar15 * 0x788) =
                 *(undefined1 *)(lVar13 + -0x1d0 + lVar15 * 0x788);
            local_a4 = *(ushort *)(lVar13 + 0x4236 + lVar15 * 2);
            uVar7 = FUN_01aac6a0(param_1,local_a4,&local_29,&local_2a,&local_2b);
            *(undefined1 *)(param_1 + 0x14ad8 + (ulonglong)local_a4) = uVar7;
            bVar6 = true;
          }
          iVar18 = iVar18 + 1;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
      if (bVar6) {
        FUN_01aab790(param_1,uVar9,local_a0,local_a4);
      }
      local_64 = local_64 + 1;
      iVar17 = iVar17 + -1;
    } while (iVar17 != 0);
  }
  sVar16 = *(short *)(param_1 + 0x10);
  local_92 = 1;
  for (; sVar16 != 0; sVar16 = sVar16 + -1) {
    iVar17 = *(int *)(*(longlong *)
                       (*(longlong *)
                         (*(longlong *)(param_1 + 0x19c40) + -8 + (ulonglong)local_92 * 8) + 8) +
                     0x10);
    iVar10 = 0;
    if (-1 < iVar17 + -1) {
      do {
        uVar11 = FUN_014f9500(*(undefined8 *)
                               (*(longlong *)
                                 (*(longlong *)(param_1 + 0x19c40) + -8 + (ulonglong)local_92 * 8) +
                               8),iVar10);
        local_50._0_2_ = (ushort)uVar11;
        local_50._2_1_ = (byte)((ulonglong)uVar11 >> 0x10);
        uVar14 = (uint)local_50._2_1_;
        lVar13 = *(longlong *)(param_1 + 0x10 + (longlong)(int)(uint)(ushort)local_50 * 8);
        plVar5 = *(longlong **)(lVar13 + 0x550);
        local_50 = uVar11;
        (**(code **)(*plVar5 + 0x288))(plVar5,&local_48);
        if (local_48 == 0) {
          FUN_004169a0(&local_48,(longlong)plVar5 + 0xfe);
        }
        lVar15 = (longlong)(int)uVar14;
        local_a1 = *(char *)(lVar13 + -0x1cf + lVar15 * 0x788) != '\x01';
        if ((bool)local_a1) {
          *(undefined1 *)(lVar13 + -0x1e0 + lVar15 * 0x788) =
               *(undefined1 *)(lVar13 + -0x1d0 + lVar15 * 0x788);
          uVar9 = *(ushort *)(lVar13 + 0x4236 + lVar15 * 2);
          uVar7 = FUN_01aac6a0(param_1,uVar9,&local_29,&local_2a,&local_2b);
          *(undefined1 *)(param_1 + 0x14ad8 + (ulonglong)uVar9) = uVar7;
          FUN_01aab620(param_1,local_a0,uVar9);
        }
        iVar10 = iVar10 + 1;
        iVar17 = iVar17 + -1;
      } while (iVar17 != 0);
    }
    local_92 = local_92 + 1;
  }
  cVar19 = '\0';
  if (DAT_02110a56 != '\0') {
    cVar8 = FUN_014f9bd0(*(undefined8 *)PTR_DAT_02003c40);
    if (cVar8 != '\0') {
      FUN_014f97d0(*(undefined8 *)PTR_DAT_02003c40);
    }
    if (local_a1 != '\0') {
      FUN_01aadc70(param_1);
      cVar8 = FUN_014f9be0(*(undefined8 *)PTR_DAT_02003c40);
      if (cVar8 != '\0') {
        cVar19 = FUN_014f99c0(*(undefined8 *)PTR_DAT_02003c40);
      }
    }
  }
  if (cVar19 != '\0') {
    FUN_016fd9b0(L"Analysis can\'t be performed: use delay by the components",0x1597);
  }
  FUN_01aadac0(param_1);
  FUN_01aacbb0(param_1,0,local_a0 + *(double *)PTR_DAT_02004660,1);
  FUN_00414480(local_60);
  FUN_00414560(&local_48,3);
  return cVar19;
}


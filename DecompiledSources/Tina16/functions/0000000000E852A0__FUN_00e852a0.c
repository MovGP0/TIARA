/* Ghidra address: 00e852a0 */
/* Ghidra symbol: FUN_00e852a0 */


undefined8
FUN_00e852a0(uint param_1,longlong *param_2,undefined8 *param_3,undefined4 *param_4,int param_5,
            int param_6,int param_7,undefined4 param_8,undefined4 *param_9,uint *param_10,
            uint *param_11,uint *param_12,undefined8 param_13,longlong param_14,int *param_15)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  short *psVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  short *psVar12;
  short *psVar13;
  undefined4 *puVar14;
  int *piVar15;
  longlong lVar16;
  short *psVar17;
  ulonglong uVar18;
  longlong lVar19;
  uint uVar20;
  uint uVar21;
  uint local_dc;
  short *local_d8;
  uint local_d0;
  int local_cc;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  undefined8 *local_b8;
  short *local_b0;
  uint local_a4;
  ulonglong local_a0;
  undefined4 *local_98;
  short *local_90;
  uint local_88;
  uint local_84;
  longlong *local_80;
  short *local_78;
  longlong local_70;
  longlong local_68;
  undefined8 local_60;
  short *local_58;
  undefined8 local_50;
  ushort local_48;
  undefined2 local_46;
  
  local_b0 = (short *)*param_3;
  psVar12 = (short *)*param_2;
  local_bc = param_1;
  local_98 = param_4;
  local_80 = param_2;
  if ((PTR_FUN_01edf920 != (undefined *)0x0) &&
     (local_d8 = psVar12, iVar2 = (*(code *)PTR_FUN_01edf920)(), iVar2 != 0)) {
    *local_98 = 0x55;
    return 0;
  }
  local_cc = param_7 + 4;
  local_a0 = 0;
  local_88 = 0;
  if (*psVar12 == 0x85) {
    local_48 = psVar12[2];
    local_88 = (uint)local_48;
    local_50 = *(undefined8 *)(param_14 + 0x48);
    local_46 = 0;
    *(undefined8 **)(param_14 + 0x48) = &local_50;
  }
  local_70 = *(longlong *)(param_14 + 0x40) - *(longlong *)(param_14 + 0x20) >> 1;
  psVar12[1] = 0;
  local_68 = (longlong)param_7;
  uVar20 = *(uint *)(param_14 + 0x70);
  piVar15 = &local_cc;
  if (param_15 == (int *)0x0) {
    piVar15 = (int *)0x0;
  }
  local_dc = 0xfffffffe;
  local_d0 = 0;
  uVar21 = 0xfffffffe;
  local_78 = (short *)0x0;
  local_90 = psVar12;
  local_58 = psVar12;
  local_d8 = psVar12 + local_68 + 2;
  local_84 = uVar20;
  local_b8 = param_3;
  local_60 = param_13;
  do {
    if (param_6 != 0) {
      *(uint *)(param_14 + 0x70) = local_84;
    }
    if (param_5 != 0) {
      local_d8[0] = 0x7c;
      local_d8[1] = 0;
      local_78 = local_d8 + 1;
      local_d8 = local_d8 + 2;
      local_cc = local_cc + 2;
    }
    iVar2 = FUN_00e86dc0(&local_bc,&local_d8,&local_b0,local_98,&local_c0,&local_a4,&local_c4,
                         &local_c8,&local_60,param_8,param_14,piVar15);
    if (iVar2 == 0) {
LAB_00e857f2:
      *local_b8 = local_b0;
      return 0;
    }
    if (uVar20 < *(uint *)(param_14 + 0x70)) {
      uVar20 = *(uint *)(param_14 + 0x70);
    }
    if (param_15 == (int *)0x0) {
      if (*psVar12 == 0x77) {
        uVar3 = local_a4;
        if ((-1 < (int)local_dc) &&
           ((local_dc != local_a4 || (uVar3 = local_dc, (uint)local_a0 != local_c0)))) {
          if ((int)uVar21 < 0) {
            uVar21 = local_dc;
            local_d0 = (uint)local_a0;
          }
          local_dc = 0xffffffff;
          uVar3 = local_a4;
        }
        if ((-1 < (int)uVar3) && ((int)(local_c8 & local_dc) < 0)) {
          local_c4 = local_c0;
          local_c8 = uVar3;
        }
        if (((local_c8 ^ uVar21) & 0xfffffffd) == 0) {
          if (local_d0 == local_c4) {
            uVar21 = uVar21 | local_c8;
          }
          else {
            uVar21 = 0xffffffff;
          }
        }
        else {
          uVar21 = 0xffffffff;
        }
      }
      else {
        local_a0 = (ulonglong)local_c0;
        local_d0 = local_c4;
        local_dc = local_a4;
        uVar21 = local_c8;
      }
      if (param_5 != 0) {
        *local_d8 = 0;
        iVar2 = FUN_00e85950(psVar12,local_bc >> 0xb & 1,0,param_14,0);
        if (iVar2 == -3) {
          *(undefined4 *)(param_14 + 0xa4) = 1;
        }
        else {
          if (iVar2 < 0) {
            uVar11 = 0x19;
            if (iVar2 == -4) {
              uVar11 = 0x46;
            }
            uVar4 = 0x24;
            if (iVar2 != -2) {
              uVar4 = uVar11;
            }
            *local_98 = uVar4;
            goto LAB_00e857f2;
          }
          if (*(int *)(param_14 + 0x78) < iVar2) {
            *(int *)(param_14 + 0x78) = iVar2;
          }
          *local_78 = (short)iVar2;
        }
      }
    }
    psVar13 = local_90;
    psVar5 = local_b0;
    iVar2 = (int)local_d8;
    if (*local_b0 != 0x7c) break;
    if (param_15 == (int *)0x0) {
      local_58 = local_d8;
      *local_d8 = 0x77;
      local_d8[1] = (short)((uint)(iVar2 - (int)psVar12) >> 1);
      psVar5 = local_d8 + 2;
    }
    else {
      psVar5 = (short *)(*local_80 + 4 + local_68 * 2);
      local_cc = local_cc + 2;
      local_d8 = psVar12;
    }
    local_b0 = local_b0 + 1;
    psVar12 = local_d8;
    local_d8 = psVar5;
  } while( true );
  if (param_15 == (int *)0x0) {
    uVar18 = (ulonglong)((uint)(iVar2 - (int)psVar12) >> 1);
    do {
      uVar9 = (ulonglong)(ushort)psVar12[1];
      psVar12[1] = (short)uVar18;
      psVar12 = psVar12 + -uVar9;
      uVar18 = uVar9;
    } while (uVar9 != 0);
  }
  *local_d8 = 0x78;
  local_d8[1] = (short)((uint)(iVar2 - (int)local_90) >> 1);
  psVar12 = local_d8 + 2;
  if (local_88 == 0) goto LAB_00e858d5;
  puVar7 = *(undefined8 **)(param_14 + 0x48);
  if (*(short *)((longlong)puVar7 + 10) != 0) {
    *psVar12 = 0;
    local_d8 = psVar12;
    FUN_00e8e6d0(local_90,2,local_bc >> 0xb & 1,param_14,local_70);
    uVar18 = (longlong)psVar12 - (longlong)psVar13;
    psVar17 = psVar12;
    if (uVar18 != 0) {
      puVar10 = (undefined4 *)((longlong)psVar13 + uVar18);
      puVar6 = (undefined1 *)((longlong)psVar13 + uVar18 + 4);
      psVar5 = local_b0;
      psVar17 = local_d8;
      if (uVar18 < 4) {
        lVar19 = 0;
        local_90 = psVar13;
        puVar14 = puVar10;
      }
      else {
        uVar9 = (ulonglong)((uint)uVar18 & 3);
        lVar19 = uVar18 - uVar9;
        lVar16 = (longlong)psVar13 + (uVar9 - (longlong)psVar12);
        puVar14 = (undefined4 *)((longlong)puVar10 + lVar16);
        puVar6 = puVar6 + lVar16;
        lVar16 = lVar19;
        do {
          *puVar10 = puVar10[-1];
          puVar10 = puVar10 + -1;
          lVar16 = lVar16 + -4;
        } while (lVar16 != 0);
        psVar13 = local_90;
        if (uVar9 == 0) goto LAB_00e8587e;
      }
      lVar16 = (longlong)psVar12 + (-(longlong)local_90 - lVar19);
      do {
        puVar14 = (undefined4 *)((longlong)puVar14 + -1);
        puVar6 = puVar6 + -1;
        *puVar6 = *(undefined1 *)puVar14;
        lVar16 = lVar16 + -1;
        psVar13 = local_90;
      } while (lVar16 != 0);
    }
LAB_00e8587e:
    *psVar13 = 0x81;
    sVar1 = (short)((uint)(((int)psVar17 + 4) - (int)psVar13) >> 1);
    psVar13[1] = sVar1;
    psVar17[2] = 0x78;
    psVar17[3] = sVar1;
    psVar12 = psVar17 + 4;
    local_cc = local_cc + 4;
    puVar7 = *(undefined8 **)(param_14 + 0x48);
  }
  *(undefined8 *)(param_14 + 0x48) = *puVar7;
  local_b0 = psVar5;
LAB_00e858d5:
  *(uint *)(param_14 + 0x70) = uVar20;
  *local_80 = (longlong)psVar12;
  *local_b8 = local_b0;
  *param_9 = (int)local_a0;
  *param_10 = local_dc;
  *param_11 = local_d0;
  *param_12 = uVar21;
  uVar8 = 1;
  if (param_15 != (int *)0x0) {
    if (0x7fffffeb - *param_15 < local_cc) {
      *local_98 = 0x14;
      uVar8 = 0;
    }
    else {
      *param_15 = local_cc + *param_15;
    }
  }
  return uVar8;
}


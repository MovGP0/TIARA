/* Ghidra address: 00a1f6c0 */
/* Ghidra symbol: FUN_00a1f6c0 */


void FUN_00a1f6c0(longlong *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  bool bVar9;
  int iVar10;
  undefined4 uVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  uint *puVar14;
  int iVar15;
  int iVar16;
  undefined8 uVar17;
  int iVar18;
  longlong lVar19;
  uint *puVar20;
  longlong lVar21;
  int *piVar22;
  undefined4 *puVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  int iVar26;
  uint local_a78 [12];
  uint local_a48 [642];
  
  puVar12 = (undefined8 *)(**(code **)param_1[1])(param_1,1,0x30);
  param_1[0x36] = (longlong)puVar12;
  *puVar12 = FUN_00a1fe10;
  puVar12[1] = FUN_00a1ffd0;
  puVar12[2] = FUN_00a20010;
  *(undefined4 *)((longlong)puVar12 + 0x1c) = 0;
  if ((((*(int *)((longlong)param_1 + 0x34) == 0) || ((int)param_1[6] == 0)) ||
      (*(int *)((longlong)param_1 + 0x4c) < 1)) || ((int)param_1[7] < 1)) {
    puVar7 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar7 + 5) = 0x20;
    (*(code *)*puVar7)(param_1);
    if (*(int *)((longlong)param_1 + 0x34) < 0xffdd) goto LAB_00a1f747;
LAB_00a1f76b:
    *(undefined8 *)(*param_1 + 0x28) = 0xffdc00000029;
    (**(code **)*param_1)(param_1);
  }
  else {
    if (0xffdc < *(int *)((longlong)param_1 + 0x34)) goto LAB_00a1f76b;
LAB_00a1f747:
    if (0xffdc < (int)param_1[6]) goto LAB_00a1f76b;
  }
  lVar19 = param_1[9];
  if ((int)lVar19 != 8) {
    lVar21 = *param_1;
    *(undefined4 *)(lVar21 + 0x28) = 0xf;
    *(int *)(lVar21 + 0x2c) = (int)lVar19;
    (**(code **)*param_1)(param_1);
  }
  iVar18 = *(int *)((longlong)param_1 + 0x4c);
  if (10 < iVar18) {
    lVar19 = *param_1;
    *(undefined4 *)(lVar19 + 0x28) = 0x1a;
    *(int *)(lVar19 + 0x2c) = iVar18;
    *(undefined4 *)(*param_1 + 0x30) = 10;
    (**(code **)*param_1)(param_1);
    iVar18 = *(int *)((longlong)param_1 + 0x4c);
  }
  param_1[0x27] = 0x100000001;
  if (iVar18 < 1) {
    iVar10 = 1;
  }
  else {
    piVar22 = (int *)(param_1[0xb] + 0xc);
    iVar26 = 0;
    iVar10 = 1;
    iVar16 = 1;
    do {
      iVar1 = piVar22[-1];
      if ((3 < iVar1 - 1U) || (iVar15 = iVar16, 3 < *piVar22 - 1U)) {
        puVar7 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar7 + 5) = 0x12;
        (*(code *)*puVar7)(param_1);
        iVar18 = *(int *)((longlong)param_1 + 0x4c);
        iVar15 = (int)param_1[0x27];
        iVar1 = piVar22[-1];
        iVar10 = *(int *)((longlong)param_1 + 0x13c);
      }
      iVar16 = iVar1;
      if (iVar1 <= iVar15) {
        iVar16 = iVar15;
      }
      *(int *)(param_1 + 0x27) = iVar16;
      iVar1 = *piVar22;
      if (*piVar22 <= iVar10) {
        iVar1 = iVar10;
      }
      iVar10 = iVar1;
      *(int *)((longlong)param_1 + 0x13c) = iVar10;
      iVar26 = iVar26 + 1;
      piVar22 = piVar22 + 0x18;
    } while (iVar26 < iVar18);
    if (0 < iVar18) {
      puVar23 = (undefined4 *)(param_1[0xb] + 0x30);
      iVar18 = 1;
      while( true ) {
        puVar23[-0xb] = iVar18 + -1;
        puVar23[-3] = 8;
        uVar11 = FUN_00a1bc70(puVar23[-10] * (int)param_1[6],iVar16 << 3);
        puVar23[-5] = uVar11;
        uVar11 = FUN_00a1bc70(puVar23[-9] * *(int *)((longlong)param_1 + 0x34),
                              *(int *)((longlong)param_1 + 0x13c) << 3);
        puVar23[-4] = uVar11;
        uVar11 = FUN_00a1bc70(puVar23[-10] * (int)param_1[6],(int)param_1[0x27]);
        puVar23[-2] = uVar11;
        uVar11 = FUN_00a1bc70(puVar23[-9] * *(int *)((longlong)param_1 + 0x34),
                              *(undefined4 *)((longlong)param_1 + 0x13c));
        puVar23[-1] = uVar11;
        *puVar23 = 1;
        if (*(int *)((longlong)param_1 + 0x4c) <= iVar18) break;
        iVar16 = (int)param_1[0x27];
        iVar18 = iVar18 + 1;
        puVar23 = puVar23 + 0x18;
      }
      iVar10 = *(int *)((longlong)param_1 + 0x13c);
    }
  }
  uVar11 = FUN_00a1bc70(*(undefined4 *)((longlong)param_1 + 0x34),iVar10 << 3);
  *(undefined4 *)(param_1 + 0x28) = uVar11;
  puVar20 = (uint *)param_1[0x1f];
  if (puVar20 == (uint *)0x0) {
    *(undefined4 *)((longlong)param_1 + 0x134) = 0;
    plVar13 = param_1 + 0x1e;
  }
  else {
    if ((int)param_1[0x1e] < 1) {
      *(undefined8 *)(*param_1 + 0x28) = 0x13;
      (**(code **)*param_1)(param_1);
      puVar20 = (uint *)param_1[0x1f];
      if (puVar20[5] == 0) goto LAB_00a1f943;
LAB_00a1f9b3:
      *(undefined4 *)((longlong)param_1 + 0x134) = 1;
      iVar18 = *(int *)((longlong)param_1 + 0x4c);
      iVar10 = 1;
      if (0 < iVar18) {
        lVar19 = (ulonglong)(iVar18 - 1) * 0x100 + 0x100;
        puVar14 = local_a48;
        uVar17 = 0xff;
LAB_00a1f9e5:
        FUN_00626680(puVar14,uVar17,lVar19);
      }
      iVar16 = (int)param_1[0x1e];
    }
    else {
      if (puVar20[5] != 0) goto LAB_00a1f9b3;
LAB_00a1f943:
      if (puVar20[6] != 0x3f) goto LAB_00a1f9b3;
      *(undefined4 *)((longlong)param_1 + 0x134) = 0;
      iVar18 = *(int *)((longlong)param_1 + 0x4c);
      if (0 < iVar18) {
        lVar19 = (ulonglong)(iVar18 - 1) * 4 + 4;
        puVar14 = local_a78;
        iVar10 = 0;
        uVar17 = 0;
        goto LAB_00a1f9e5;
      }
      iVar10 = 0;
      iVar16 = (int)param_1[0x1e];
    }
    if (0 < iVar16) {
      iVar18 = 1;
      do {
        uVar2 = *puVar20;
        uVar25 = (ulonglong)uVar2;
        if (uVar2 - 1 < 4) {
LAB_00a1fa63:
          uVar24 = 0;
          do {
            uVar3 = puVar20[uVar24 + 1];
            if (((int)uVar3 < 0) || (*(int *)((longlong)param_1 + 0x4c) <= (int)uVar3)) {
              lVar19 = *param_1;
              *(undefined4 *)(lVar19 + 0x28) = 0x13;
              *(int *)(lVar19 + 0x2c) = iVar18;
              (**(code **)*param_1)(param_1);
            }
            if ((uVar24 != 0) && ((int)uVar3 <= (int)puVar20[uVar24])) {
              lVar19 = *param_1;
              *(undefined4 *)(lVar19 + 0x28) = 0x13;
              *(int *)(lVar19 + 0x2c) = iVar18;
              (**(code **)*param_1)(param_1);
            }
            uVar24 = uVar24 + 1;
          } while (uVar25 != uVar24);
          bVar9 = true;
        }
        else {
          lVar19 = *param_1;
          *(undefined4 *)(lVar19 + 0x28) = 0x1a;
          *(uint *)(lVar19 + 0x2c) = uVar2;
          *(undefined4 *)(*param_1 + 0x30) = 4;
          (**(code **)*param_1)(param_1);
          if (0 < (int)uVar2) goto LAB_00a1fa63;
          bVar9 = false;
        }
        uVar3 = puVar20[5];
        uVar4 = puVar20[6];
        uVar5 = puVar20[7];
        uVar6 = puVar20[8];
        if (*(int *)((longlong)param_1 + 0x134) == 0) {
          if ((uVar4 != 0x3f) || ((uVar5 != 0 || uVar3 != 0) || uVar6 != 0)) {
            lVar19 = *param_1;
            *(undefined4 *)(lVar19 + 0x28) = 0x11;
            *(int *)(lVar19 + 0x2c) = iVar18;
            (**(code **)*param_1)(param_1);
          }
          if (bVar9) {
            uVar24 = 0;
            do {
              uVar2 = puVar20[uVar24 + 1];
              if (local_a78[(int)uVar2] != 0) {
                lVar19 = *param_1;
                *(undefined4 *)(lVar19 + 0x28) = 0x13;
                *(int *)(lVar19 + 0x2c) = iVar18;
                (**(code **)*param_1)(param_1);
              }
              local_a78[(int)uVar2] = 1;
              uVar24 = uVar24 + 1;
            } while (uVar25 != uVar24);
          }
        }
        else {
          if ((((0x3f < uVar3) || (10 < uVar6)) || (10 < uVar5)) ||
             (((int)uVar4 < (int)uVar3 || (0x3f < (int)uVar4)))) {
            lVar19 = *param_1;
            *(undefined4 *)(lVar19 + 0x28) = 0x11;
            *(int *)(lVar19 + 0x2c) = iVar18;
            (**(code **)*param_1)(param_1);
          }
          if (uVar3 == 0) {
            if (uVar4 != 0) goto LAB_00a1fbc9;
          }
          else if (uVar2 != 1) {
LAB_00a1fbc9:
            lVar19 = *param_1;
            *(undefined4 *)(lVar19 + 0x28) = 0x11;
            *(int *)(lVar19 + 0x2c) = iVar18;
            (**(code **)*param_1)(param_1);
          }
          if (bVar9) {
            uVar24 = 0;
            do {
              lVar19 = (longlong)(int)puVar20[uVar24 + 1];
              if ((uVar3 != 0) && ((int)local_a48[lVar19 * 0x40] < 0)) {
                lVar21 = *param_1;
                *(undefined4 *)(lVar21 + 0x28) = 0x11;
                *(int *)(lVar21 + 0x2c) = iVar18;
                (**(code **)*param_1)(param_1);
              }
              lVar21 = (longlong)(int)uVar3 + -1;
              if ((int)uVar3 <= (int)uVar4) {
                do {
                  if ((int)local_a48[lVar19 * 0x40 + lVar21 + 1] < 0) {
                    if (uVar5 != 0) goto LAB_00a1fca4;
                  }
                  else if ((uVar6 != uVar5 - 1) || (uVar5 != local_a48[lVar19 * 0x40 + lVar21 + 1]))
                  {
LAB_00a1fca4:
                    lVar8 = *param_1;
                    *(undefined4 *)(lVar8 + 0x28) = 0x11;
                    *(int *)(lVar8 + 0x2c) = iVar18;
                    (**(code **)*param_1)(param_1);
                  }
                  local_a48[lVar19 * 0x40 + lVar21 + 1] = uVar6;
                  lVar21 = lVar21 + 1;
                } while (lVar21 < (int)uVar4);
              }
              uVar24 = uVar24 + 1;
            } while (uVar24 != uVar25);
          }
        }
        puVar20 = puVar20 + 9;
        bVar9 = iVar18 < (int)param_1[0x1e];
        iVar18 = iVar18 + 1;
      } while (bVar9);
      iVar18 = *(int *)((longlong)param_1 + 0x4c);
      iVar10 = *(int *)((longlong)param_1 + 0x134);
    }
    if (iVar10 == 0) {
      if (0 < iVar18) {
        lVar19 = 0;
        do {
          if (local_a78[lVar19] == 0) {
            puVar7 = (undefined8 *)*param_1;
            *(undefined4 *)(puVar7 + 5) = 0x2d;
            (*(code *)*puVar7)(param_1);
            iVar18 = *(int *)((longlong)param_1 + 0x4c);
          }
          lVar19 = lVar19 + 1;
        } while (lVar19 < iVar18);
      }
    }
    else if (0 < iVar18) {
      puVar20 = local_a48;
      lVar19 = 0;
      do {
        if ((int)*puVar20 < 0) {
          puVar7 = (undefined8 *)*param_1;
          *(undefined4 *)(puVar7 + 5) = 0x2d;
          (*(code *)*puVar7)(param_1);
          iVar18 = *(int *)((longlong)param_1 + 0x4c);
        }
        lVar19 = lVar19 + 1;
        puVar20 = puVar20 + 0x40;
      } while (lVar19 < iVar18);
    }
    if (*(int *)((longlong)param_1 + 0x134) == 0) goto LAB_00a1fda3;
    plVar13 = param_1 + 0x21;
  }
  *(undefined4 *)plVar13 = 1;
LAB_00a1fda3:
  if (param_2 == 0) {
    *(undefined4 *)(puVar12 + 4) = 0;
    iVar18 = (int)param_1[0x21];
  }
  else {
    iVar18 = (int)param_1[0x21];
    *(uint *)(puVar12 + 4) = (iVar18 == 0) + 1;
  }
  *(undefined4 *)((longlong)puVar12 + 0x2c) = 0;
  *(undefined4 *)((longlong)puVar12 + 0x24) = 0;
  *(int *)(puVar12 + 5) = (int)param_1[0x1e] << (iVar18 != 0);
  return;
}


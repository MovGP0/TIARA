/* Ghidra address: 00a0d280 */
/* Ghidra symbol: FUN_00a0d280 */


longlong FUN_00a0d280(longlong *param_1,longlong *param_2,uint param_3,uint param_4,int param_5)

{
  uint uVar1;
  undefined8 *puVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  
  uVar4 = param_4 + param_3;
  if (((*(uint *)(param_2 + 1) < uVar4) || (*(uint *)(param_2 + 2) < param_4)) || (*param_2 == 0)) {
    puVar2 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar2 + 5) = 0x16;
    (*(code *)*puVar2)();
  }
  if ((param_3 < *(uint *)((longlong)param_2 + 0x1c)) ||
     (*(uint *)((longlong)param_2 + 0x1c) + *(int *)((longlong)param_2 + 0x14) < uVar4)) {
    if (*(int *)((longlong)param_2 + 0x2c) == 0) {
      puVar2 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar2 + 5) = 0x45;
      (*(code *)*puVar2)();
    }
    if ((int)param_2[5] != 0) {
      iVar8 = *(int *)((longlong)param_2 + 0x14);
      if (0 < iVar8) {
        iVar10 = *(int *)((longlong)param_2 + 0x1c);
        if ((int)param_2[3] <= iVar8) {
          iVar8 = (int)param_2[3];
        }
        iVar6 = (int)param_2[4] - iVar10;
        if (iVar8 <= iVar6) {
          iVar6 = iVar8;
        }
        iVar8 = (int)param_2[1] - iVar10;
        if (iVar6 <= iVar8) {
          iVar8 = iVar6;
        }
        if (0 < iVar8) {
          iVar6 = *(int *)((longlong)param_2 + 0xc) * 0x80;
          iVar10 = iVar10 * iVar6;
          iVar12 = 0;
          do {
            iVar8 = iVar8 * iVar6;
            (*(code *)param_2[8])
                      (param_1,param_2 + 7,*(undefined8 *)(*param_2 + (longlong)iVar12 * 8),iVar10,
                       iVar8);
            iVar7 = (int)param_2[3];
            iVar12 = iVar12 + iVar7;
            iVar5 = *(int *)((longlong)param_2 + 0x14) - iVar12;
            if (iVar5 == 0 || *(int *)((longlong)param_2 + 0x14) < iVar12) break;
            iVar10 = iVar10 + iVar8;
            if (iVar7 <= iVar5) {
              iVar5 = iVar7;
            }
            iVar8 = *(int *)((longlong)param_2 + 0x1c) + iVar12;
            iVar7 = (int)param_2[4] - iVar8;
            if (iVar5 <= iVar7) {
              iVar7 = iVar5;
            }
            iVar8 = (int)param_2[1] - iVar8;
            if (iVar7 <= iVar8) {
              iVar8 = iVar7;
            }
          } while (0 < iVar8);
        }
      }
      *(undefined4 *)(param_2 + 5) = 0;
    }
    iVar8 = *(int *)((longlong)param_2 + 0x14);
    uVar11 = param_3;
    if ((param_3 <= *(uint *)((longlong)param_2 + 0x1c)) &&
       (uVar11 = uVar4 - iVar8, (int)uVar11 < 0)) {
      uVar11 = 0;
    }
    *(uint *)((longlong)param_2 + 0x1c) = uVar11;
    if (0 < iVar8) {
      if ((int)param_2[3] <= iVar8) {
        iVar8 = (int)param_2[3];
      }
      iVar10 = (int)param_2[4] - uVar11;
      if (iVar8 <= iVar10) {
        iVar10 = iVar8;
      }
      iVar8 = (int)param_2[1] - uVar11;
      if (iVar10 <= iVar8) {
        iVar8 = iVar10;
      }
      if (0 < iVar8) {
        iVar12 = *(int *)((longlong)param_2 + 0xc) * 0x80;
        iVar10 = uVar11 * iVar12;
        iVar6 = 0;
        do {
          iVar8 = iVar8 * iVar12;
          (*(code *)param_2[7])
                    (param_1,param_2 + 7,*(undefined8 *)(*param_2 + (longlong)iVar6 * 8),iVar10,
                     iVar8);
          iVar7 = (int)param_2[3];
          iVar6 = iVar6 + iVar7;
          iVar5 = *(int *)((longlong)param_2 + 0x14) - iVar6;
          if (iVar5 == 0 || *(int *)((longlong)param_2 + 0x14) < iVar6) break;
          iVar10 = iVar10 + iVar8;
          if (iVar7 <= iVar5) {
            iVar5 = iVar7;
          }
          iVar8 = *(int *)((longlong)param_2 + 0x1c) + iVar6;
          iVar7 = (int)param_2[4] - iVar8;
          if (iVar5 <= iVar7) {
            iVar7 = iVar5;
          }
          iVar8 = (int)param_2[1] - iVar8;
          if (iVar7 <= iVar8) {
            iVar8 = iVar7;
          }
        } while (0 < iVar8);
      }
    }
  }
  uVar11 = *(uint *)(param_2 + 4);
  if (uVar4 <= uVar11) goto LAB_00a0d4d8;
  if (uVar11 < param_3) {
    uVar11 = param_3;
    if (param_5 == 0) {
      bVar3 = false;
      iVar8 = *(int *)((longlong)param_2 + 0x24);
    }
    else {
      puVar2 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar2 + 5) = 0x16;
      (*(code *)*puVar2)(param_1);
LAB_00a0d47d:
      *(uint *)(param_2 + 4) = uVar4;
      bVar3 = true;
      iVar8 = *(int *)((longlong)param_2 + 0x24);
    }
  }
  else {
    if (param_5 != 0) goto LAB_00a0d47d;
    bVar3 = false;
    iVar8 = *(int *)((longlong)param_2 + 0x24);
  }
  if (iVar8 == 0) {
    if (!bVar3) {
      puVar2 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar2 + 5) = 0x16;
      (*(code *)*puVar2)(param_1);
    }
  }
  else {
    uVar11 = uVar11 - *(int *)((longlong)param_2 + 0x1c);
    uVar4 = uVar4 - *(int *)((longlong)param_2 + 0x1c);
    if (uVar11 < uVar4) {
      uVar1 = *(uint *)((longlong)param_2 + 0xc);
      uVar9 = (ulonglong)uVar11;
      do {
        FUN_00a1bd20(*(undefined8 *)(*param_2 + uVar9 * 8),(ulonglong)uVar1 << 7);
        uVar9 = uVar9 + 1;
      } while (uVar4 != uVar9);
    }
  }
LAB_00a0d4d8:
  if (param_5 != 0) {
    *(undefined4 *)(param_2 + 5) = 1;
  }
  return (ulonglong)(param_3 - *(int *)((longlong)param_2 + 0x1c)) * 8 + *param_2;
}


/* Ghidra address: 0062bf20 */
/* Ghidra symbol: FUN_0062bf20 */


undefined8 FUN_0062bf20(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  longlong *plVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  
  uVar12 = (int)param_1[3] - 5;
  if (*(uint *)((longlong)param_1 + 0x44) < uVar12) {
    uVar12 = *(uint *)((longlong)param_1 + 0x44);
  }
  plVar4 = (longlong *)*param_1;
  lVar8 = plVar4[1];
  uVar6 = *(uint *)(plVar4 + 3);
  uVar5 = *(int *)((longlong)param_1 + 0x1714) + 0x2a >> 3;
  bVar13 = false;
  if (uVar5 <= uVar6) {
    do {
      bVar13 = false;
      uVar6 = uVar6 - uVar5;
      uVar11 = *(int *)((longlong)param_1 + 0x94) - *(int *)((longlong)param_1 + 0x84);
      uVar5 = (int)plVar4[1] + uVar11;
      if (uVar5 < 0xffff) {
        uVar7 = uVar5;
        if (uVar6 < uVar5) {
LAB_0062bfa4:
          uVar7 = uVar6;
        }
      }
      else {
        uVar7 = 0xffff;
        if (uVar6 < 0xffff) goto LAB_0062bfa4;
      }
      if (uVar7 < uVar12) {
        if (((uVar7 != uVar5) || (param_2 == 0)) || (param_2 != 4 && uVar7 == 0)) break;
      }
      bVar13 = uVar5 == uVar7 && param_2 == 4;
      FUN_00632240(param_1,0,0,bVar13);
      *(char *)(param_1[2] + (ulonglong)((int)param_1[5] - 4)) = (char)uVar7;
      *(char *)(param_1[2] + (ulonglong)((int)param_1[5] - 3)) = (char)(uVar7 >> 8);
      *(char *)(param_1[2] + (ulonglong)((int)param_1[5] - 2)) = (char)~uVar7;
      *(char *)(param_1[2] + (ulonglong)((int)param_1[5] - 1)) = (char)(~uVar7 >> 8);
      lVar9 = *param_1;
      lVar1 = *(longlong *)(lVar9 + 0x28);
      FUN_00632390(lVar1);
      uVar6 = *(uint *)(lVar1 + 0x28);
      if (*(uint *)(lVar9 + 0x18) < *(uint *)(lVar1 + 0x28)) {
        uVar6 = *(uint *)(lVar9 + 0x18);
      }
      if (uVar6 != 0) {
        FUN_00626670(*(undefined8 *)(lVar9 + 0x10),*(undefined8 *)(lVar1 + 0x20));
        *(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + (ulonglong)uVar6;
        *(longlong *)(lVar1 + 0x20) = *(longlong *)(lVar1 + 0x20) + (ulonglong)uVar6;
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + uVar6;
        *(int *)(lVar9 + 0x18) = *(int *)(lVar9 + 0x18) - uVar6;
        iVar2 = *(int *)(lVar1 + 0x28) - uVar6;
        *(int *)(lVar1 + 0x28) = iVar2;
        if (iVar2 == 0) {
          *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(lVar1 + 0x10);
        }
      }
      if (uVar11 != 0) {
        uVar6 = uVar7;
        if (uVar11 <= uVar7) {
          uVar6 = uVar11;
        }
        FUN_00626670(*(undefined8 *)(*param_1 + 0x10),
                     (longlong)*(int *)((longlong)param_1 + 0x84) + param_1[10]);
        lVar9 = *param_1;
        *(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + (ulonglong)uVar6;
        *(int *)(lVar9 + 0x18) = *(int *)(lVar9 + 0x18) - uVar6;
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + uVar6;
        *(int *)((longlong)param_1 + 0x84) = *(int *)((longlong)param_1 + 0x84) + uVar6;
        uVar7 = uVar7 - uVar6;
      }
      if (uVar7 != 0) {
        plVar4 = (longlong *)*param_1;
        lVar9 = plVar4[2];
        uVar6 = *(uint *)(plVar4 + 1);
        uVar5 = uVar7;
        if (uVar6 <= uVar7) {
          uVar5 = uVar6;
        }
        if (uVar5 != 0) {
          *(uint *)(plVar4 + 1) = uVar6 - uVar5;
          FUN_00626670(lVar9,*plVar4);
          if (*(int *)(plVar4[5] + 0x2c) == 2) {
            uVar3 = FUN_00634c80(*(undefined4 *)((longlong)plVar4 + 0x4c),lVar9);
LAB_0062c17b:
            *(undefined4 *)((longlong)plVar4 + 0x4c) = uVar3;
          }
          else if (*(int *)(plVar4[5] + 0x2c) == 1) {
            uVar3 = FUN_006347b0(*(undefined4 *)((longlong)plVar4 + 0x4c),lVar9);
            goto LAB_0062c17b;
          }
          *plVar4 = *plVar4 + (ulonglong)uVar5;
          *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + uVar5;
          plVar4 = (longlong *)*param_1;
          lVar9 = plVar4[2];
        }
        plVar4[2] = (ulonglong)uVar7 + lVar9;
        *(uint *)(plVar4 + 3) = (int)plVar4[3] - uVar7;
        *(int *)((longlong)plVar4 + 0x1c) = *(int *)((longlong)plVar4 + 0x1c) + uVar7;
      }
      plVar4 = (longlong *)*param_1;
      if (bVar13) break;
      uVar5 = *(int *)((longlong)param_1 + 0x1714) + 0x2a >> 3;
      uVar6 = *(uint *)(plVar4 + 3);
    } while (uVar5 <= uVar6);
  }
  uVar12 = (int)lVar8 - (int)plVar4[1];
  if (uVar12 == 0) {
    uVar6 = *(uint *)((longlong)param_1 + 0x94);
    if (*(uint *)(param_1 + 0x2e3) < uVar6) goto LAB_0062c2be;
  }
  else {
    uVar6 = *(uint *)((longlong)param_1 + 0x44);
    if (uVar12 < uVar6) {
      if ((uint)((int)param_1[0xb] - *(int *)((longlong)param_1 + 0x94)) <= uVar12) {
        iVar2 = *(int *)((longlong)param_1 + 0x94) - uVar6;
        *(int *)((longlong)param_1 + 0x94) = iVar2;
        FUN_00626670(param_1[10],(ulonglong)uVar6 + param_1[10],iVar2);
        if (*(uint *)(param_1 + 0x2e1) < 2) {
          *(uint *)(param_1 + 0x2e1) = *(uint *)(param_1 + 0x2e1) + 1;
        }
      }
      FUN_00626670((ulonglong)*(uint *)((longlong)param_1 + 0x94) + param_1[10],
                   *(longlong *)*param_1 - (ulonglong)uVar12);
      uVar6 = *(int *)((longlong)param_1 + 0x94) + uVar12;
      *(uint *)((longlong)param_1 + 0x94) = uVar6;
      uVar5 = *(uint *)((longlong)param_1 + 0x44);
    }
    else {
      *(undefined4 *)(param_1 + 0x2e1) = 2;
      FUN_00626670(param_1[10],*plVar4 - (ulonglong)uVar6);
      uVar6 = *(uint *)((longlong)param_1 + 0x44);
      *(uint *)((longlong)param_1 + 0x94) = uVar6;
      uVar5 = uVar6;
    }
    *(uint *)((longlong)param_1 + 0x84) = uVar6;
    uVar5 = uVar5 - *(int *)((longlong)param_1 + 0x170c);
    if (uVar12 <= uVar5) {
      uVar5 = uVar12;
    }
    *(uint *)((longlong)param_1 + 0x170c) = uVar5 + *(int *)((longlong)param_1 + 0x170c);
    if (*(uint *)(param_1 + 0x2e3) < uVar6) {
LAB_0062c2be:
      *(uint *)(param_1 + 0x2e3) = uVar6;
    }
  }
  if (bVar13) {
    return 3;
  }
  plVar4 = (longlong *)*param_1;
  uVar12 = *(uint *)(plVar4 + 1);
  if (((param_2 | 4) == 4) || (uVar12 != 0)) {
    uVar5 = ((int)param_1[0xb] - uVar6) - 1;
    if (uVar5 < uVar12) {
      uVar11 = *(uint *)((longlong)param_1 + 0x44);
      if ((int)uVar11 <= *(int *)((longlong)param_1 + 0x84)) {
        *(uint *)((longlong)param_1 + 0x84) = *(int *)((longlong)param_1 + 0x84) - uVar11;
        *(uint *)((longlong)param_1 + 0x94) = uVar6 - uVar11;
        FUN_00626670(param_1[10],(ulonglong)uVar11 + param_1[10]);
        if (*(uint *)(param_1 + 0x2e1) < 2) {
          *(uint *)(param_1 + 0x2e1) = *(uint *)(param_1 + 0x2e1) + 1;
        }
        uVar5 = uVar5 + *(int *)((longlong)param_1 + 0x44);
        plVar4 = (longlong *)*param_1;
        uVar12 = *(uint *)(plVar4 + 1);
      }
    }
  }
  else {
    if (uVar6 == *(uint *)((longlong)param_1 + 0x84)) {
      return 1;
    }
    uVar5 = ((int)param_1[0xb] - uVar6) - 1;
    uVar12 = 0;
  }
  if (uVar12 < uVar5) {
    uVar5 = uVar12;
  }
  if (uVar5 == 0) {
    uVar5 = *(uint *)((longlong)param_1 + 0x94);
    if (uVar5 <= *(uint *)(param_1 + 0x2e3)) goto LAB_0062c3fd;
  }
  else {
    lVar8 = (ulonglong)*(uint *)((longlong)param_1 + 0x94) + param_1[10];
    *(uint *)(plVar4 + 1) = uVar12 - uVar5;
    FUN_00626670(lVar8,*plVar4,(ulonglong)uVar5);
    if (*(int *)(plVar4[5] + 0x2c) == 2) {
      uVar3 = FUN_00634c80(*(undefined4 *)((longlong)plVar4 + 0x4c),lVar8,uVar5);
LAB_0062c3d3:
      *(undefined4 *)((longlong)plVar4 + 0x4c) = uVar3;
    }
    else if (*(int *)(plVar4[5] + 0x2c) == 1) {
      uVar3 = FUN_006347b0(*(undefined4 *)((longlong)plVar4 + 0x4c),lVar8,uVar5);
      goto LAB_0062c3d3;
    }
    *plVar4 = *plVar4 + (ulonglong)uVar5;
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + uVar5;
    uVar5 = uVar5 + *(int *)((longlong)param_1 + 0x94);
    *(uint *)((longlong)param_1 + 0x94) = uVar5;
    if (uVar5 <= *(uint *)(param_1 + 0x2e3)) goto LAB_0062c3fd;
  }
  *(uint *)(param_1 + 0x2e3) = uVar5;
LAB_0062c3fd:
  uVar6 = (int)param_1[3] - (*(int *)((longlong)param_1 + 0x1714) + 0x2a >> 3);
  uVar12 = 0xffff;
  if (uVar6 < 0xffff) {
    uVar12 = uVar6;
  }
  uVar6 = *(uint *)((longlong)param_1 + 0x44);
  if (uVar12 <= *(uint *)((longlong)param_1 + 0x44)) {
    uVar6 = uVar12;
  }
  uVar5 = uVar5 - *(int *)((longlong)param_1 + 0x84);
  if (uVar5 < uVar6) {
    if (param_2 == 0) {
      return 0;
    }
    if (param_2 != 4 && uVar5 == 0) {
      return 0;
    }
    if (uVar12 < uVar5) {
      return 0;
    }
    if (*(int *)(*param_1 + 8) != 0) {
      return 0;
    }
  }
  uVar6 = uVar5;
  if (uVar12 < uVar5) {
    uVar6 = uVar12;
  }
  bVar13 = false;
  if ((param_2 == 4) && (*(int *)(*param_1 + 8) == 0)) {
    bVar13 = uVar5 <= uVar12;
  }
  FUN_00632240(param_1,(longlong)*(int *)((longlong)param_1 + 0x84) + param_1[10],uVar6,bVar13);
  *(int *)((longlong)param_1 + 0x84) = *(int *)((longlong)param_1 + 0x84) + uVar6;
  lVar8 = *param_1;
  lVar9 = *(longlong *)(lVar8 + 0x28);
  FUN_00632390(lVar9);
  uVar12 = *(uint *)(lVar9 + 0x28);
  if (*(uint *)(lVar8 + 0x18) < *(uint *)(lVar9 + 0x28)) {
    uVar12 = *(uint *)(lVar8 + 0x18);
  }
  if (uVar12 != 0) {
    uVar10 = (ulonglong)uVar12;
    FUN_00626670(*(undefined8 *)(lVar8 + 0x10),*(undefined8 *)(lVar9 + 0x20),uVar10);
    *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + uVar10;
    *(longlong *)(lVar9 + 0x20) = *(longlong *)(lVar9 + 0x20) + uVar10;
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + uVar12;
    *(int *)(lVar8 + 0x18) = *(int *)(lVar8 + 0x18) - uVar12;
    iVar2 = *(int *)(lVar9 + 0x28) - uVar12;
    *(int *)(lVar9 + 0x28) = iVar2;
    if (iVar2 == 0) {
      *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)(lVar9 + 0x10);
    }
  }
  if (bVar13 == false) {
    return 0;
  }
  return 2;
}


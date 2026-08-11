/* Ghidra address: 00745810 */
/* Ghidra symbol: FUN_00745810 */


void FUN_00745810(longlong param_1,int *param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  
  local_58 = param_2[2] - *param_2;
  local_54 = param_2[3] - param_2[1];
  dVar11 = 0.0;
  dVar10 = 0.0;
  dVar13 = 0.0;
  dVar12 = 0.0;
  local_50 = 0;
  iVar9 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x4b8) + 0x10) + 0x10);
  local_5c = 0;
  if (-1 < iVar9 + -1) {
    do {
      lVar5 = FUN_00746290(*(undefined8 *)(param_1 + 0x4b8),local_5c);
      dVar10 = dVar11;
      if (*(char *)(lVar5 + 0x18) == '\0') {
        local_58 = local_58 - *(int *)(lVar5 + 0x28);
      }
      else if (*(char *)(lVar5 + 0x18) == '\x01') {
        local_50 = local_50 + 1;
        dVar10 = dVar11 + *(double *)(lVar5 + 0x20);
      }
      else {
        iVar7 = 0;
        iVar8 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x4b0) + 0x10) + 0x10);
        local_4c = 0;
        if (-1 < iVar8 + -1) {
          do {
            lVar6 = FUN_00747010(*(undefined8 *)(param_1 + 0x4c0),local_5c,local_4c);
            if ((((lVar6 != 0) && (*(longlong *)(lVar6 + 0x18) != 0)) &&
                (*(int *)(lVar6 + 0x20) == local_5c)) && (*(int *)(lVar6 + 0x24) == local_4c)) {
              plVar1 = *(longlong **)(*(longlong *)(lVar6 + 0x18) + 0xd8);
              iVar4 = (**(code **)(*plVar1 + 0x20))(plVar1,2);
              iVar4 = iVar4 + *(int *)(*(longlong *)(param_1 + 0x328) + 0x10) +
                      *(int *)(*(longlong *)(param_1 + 0x328) + 0x18);
              if (iVar7 < iVar4) {
                iVar7 = iVar4;
              }
            }
            local_4c = local_4c + 1;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
        local_58 = local_58 - iVar7;
        *(int *)(lVar5 + 0x28) = iVar7;
      }
      local_5c = local_5c + 1;
      iVar9 = iVar9 + -1;
      dVar11 = dVar10;
    } while (iVar9 != 0);
  }
  iVar8 = 0;
  iVar9 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x4b0) + 0x10) + 0x10);
  local_5c = 0;
  if (-1 < iVar9 + -1) {
    do {
      lVar5 = FUN_00746290(*(undefined8 *)(param_1 + 0x4b0),local_5c);
      dVar12 = dVar13;
      if (*(char *)(lVar5 + 0x18) == '\0') {
        local_54 = local_54 - *(int *)(lVar5 + 0x28);
      }
      else if (*(char *)(lVar5 + 0x18) == '\x01') {
        iVar8 = iVar8 + 1;
        dVar12 = dVar13 + *(double *)(lVar5 + 0x20);
      }
      else {
        iVar4 = 0;
        iVar7 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x4b8) + 0x10) + 0x10);
        local_4c = 0;
        if (-1 < iVar7 + -1) {
          do {
            lVar6 = FUN_00747010(*(undefined8 *)(param_1 + 0x4c0),local_4c,local_5c);
            if (((lVar6 != 0) && (*(longlong *)(lVar6 + 0x18) != 0)) &&
               ((*(int *)(lVar6 + 0x20) == local_4c && (*(int *)(lVar6 + 0x24) == local_5c)))) {
              plVar1 = *(longlong **)(*(longlong *)(lVar6 + 0x18) + 0xd8);
              iVar3 = (**(code **)(*plVar1 + 0x20))(plVar1,3);
              iVar3 = iVar3 + *(int *)(*(longlong *)(param_1 + 0x328) + 0x14) +
                      *(int *)(*(longlong *)(param_1 + 0x328) + 0x1c);
              if (iVar4 < iVar3) {
                iVar4 = iVar3;
              }
            }
            local_4c = local_4c + 1;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
        local_54 = local_54 - iVar4;
        *(int *)(lVar5 + 0x28) = iVar4;
      }
      local_5c = local_5c + 1;
      iVar9 = iVar9 + -1;
      dVar13 = dVar12;
    } while (iVar9 != 0);
  }
  iVar9 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x4b8) + 0x10) + 0x10);
  local_5c = 0;
  iVar7 = local_58;
  if (-1 < iVar9 + -1) {
    do {
      lVar5 = FUN_00746290(*(undefined8 *)(param_1 + 0x4b8),local_5c);
      if (*(char *)(lVar5 + 0x18) == '\x01') {
        cVar2 = FUN_00527350(dVar10,0);
        if (cVar2 == '\0') {
          FUN_007461c0(lVar5,(*(double *)(lVar5 + 0x20) / dVar10) * 100.0);
        }
        else {
          FUN_007461c0(lVar5,100.0 / (double)local_50);
        }
        iVar4 = FUN_0040c840((double)local_58 * (*(double *)(lVar5 + 0x20) / 100.0));
        *(int *)(lVar5 + 0x28) = iVar4;
        iVar7 = iVar7 - iVar4;
        if ((0 < iVar7) &&
           (local_5c == *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x4b8) + 0x10) + 0x10) + -1))
        {
          *(int *)(lVar5 + 0x28) = *(int *)(lVar5 + 0x28) + iVar7;
        }
      }
      local_5c = local_5c + 1;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  iVar9 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x4b0) + 0x10) + 0x10);
  local_5c = 0;
  iVar7 = local_54;
  if (-1 < iVar9 + -1) {
    do {
      lVar5 = FUN_00746290(*(undefined8 *)(param_1 + 0x4b0),local_5c);
      if (*(char *)(lVar5 + 0x18) == '\x01') {
        cVar2 = FUN_00527350(dVar12,0);
        if (cVar2 == '\0') {
          FUN_007461c0(lVar5,(*(double *)(lVar5 + 0x20) / dVar12) * 100.0);
        }
        else {
          FUN_007461c0(lVar5,100.0 / (double)iVar8);
        }
        iVar4 = FUN_0040c840((double)local_54 * (*(double *)(lVar5 + 0x20) / 100.0));
        *(int *)(lVar5 + 0x28) = iVar4;
        iVar7 = iVar7 - iVar4;
        if ((0 < iVar7) &&
           (local_5c == *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x4b0) + 0x10) + 0x10) + -1))
        {
          *(int *)(lVar5 + 0x28) = *(int *)(lVar5 + 0x28) + iVar7;
        }
      }
      local_5c = local_5c + 1;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  *(undefined1 *)(param_1 + 0x4c8) = 0;
  return;
}


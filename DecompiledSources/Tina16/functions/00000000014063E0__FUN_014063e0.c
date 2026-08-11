/* Ghidra address: 014063e0 */
/* Ghidra symbol: FUN_014063e0 */


void FUN_014063e0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  double dVar2;
  undefined4 uVar3;
  char cVar4;
  double *pdVar5;
  double *pdVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  double dVar14;
  double dVar15;
  undefined4 local_70;
  undefined4 local_6c;
  
  if (*(int *)(*(longlong *)(param_1 + 0x6d0) + 0x4a8) == 0) {
    if (*PTR_DAT_020039a8 == '\0') {
      cVar4 = FUN_00b0a890(*(undefined8 *)(param_1 + 0x6d8));
      *(char *)(param_1 + 0x7b0) = cVar4;
      if (cVar4 == '\0') {
        lVar11 = *(longlong *)(param_1 + 0x7a8);
        local_70 = 2;
        if (1 < *(int *)(lVar11 + 0x10) + -1) {
          iVar12 = *(int *)(lVar11 + 0x10) + -2;
          do {
            local_6c = *(int *)(lVar11 + 0x10) + -1;
            if (local_70 <= local_6c) {
              iVar13 = (local_70 - local_6c) + -1;
              do {
                uVar3 = CONCAT22((short)((uint)local_6c >> 0x10),(short)local_6c + -1);
                pdVar5 = (double *)FUN_01d3c210(lVar11,uVar3);
                pdVar6 = (double *)FUN_01d3c210(lVar11,local_6c);
                if (*pdVar6 <= *pdVar5 && *pdVar5 != *pdVar6) {
                  puVar7 = (undefined8 *)FUN_01d3c210(lVar11,uVar3);
                  uVar1 = *puVar7;
                  puVar7 = (undefined8 *)FUN_01d3c210(lVar11,uVar3);
                  puVar8 = (undefined8 *)FUN_01d3c210(lVar11,local_6c);
                  *puVar7 = *puVar8;
                  puVar7 = (undefined8 *)FUN_01d3c210(lVar11,local_6c);
                  *puVar7 = uVar1;
                  lVar9 = FUN_01d3c210(lVar11,uVar3);
                  uVar1 = *(undefined8 *)(lVar9 + 8);
                  lVar9 = FUN_01d3c210(lVar11,uVar3);
                  lVar10 = FUN_01d3c210(lVar11,local_6c);
                  *(undefined8 *)(lVar9 + 8) = *(undefined8 *)(lVar10 + 8);
                  lVar9 = FUN_01d3c210(lVar11,local_6c);
                  *(undefined8 *)(lVar9 + 8) = uVar1;
                  lVar9 = FUN_01d3c210(lVar11,uVar3);
                  uVar1 = *(undefined8 *)(lVar9 + 0x10);
                  lVar9 = FUN_01d3c210(lVar11,uVar3);
                  lVar10 = FUN_01d3c210(lVar11,local_6c);
                  *(undefined8 *)(lVar9 + 0x10) = *(undefined8 *)(lVar10 + 0x10);
                  lVar9 = FUN_01d3c210(lVar11,local_6c);
                  *(undefined8 *)(lVar9 + 0x10) = uVar1;
                }
                local_6c = local_6c + -1;
                iVar13 = iVar13 + 1;
              } while (iVar13 != 0);
            }
            local_70 = local_70 + 1;
            iVar12 = iVar12 + -1;
          } while (iVar12 != 0);
        }
        uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x790) + 0x10);
        FUN_00b95290(uVar1);
        FUN_01d3c2d0(uVar1,*(undefined8 *)(param_1 + 0x7a8));
        lVar11 = FUN_01d3c210(uVar1,0);
        **(undefined8 **)(param_1 + 0x790) = *(undefined8 *)(lVar11 + 8);
        lVar11 = FUN_01d3c210(uVar1,0);
        *(undefined8 *)(*(longlong *)(param_1 + 0x790) + 8) = *(undefined8 *)(lVar11 + 0x10);
      }
    }
    else {
      FUN_00b0a960(*(undefined8 *)(param_1 + 0x6d8),param_2);
      if (*(int *)(*(longlong *)(param_1 + 0x6d8) + 0x638) == 1) {
        *(undefined4 *)(param_1 + 0x508) = 1;
      }
    }
  }
  if (*(int *)(*(longlong *)(param_1 + 0x6d0) + 0x4a8) == 1) {
    if (*PTR_DAT_020039a8 == '\0') {
      cVar4 = FUN_00b0a890(*(undefined8 *)(param_1 + 0x6d8));
      *(char *)(param_1 + 0x7b0) = cVar4;
      if (cVar4 == '\0') {
        lVar11 = *(longlong *)(param_1 + 0x7a8);
        local_70 = 2;
        if (1 < *(int *)(lVar11 + 0x10) + -1) {
          iVar12 = *(int *)(lVar11 + 0x10) + -2;
          do {
            local_6c = *(int *)(lVar11 + 0x10) + -1;
            if (local_70 <= local_6c) {
              iVar13 = (local_70 - local_6c) + -1;
              do {
                uVar3 = CONCAT22((short)((uint)local_6c >> 0x10),(short)local_6c + -1);
                pdVar5 = (double *)FUN_01d3c210(lVar11,uVar3);
                pdVar6 = (double *)FUN_01d3c210(lVar11,local_6c);
                if (*pdVar6 <= *pdVar5 && *pdVar5 != *pdVar6) {
                  puVar7 = (undefined8 *)FUN_01d3c210(lVar11,uVar3);
                  uVar1 = *puVar7;
                  puVar7 = (undefined8 *)FUN_01d3c210(lVar11,uVar3);
                  puVar8 = (undefined8 *)FUN_01d3c210(lVar11,local_6c);
                  *puVar7 = *puVar8;
                  puVar7 = (undefined8 *)FUN_01d3c210(lVar11,local_6c);
                  *puVar7 = uVar1;
                  lVar9 = FUN_01d3c210(lVar11,uVar3);
                  uVar1 = *(undefined8 *)(lVar9 + 8);
                  lVar9 = FUN_01d3c210(lVar11,uVar3);
                  lVar10 = FUN_01d3c210(lVar11,local_6c);
                  *(undefined8 *)(lVar9 + 8) = *(undefined8 *)(lVar10 + 8);
                  lVar9 = FUN_01d3c210(lVar11,local_6c);
                  *(undefined8 *)(lVar9 + 8) = uVar1;
                  lVar9 = FUN_01d3c210(lVar11,uVar3);
                  uVar1 = *(undefined8 *)(lVar9 + 0x10);
                  lVar9 = FUN_01d3c210(lVar11,uVar3);
                  lVar10 = FUN_01d3c210(lVar11,local_6c);
                  *(undefined8 *)(lVar9 + 0x10) = *(undefined8 *)(lVar10 + 0x10);
                  lVar9 = FUN_01d3c210(lVar11,local_6c);
                  *(undefined8 *)(lVar9 + 0x10) = uVar1;
                }
                local_6c = local_6c + -1;
                iVar13 = iVar13 + 1;
              } while (iVar13 != 0);
            }
            local_70 = local_70 + 1;
            iVar12 = iVar12 + -1;
          } while (iVar12 != 0);
        }
        iVar12 = *(int *)(lVar11 + 0x10);
        local_70 = 0;
        if (-1 < iVar12 + -1) {
          do {
            lVar9 = FUN_01d3c210(lVar11,local_70);
            dVar2 = *(double *)(lVar9 + 8);
            lVar9 = FUN_01d3c210(lVar11,local_70);
            dVar15 = *(double *)(lVar9 + 0x10);
            if (DAT_021084b1 != '\0') {
              dVar15 = (dVar15 * 3.141592653589793) / 180.0;
            }
            lVar9 = FUN_01d3c210(lVar11,local_70);
            dVar14 = (double)FUN_0040bcd0(dVar15);
            *(double *)(lVar9 + 8) = dVar2 * dVar14;
            lVar9 = FUN_01d3c210(lVar11,local_70);
            dVar15 = (double)FUN_0040bdd0(dVar15);
            *(double *)(lVar9 + 0x10) = dVar2 * dVar15;
            local_70 = local_70 + 1;
            iVar12 = iVar12 + -1;
          } while (iVar12 != 0);
        }
        uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x790) + 0x10);
        FUN_00b95290(uVar1);
        FUN_01d3c2d0(uVar1,*(undefined8 *)(param_1 + 0x7a8));
        lVar11 = FUN_01d3c210(uVar1,0);
        **(undefined8 **)(param_1 + 0x790) = *(undefined8 *)(lVar11 + 8);
        lVar11 = FUN_01d3c210(uVar1,0);
        *(undefined8 *)(*(longlong *)(param_1 + 0x790) + 8) = *(undefined8 *)(lVar11 + 0x10);
      }
    }
    else {
      FUN_00b0a960(*(undefined8 *)(param_1 + 0x6d8),param_2);
      if (*(int *)(*(longlong *)(param_1 + 0x6d8) + 0x638) == 1) {
        *(undefined4 *)(param_1 + 0x508) = 1;
      }
    }
  }
  return;
}


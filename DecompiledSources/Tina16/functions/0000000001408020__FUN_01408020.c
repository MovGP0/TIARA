/* Ghidra address: 01408020 */
/* Ghidra symbol: FUN_01408020 */


void FUN_01408020(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  char cVar4;
  double *pdVar5;
  double *pdVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  undefined4 local_48;
  undefined4 local_44;
  
  cVar4 = FUN_00b0a890(*(undefined8 *)(param_1 + 0x6d8));
  *(char *)(param_1 + 0x7b0) = cVar4;
  if (cVar4 == '\0') {
    lVar2 = *(longlong *)(param_1 + 0x7a8);
    local_48 = 2;
    if (1 < *(int *)(lVar2 + 0x10) + -1) {
      iVar11 = *(int *)(lVar2 + 0x10) + -2;
      do {
        local_44 = *(int *)(lVar2 + 0x10) + -1;
        if (local_48 <= local_44) {
          iVar12 = (local_48 - local_44) + -1;
          do {
            uVar3 = CONCAT22((short)((uint)local_44 >> 0x10),(short)local_44 + -1);
            pdVar5 = (double *)FUN_01d3c210(lVar2,uVar3);
            pdVar6 = (double *)FUN_01d3c210(lVar2,local_44);
            if (*pdVar6 <= *pdVar5 && *pdVar5 != *pdVar6) {
              puVar7 = (undefined8 *)FUN_01d3c210(lVar2,uVar3);
              uVar1 = *puVar7;
              puVar7 = (undefined8 *)FUN_01d3c210(lVar2,uVar3);
              puVar8 = (undefined8 *)FUN_01d3c210(lVar2,local_44);
              *puVar7 = *puVar8;
              puVar7 = (undefined8 *)FUN_01d3c210(lVar2,local_44);
              *puVar7 = uVar1;
              lVar9 = FUN_01d3c210(lVar2,uVar3);
              uVar1 = *(undefined8 *)(lVar9 + 8);
              lVar9 = FUN_01d3c210(lVar2,uVar3);
              lVar10 = FUN_01d3c210(lVar2,local_44);
              *(undefined8 *)(lVar9 + 8) = *(undefined8 *)(lVar10 + 8);
              lVar9 = FUN_01d3c210(lVar2,local_44);
              *(undefined8 *)(lVar9 + 8) = uVar1;
              lVar9 = FUN_01d3c210(lVar2,uVar3);
              uVar1 = *(undefined8 *)(lVar9 + 0x10);
              lVar9 = FUN_01d3c210(lVar2,uVar3);
              lVar10 = FUN_01d3c210(lVar2,local_44);
              *(undefined8 *)(lVar9 + 0x10) = *(undefined8 *)(lVar10 + 0x10);
              lVar9 = FUN_01d3c210(lVar2,local_44);
              *(undefined8 *)(lVar9 + 0x10) = uVar1;
            }
            local_44 = local_44 + -1;
            iVar12 = iVar12 + 1;
          } while (iVar12 != 0);
        }
        local_48 = local_48 + 1;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
    }
    FUN_00b0ae40(*(undefined8 *)(param_1 + 0x6d8));
    FUN_01404f30(param_1);
    FUN_01405a00(param_1);
  }
  return;
}


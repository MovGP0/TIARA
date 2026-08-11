/* Ghidra address: 018d07b0 */
/* Ghidra symbol: FUN_018d07b0 */


void FUN_018d07b0(undefined8 param_1,longlong *param_2)

{
  double dVar1;
  double dVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  double dVar9;
  undefined8 uVar10;
  double dVar11;
  int local_70;
  int local_6c;
  
  iVar4 = (**(code **)(*param_2 + 0x18))();
  local_70 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar6 = FUN_01877a70(param_2,local_70);
      lVar8 = *(longlong *)(lVar6 + 0x30);
      if (lVar8 != 0) {
        dVar1 = *(double *)(lVar6 + 8);
        dVar2 = *(double *)(lVar6 + 0x10);
        iVar5 = (**(code **)(*param_2 + 0x18))(param_2);
        local_6c = local_70 + 1;
        if (local_6c <= iVar5 + -1) {
          iVar5 = ((iVar5 + -1) - local_6c) + 1;
          do {
            lVar7 = FUN_01877a70(param_2,local_6c);
            lVar6 = *(longlong *)(lVar7 + 0x30);
            if ((((lVar6 != 0) && (*(char *)(lVar6 + 0x1c8) != '\0')) &&
                (((*(double *)(lVar8 + 0xa0) + *(double *)(lVar8 + 0xb0)) - dVar1) - 0.0001 <=
                 *(double *)(lVar6 + 0xa0))) &&
               ((*(char *)(lVar6 + 0x1c8) != '\x02' ||
                ((*(double *)(lVar6 + 0x98) <=
                  (*(double *)(lVar8 + 0x98) + *(double *)(lVar8 + 0xa8)) - 0.0001 &&
                 (*(double *)(lVar8 + 0x98) <=
                  (*(double *)(lVar6 + 0x98) + *(double *)(lVar6 + 0xa8)) - 0.0001)))))) {
              dVar9 = *(double *)(lVar7 + 0x10);
              dVar11 = *(double *)(lVar8 + 0xa0) + *(double *)(lVar8 + 0xb0) + dVar2;
              if ((0.0 < dVar1) ||
                 ((*(char *)(lVar7 + 0x28) != '\0' && (*(double *)(lVar6 + 0xa0) + dVar9 < dVar11)))
                 ) {
                dVar9 = (double)FUN_00527020(dVar1 + dVar2,dVar9);
              }
              else {
                dVar9 = (double)FUN_00526ff0(dVar1 + dVar2,dVar9);
              }
              if ((*(char *)(lVar7 + 0x28) != '\0') &&
                 (*(double *)(lVar6 + 0xa0) + dVar9 < *(double *)(lVar7 + 0x18))) break;
              uVar10 = FUN_00527020(*(undefined8 *)(lVar7 + 0x18),dVar11);
              *(undefined8 *)(lVar7 + 0x18) = uVar10;
              *(double *)(lVar7 + 0x10) = dVar9;
              *(undefined1 *)(lVar7 + 0x28) = 1;
            }
            local_6c = local_6c + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
      }
      local_70 = local_70 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  iVar4 = (**(code **)(*param_2 + 0x18))();
  local_70 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar8 = FUN_01877a70(param_2,local_70);
      plVar3 = *(longlong **)(lVar8 + 0x30);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0xd0))(plVar3,(double)plVar3[0x14] + *(double *)(lVar8 + 0x10));
      }
      local_70 = local_70 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}


/* Ghidra address: 018d0380 */
/* Ghidra symbol: FUN_018d0380 */


void FUN_018d0380(undefined8 param_1,longlong param_2,double param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  double dVar11;
  int local_74;
  
  lVar2 = *(longlong *)(param_2 + 400);
  *(undefined1 *)(lVar2 + 0x28) = 1;
  *(double *)(lVar2 + 0x10) = param_3;
  if (param_3 != 0.0) {
    FUN_0194fb90(*(undefined8 *)(lVar2 + 0x30));
  }
  iVar1 = *(int *)(lVar2 + 0x38);
  iVar5 = FUN_018cf800();
  local_74 = 0;
  if (-1 < iVar5 + -1) {
    do {
      lVar6 = FUN_018cfa10(lVar2,local_74);
      if (*(longlong *)(lVar6 + 0x30) != 0) {
        lVar6 = FUN_018cfa10(lVar2,local_74);
        plVar3 = *(longlong **)(lVar6 + 0x30);
        lVar6 = FUN_018cfa10(lVar2,local_74);
        dVar11 = *(double *)(lVar6 + 0x10);
        lVar6 = FUN_018cfa10(lVar2,local_74);
        if (iVar1 < 1 || *(double *)(lVar6 + 0x18) <= 0.0) {
LAB_018d04dd:
          lVar6 = FUN_018cfa10(lVar2,local_74);
          if (iVar1 < 1 || *(double *)(lVar6 + 0x18) <= 0.0) {
LAB_018d056f:
            lVar6 = FUN_018cfa10(lVar2,local_74);
            if ((*(double *)(lVar6 + 0x10) != 0.0) && (param_3 != 0.0)) {
              (**(code **)(*plVar3 + 0xd0))(plVar3,(double)plVar3[0x14] - dVar11);
            }
          }
          else {
            lVar6 = FUN_018cfa10(lVar2,local_74);
            dVar8 = (double)FUN_018cfa40(lVar2);
            dVar9 = (double)FUN_018cfa00(lVar2);
            if ((dVar8 + dVar9 < *(double *)(lVar6 + 0x18) ||
                 dVar8 + dVar9 == *(double *)(lVar6 + 0x18)) || (dVar11 <= 0.0)) goto LAB_018d056f;
            lVar6 = FUN_018cfa10(lVar2,local_74);
            (**(code **)(*plVar3 + 0xd0))
                      (plVar3,(double)plVar3[0x14] - (dVar11 - *(double *)(lVar6 + 8)));
          }
          if (((char)plVar3[0x39] == '\x01') || (param_3 < 0.0)) {
            (**(code **)(*plVar3 + 0xd0))(plVar3,(double)plVar3[0x14] + param_3);
            lVar6 = FUN_018cfa10(lVar2,local_74);
            dVar11 = param_3 + *(double *)(lVar6 + 8);
          }
          else if ((char)plVar3[0x39] == '\x02') {
            cVar4 = FUN_004113d0(param_2,&PTR_FUN_0192c3a0);
            if ((cVar4 == '\0') &&
               (dVar8 = *(double *)(param_2 + 0xa0) + *(double *)(param_2 + 0xb0),
               (double)plVar3[0x14] <= dVar8 && dVar8 != (double)plVar3[0x14])) {
              dVar11 = *(double *)(param_2 + 0xa0);
              dVar8 = *(double *)(param_2 + 0xb0);
              dVar9 = (double)plVar3[0x14];
              (**(code **)(*plVar3 + 0xd0))
                        (plVar3,*(double *)(param_2 + 0xa0) + *(double *)(param_2 + 0xb0));
              lVar6 = FUN_018cfa10(lVar2,local_74);
              dVar11 = ((dVar11 + dVar8) - dVar9) + *(double *)(lVar6 + 8);
            }
          }
          else {
            lVar6 = FUN_018cfa10(lVar2,local_74);
            dVar11 = *(double *)(lVar6 + 8);
          }
          if (0 < iVar1) {
            lVar6 = FUN_018cfa10(lVar2,local_74);
            lVar7 = FUN_018cfa10(lVar2,local_74);
            dVar8 = (double)FUN_018cfa40(lVar2);
            dVar9 = (double)FUN_018cfa00(lVar2);
            uVar10 = FUN_00527020(*(undefined8 *)(lVar7 + 0x18),dVar8 + dVar9);
            *(undefined8 *)(lVar6 + 0x18) = uVar10;
          }
          lVar6 = FUN_018cfa10(lVar2,local_74);
          if (*(char *)(lVar6 + 0x28) != '\0') {
            lVar6 = FUN_018cfa10(lVar2,local_74);
            dVar8 = (double)FUN_0040c850(*(double *)(lVar6 + 0x10) - dVar11);
            if (dVar8 < 0.0001) goto LAB_018d075f;
          }
          FUN_018d0380(param_1,plVar3,dVar11);
        }
        else {
          lVar6 = FUN_018cfa10(lVar2,local_74);
          dVar8 = (double)FUN_018cfa40(lVar2);
          dVar9 = (double)FUN_018cfa00(lVar2);
          if (*(double *)(lVar6 + 0x18) <= dVar8 + dVar9) {
            lVar6 = FUN_018cfa10(lVar2,local_74);
            dVar8 = (double)FUN_018cfa40(lVar2);
            dVar9 = (double)FUN_018cfa00(lVar2);
            dVar8 = (double)FUN_0040c850(*(double *)(lVar6 + 0x18) - (dVar8 + dVar9));
            if (0.0001 <= dVar8) goto LAB_018d04dd;
          }
        }
      }
LAB_018d075f:
      local_74 = local_74 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}


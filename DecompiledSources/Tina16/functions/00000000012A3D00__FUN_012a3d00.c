/* Ghidra address: 012a3d00 */
/* Ghidra symbol: FUN_012a3d00 */


void FUN_012a3d00(longlong *param_1,uint param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong unaff_RDI;
  longlong unaff_R13;
  double dVar6;
  double dVar7;
  int local_70;
  int local_6c;
  double local_60;
  double local_50 [4];
  
  FUN_01cc80c0(param_1[0x12],param_1[0x13]);
  if (((char)param_1[0xb] != '\0') &&
     (iVar1 = (**(code **)(*param_1 + 0x128))(param_1), iVar1 != -1)) {
    uVar2 = (**(code **)(*param_1 + 0x128))(param_1);
    uVar3 = (**(code **)(*(longlong *)param_1[1] + 0x30))((longlong *)param_1[1],uVar2);
    unaff_RDI = FUN_004113f0(uVar3,&PTR_FUN_01105a20);
  }
  iVar1 = (**(code **)(*(longlong *)param_1[1] + 0x28))();
  local_70 = 0;
  lVar4 = unaff_R13;
  if (-1 < iVar1 + -1) {
    do {
      uVar3 = (**(code **)(*(longlong *)param_1[1] + 0x30))((longlong *)param_1[1],local_70);
      lVar4 = FUN_004113f0(uVar3,&PTR_FUN_01105a20);
      if ((*(int *)(lVar4 + 0xbc) == 0) && (*(longlong *)(lVar4 + 0xd8) != 0)) break;
      local_70 = local_70 + 1;
      iVar1 = iVar1 + -1;
      lVar4 = unaff_R13;
    } while (iVar1 != 0);
  }
  if (lVar4 != 0) {
    (**(code **)(*param_1 + 0xf8))(param_1,param_1 + 0x14,local_50,1);
    param_2 = param_2 & 0xffff;
    local_6c = 0;
    if (-1 < (int)(param_2 - 1)) {
      do {
        if ((-(double)param_1[0x16] <=
             (double)local_6c * *(double *)(lVar4 + 0xf0) + *(double *)(lVar4 + 0xe8)) &&
           ((double)local_6c * *(double *)(lVar4 + 0xf0) + *(double *)(lVar4 + 0xe8) <=
            (double)*(byte *)((longlong)param_1 + 0xa1) * local_50[0] - (double)param_1[0x16])) {
          iVar1 = (**(code **)(*(longlong *)param_1[1] + 0x28))();
          local_70 = 0;
          if (-1 < iVar1 + -1) {
            do {
              uVar3 = (**(code **)(*(longlong *)param_1[1] + 0x30))((longlong *)param_1[1],local_70)
              ;
              lVar5 = FUN_004113f0(uVar3,&PTR_FUN_01105a20);
              if ((*(int *)(lVar5 + 0xbc) == 0) && (*(longlong *)(lVar5 + 0xd8) != 0)) {
                dVar6 = (double)FUN_00e16190(*(undefined1 *)(lVar5 + 0xe2),
                                             *(undefined8 *)(lVar5 + 0xd8),local_6c);
                dVar7 = (double)FUN_00e16270(*(undefined1 *)(lVar5 + 0xe2));
                if (dVar6 == dVar7) break;
                if ((char)param_1[0xb] == '\0') {
                  FUN_01cc4620(*param_3,(double)local_6c * *(double *)(lVar5 + 0xf0) +
                                        *(double *)(lVar5 + 0xe8));
                }
                else {
                  FUN_01cc47e0(*param_3,(double)local_6c * *(double *)(unaff_RDI + 0xf0) +
                                        *(double *)(unaff_RDI + 0xe8));
                }
              }
              if ((*(int *)(lVar5 + 0xbc) != -1) && (*(longlong *)(lVar5 + 0xd8) != 0)) {
                dVar6 = (double)FUN_00e16190(*(undefined1 *)(lVar5 + 0xe2),
                                             *(undefined8 *)(lVar5 + 0xd8),local_6c);
                dVar6 = dVar6 * *(double *)(lVar5 + 0x100) + *(double *)(lVar5 + 0xf8);
                if ((char)param_1[0xb] == '\0') {
                  FUN_01cc46b0(*param_3,*(undefined4 *)(lVar5 + 0xb8),dVar6);
                }
                else {
                  local_60 = dVar6;
                  if ((*(longlong *)(unaff_RDI + 0xd8) != 0) && (*(int *)(lVar5 + 0xbc) != -1)) {
                    dVar7 = (double)FUN_00e16190(*(undefined1 *)(lVar5 + 0xe2),
                                                 *(longlong *)(unaff_RDI + 0xd8),local_6c);
                    local_60 = dVar7 * *(double *)(unaff_RDI + 0x100) +
                               *(double *)(unaff_RDI + 0xf8);
                  }
                  FUN_01cc4e50(*param_3,*(undefined4 *)(lVar5 + 0xb8),local_60,dVar6);
                }
              }
              local_70 = local_70 + 1;
              iVar1 = iVar1 + -1;
            } while (iVar1 != 0);
          }
        }
        local_6c = local_6c + 1;
        param_2 = param_2 - 1;
      } while (param_2 != 0);
    }
    lVar4 = FUN_01cc80a0(param_1[0x12]);
    param_1[0x13] = lVar4;
  }
  return;
}


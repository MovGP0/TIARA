/* Ghidra address: 01b5e800 */
/* Ghidra symbol: FUN_01b5e800 */


void FUN_01b5e800(longlong param_1,longlong *param_2,char param_3,char *param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  
  *param_4 = '\0';
  if (*(char *)(param_1 + 0x5b) != '\0') {
    *param_4 = '\x01';
    if (*(char *)(param_1 + 0x5a) == '\0' && param_3 == '\0') {
      *(undefined1 *)(param_1 + 0x59) = 0;
      cVar1 = FUN_0153b200(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x408));
      *param_4 = cVar1;
      *(undefined1 *)(param_1 + 0x59) = 1;
    }
    else {
      if (*(longlong *)(param_1 + 0x80) != 0) {
        FUN_00410f20(*(longlong *)(param_1 + 0x80));
      }
      if (*param_2 != 0) {
        FUN_01cc6030(*param_2);
      }
      lVar4 = FUN_01cc3870(&PTR_FUN_01cb5bc0,1,1,1,0);
      *param_2 = lVar4;
      FUN_01cc6020(*param_2);
      uVar5 = FUN_01cc6f70(&PTR_FUN_010ff630,1,*param_2);
      *(undefined8 *)(param_1 + 0x80) = uVar5;
      uVar5 = *(undefined8 *)(*param_2 + 8);
      uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))(*(longlong **)(param_1 + 8));
      FUN_01cc31d0(uVar5,uVar2,0,2,1,0,0,1);
      FUN_01cc5c60(*param_2);
      iVar9 = 0;
      iVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))();
      iVar8 = 0;
      if (-1 < iVar3 + -1) {
        do {
          uVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))
                            (*(longlong **)(param_1 + 8),iVar8);
          plVar6 = (longlong *)FUN_004113f0(uVar5,&PTR_FUN_011061a0);
          uVar5 = FUN_01cc5cc0(*param_2);
          (**(code **)(*plVar6 + 0x10))(plVar6,uVar5,*param_2);
          FUN_01cc09f0(plVar6[8],plVar6[1]);
          *(undefined1 *)(plVar6[8] + 0x18) = *(undefined1 *)((longlong)plVar6 + 0x11);
          if (*(int *)(param_1 + 0x70) == iVar8) {
            *(int *)(param_1 + 0x6c) = iVar8;
          }
          *(int *)(plVar6 + 0x17) = iVar9;
          if (iVar9 == 0) {
            (**(code **)(**(longlong **)(param_1 + 0x80) + 0x10))
                      (*(longlong **)(param_1 + 0x80),plVar6[8],1);
            uVar5 = FUN_01cc80a0(*(undefined8 *)(param_1 + 0x80));
            *(undefined8 *)(param_1 + 0x88) = uVar5;
          }
          iVar9 = iVar9 + 1;
          iVar8 = iVar8 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      *(undefined1 *)(param_1 + 0x5a) = 0;
    }
    if ((*param_4 != '\0') && (*(char *)(param_1 + 0x5b) != '\0')) {
      FUN_01cc80c0(*(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x88));
      uVar5 = FUN_00c43d20(*(undefined8 *)(param_1 + 0x60));
      FUN_01cc47e0(*param_2,uVar5);
      uVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))
                        (*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x70));
      lVar4 = FUN_004113f0(uVar5,&PTR_FUN_011061a0);
      uVar5 = FUN_0153b190(*(undefined8 *)(lVar4 + 0x18),
                           *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x408));
      iVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))();
      iVar8 = 0;
      if (-1 < iVar3 + -1) {
        do {
          uVar7 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))
                            (*(longlong **)(param_1 + 8),iVar8);
          lVar4 = FUN_004113f0(uVar7,&PTR_FUN_011061a0);
          uVar7 = FUN_0153b190(*(undefined8 *)(lVar4 + 0x18),
                               *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x408));
          FUN_01cc4e50(*param_2,*(undefined4 *)(lVar4 + 0xb8),uVar5,uVar7);
          iVar8 = iVar8 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      *(double *)(param_1 + 0x60) = *(double *)(param_1 + 0x60) + 1e-09;
      uVar5 = FUN_01cc80a0(*(undefined8 *)(param_1 + 0x80));
      *(undefined8 *)(param_1 + 0x88) = uVar5;
    }
    if (PTR_DAT_02004010[0x7c6] != '\0') {
      uVar5 = FUN_004113f0(*(undefined8 *)
                            (*(longlong *)(param_1 + 0x50) + 0x88 +
                            (longlong)*(int *)(param_1 + 0x18) * 8),&PTR_FUN_01133e90);
      FUN_01138fd0(uVar5);
    }
  }
  return;
}


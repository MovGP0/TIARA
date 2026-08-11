/* Ghidra address: 01b689b0 */
/* Ghidra symbol: FUN_01b689b0 */


void FUN_01b689b0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  undefined1 local_91;
  double local_90 [12];
  
  dVar10 = 0.0;
  dVar9 = 0.0;
  iVar2 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x7d8) + 0x4f0) + 0x28))();
  iVar5 = 0;
  if (-1 < iVar2 + -1) {
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x7d8) + 0x4f0);
      uVar3 = (**(code **)(*plVar1 + 0x30))(plVar1,iVar5);
      lVar4 = FUN_004113f0(uVar3,&PTR_FUN_011061a0);
      FUN_004113f0(*(undefined8 *)(param_1 + 0x9b0),&PTR_FUN_010e62f0);
      dVar9 = dVar10;
      if ((*(longlong *)(lVar4 + 0x40) != 0) && (*(longlong *)(lVar4 + 0x98) != 0)) {
        FUN_01cc6020(*(undefined8 *)(lVar4 + 0x98));
        if (*(char *)(param_1 + 0xdb4) == '\0') {
          uVar3 = FUN_01cc6f70(&PTR_FUN_010ff460,1,*(undefined8 *)(lVar4 + 0x98));
          *(undefined8 *)(param_1 + 0xd80) = uVar3;
        }
        else {
          uVar3 = FUN_01cc6f70(&PTR_FUN_010ff630,1,*(undefined8 *)(lVar4 + 0x98));
          *(undefined8 *)(param_1 + 0xd80) = uVar3;
        }
        plVar1 = *(longlong **)(param_1 + 0xd80);
        uVar3 = (**(code **)(*plVar1 + 0x58))(plVar1,*(undefined8 *)(lVar4 + 0x40));
        uVar6 = (**(code **)(*plVar1 + 0x60))(plVar1,*(undefined8 *)(lVar4 + 0x40));
        uVar7 = (**(code **)(*plVar1 + 0x68))(plVar1,*(undefined8 *)(lVar4 + 0x40));
        uVar8 = (**(code **)(*plVar1 + 0x70))(plVar1,*(undefined8 *)(lVar4 + 0x40));
        uVar6 = FUN_0040c850(uVar6);
        uVar3 = FUN_0040c850(uVar3);
        uVar3 = FUN_00b90620(uVar6,uVar3);
        dVar9 = (double)FUN_00b90620(dVar10,uVar3);
        uVar3 = FUN_0040c850(uVar8);
        uVar6 = FUN_0040c850(uVar7);
        local_90[0] = (double)FUN_00b90620(uVar3,uVar6);
        local_90[0] = local_90[0] / 5.0;
        (**(code **)(**(longlong **)(param_1 + 0xda0) + 0x88))
                  (*(longlong **)(param_1 + 0xda0),&local_91,local_90,0);
        *(undefined1 *)(lVar4 + 0x2a) = local_91;
        *(undefined8 *)(lVar4 + 0x150) = 0;
        *(double *)(lVar4 + 0x118) = local_90[0];
        FUN_00410f20(*(undefined8 *)(param_1 + 0xd80));
        *(undefined8 *)(param_1 + 0xd80) = 0;
        if (lVar4 == *(longlong *)(param_1 + 0x870)) {
          FUN_00b90440(*(undefined8 *)(param_1 + 0xc58),*(undefined8 *)(lVar4 + 0x118));
          FUN_00b90440(*(undefined8 *)(param_1 + 0xc68),*(undefined8 *)(lVar4 + 0x150));
        }
      }
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + -1;
      dVar10 = dVar9;
    } while (iVar2 != 0);
  }
  if (*(char *)(param_1 + 0xdb4) != '\0') {
    *(double *)(param_1 + 0xd88) = dVar9 / 5.0;
    (**(code **)(**(longlong **)(param_1 + 0xda0) + 0x88))
              (*(longlong **)(param_1 + 0xda0),param_1 + 0xd98,param_1 + 0xd88,0);
    *(undefined8 *)(param_1 + 0xd90) = 0;
    FUN_00b90440(*(undefined8 *)(param_1 + 0xc98),*(undefined8 *)(param_1 + 0xd88));
    FUN_00b90440(*(undefined8 *)(param_1 + 0xcb8),*(undefined8 *)(param_1 + 0xd90));
  }
  FUN_01b655a0(param_1,0);
  (**(code **)(**(longlong **)(param_1 + 0x9b0) + 0x18))
            (*(longlong **)(param_1 + 0x9b0),*(undefined1 *)(param_1 + 0x990));
  FUN_010f67e0(param_1,1,1);
  return;
}


/* Ghidra address: 012b1960 */
/* Ghidra symbol: FUN_012b1960 */


void FUN_012b1960(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  undefined8 uVar8;
  undefined1 local_61;
  double local_60 [6];
  
  iVar2 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x7d8) + 0x4f0) + 0x28))();
  iVar7 = 0;
  if (-1 < iVar2 + -1) {
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x7d8) + 0x4f0);
      uVar5 = (**(code **)(*plVar1 + 0x30))(plVar1,iVar7);
      lVar6 = FUN_004113f0(uVar5,&PTR_FUN_01105a20);
      FUN_004113f0(*(undefined8 *)(param_1 + 0x9b0),&PTR_FUN_010e62f0);
      if ((*(longlong *)(lVar6 + 0x40) != 0) && (*(longlong *)(lVar6 + 0x98) != 0)) {
        FUN_01cc6020(*(undefined8 *)(lVar6 + 0x98));
        if (*(char *)(param_1 + 0xdd0) == '\0') {
          uVar5 = FUN_01cc6f70(&PTR_FUN_01cb8940,1,*(undefined8 *)(lVar6 + 0x98));
          *(undefined8 *)(param_1 + 0xda0) = uVar5;
        }
        else {
          uVar5 = FUN_01cc6f70(&PTR_FUN_010ff630,1,*(undefined8 *)(lVar6 + 0x98));
          *(undefined8 *)(param_1 + 0xda0) = uVar5;
        }
        plVar1 = *(longlong **)(param_1 + 0xda0);
        (**(code **)(*plVar1 + 0x58))(plVar1,*(undefined8 *)(lVar6 + 0x40));
        (**(code **)(*plVar1 + 0x60))(plVar1,*(undefined8 *)(lVar6 + 0x40));
        uVar5 = (**(code **)(*plVar1 + 0x68))(plVar1,*(undefined8 *)(lVar6 + 0x40));
        (**(code **)(*plVar1 + 0x70))(plVar1,*(undefined8 *)(lVar6 + 0x40));
        uVar8 = FUN_0040c850();
        uVar5 = FUN_0040c850(uVar5);
        local_60[0] = (double)FUN_00b90620(uVar8,uVar5);
        local_60[0] = local_60[0] / ((double)*(byte *)(param_1 + 0xd88) / 2.0);
        (**(code **)(**(longlong **)(param_1 + 0xdb8) + 0x78))
                  (*(longlong **)(param_1 + 0xdb8),&local_61,local_60,0);
        *(undefined1 *)(lVar6 + 0x2a) = local_61;
        (**(code **)(**(longlong **)(param_1 + 0xdb8) + 0x58))
                  (*(longlong **)(param_1 + 0xdb8),iVar7);
        (**(code **)(**(longlong **)(param_1 + 0xdb8) + 0x80))
                  (*(longlong **)(param_1 + 0xdb8),*(undefined1 *)(lVar6 + 0x2a));
        *(undefined8 *)(lVar6 + 0x110) = 0;
        *(double *)(lVar6 + 0x118) = local_60[0];
        FUN_00410f20(*(undefined8 *)(param_1 + 0xda0));
        *(undefined8 *)(param_1 + 0xda0) = 0;
        iVar3 = (**(code **)(**(longlong **)(param_1 + 0x7d8) + 0x260))
                          (*(longlong **)(param_1 + 0x7d8));
        if (iVar7 == iVar3) {
          FUN_00b90440(*(undefined8 *)(param_1 + 0xd30),*(undefined8 *)(lVar6 + 0x118));
          FUN_00b90440(*(undefined8 *)(param_1 + 0xd38),*(undefined8 *)(lVar6 + 0x110));
        }
      }
      iVar7 = iVar7 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x7d8) + 0x260))(*(longlong **)(param_1 + 0x7d8));
  if (iVar2 != -1) {
    uVar4 = (**(code **)(**(longlong **)(param_1 + 0x7d8) + 0x260))(*(longlong **)(param_1 + 0x7d8))
    ;
    (**(code **)(**(longlong **)(param_1 + 0xdb8) + 0x58))(*(longlong **)(param_1 + 0xdb8),uVar4);
  }
  FUN_012ae470(param_1,0,0);
  (**(code **)(**(longlong **)(param_1 + 0x9b0) + 0x18))
            (*(longlong **)(param_1 + 0x9b0),*(undefined1 *)(param_1 + 0x990));
  FUN_010f67e0(param_1,1,1);
  return;
}


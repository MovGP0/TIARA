/* Ghidra address: 01ad06b0 */
/* Ghidra symbol: FUN_01ad06b0 */


void FUN_01ad06b0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  longlong local_30;
  
  plVar1 = *(longlong **)(param_1 + 0xd8);
  if ((plVar1 != (longlong *)0x0) && (iVar3 = (**(code **)(*plVar1 + 0x28))(plVar1), 0 < iVar3)) {
    uVar5 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x30))(*(longlong **)(param_1 + 0xd8),0);
    cVar2 = FUN_004113d0(uVar5,&PTR_FUN_01cdf058);
    if (cVar2 != '\0') {
      iVar3 = FUN_00b905f0(*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x14),
                           *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x18));
      uVar4 = FUN_0040c770((double)iVar3 * 0.03);
      uVar4 = FUN_00b905f0(0xe,uVar4);
      uVar4 = FUN_00b905e0(6,uVar4);
      goto LAB_01ad077a;
    }
  }
  iVar3 = FUN_00b905f0(*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x14),
                       *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x18));
  uVar4 = FUN_0040c770((double)iVar3 * 0.03);
  uVar4 = FUN_00b905f0(0xc,uVar4);
  uVar4 = FUN_00b905e0(2,uVar4);
LAB_01ad077a:
  FUN_01ad01b0(param_1);
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x28))(*(longlong **)(param_1 + 0xd8));
  iVar7 = 1;
  if (0 < iVar3) {
    do {
      uVar5 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x30))
                        (*(longlong **)(param_1 + 0xd8),iVar7 + -1);
      lVar6 = FUN_004113f0(uVar5,&DAT_01cdd500);
      *(undefined4 *)(lVar6 + 0x90) = uVar4;
      if (*(char *)(lVar6 + 0x58) == '\x05') {
        *(int *)(lVar6 + 0x90) = *(int *)(lVar6 + 0x90) + -2;
      }
      FUN_01ce0a20(lVar6,*(undefined8 *)(param_1 + 0x80));
      iVar7 = iVar7 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if ((*(longlong *)(param_1 + 0xf0) != 0) &&
     (cVar2 = FUN_01ad1090(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0xf0) + 0x58),&local_30),
     cVar2 != '\0')) {
    lVar6 = (**(code **)(**(longlong **)(local_30 + 0x70) + 0x30))
                      (*(longlong **)(local_30 + 0x70),0);
    uVar4 = FUN_0040c770((double)*(int *)(lVar6 + 0x94) * 0.9);
    *(undefined4 *)(*(longlong *)(param_1 + 0xf0) + 0x48) = uVar4;
  }
  if ((*(longlong *)(param_1 + 0xf8) != 0) &&
     (cVar2 = FUN_01ad1090(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0xf8) + 0x58),&local_30),
     cVar2 != '\0')) {
    lVar6 = (**(code **)(**(longlong **)(local_30 + 0x70) + 0x30))
                      (*(longlong **)(local_30 + 0x70),0);
    uVar4 = FUN_0040c770((double)*(int *)(lVar6 + 0x94) * 0.9);
    *(undefined4 *)(*(longlong *)(param_1 + 0xf8) + 0x48) = uVar4;
  }
  return;
}


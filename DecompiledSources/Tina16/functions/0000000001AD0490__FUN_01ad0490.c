/* Ghidra address: 01ad0490 */
/* Ghidra symbol: FUN_01ad0490 */


void FUN_01ad0490(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  longlong local_50 [4];
  
  plVar5 = *(longlong **)(param_1 + 0xd8);
  if ((plVar5 != (longlong *)0x0) && (iVar2 = (**(code **)(*plVar5 + 0x28))(plVar5), 0 < iVar2)) {
    uVar4 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x30))(*(longlong **)(param_1 + 0xd8),0);
    cVar1 = FUN_004113d0(uVar4,&PTR_FUN_01cdf058);
    if (cVar1 != '\0') {
      iVar2 = FUN_00b905f0(*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x14),
                           *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x18));
      uVar3 = FUN_0040c770((double)iVar2 * 0.03);
      uVar3 = FUN_00b905f0(0xe,uVar3);
      uVar3 = FUN_00b905e0(6,uVar3);
      goto LAB_01ad055c;
    }
  }
  iVar2 = FUN_00b905f0(*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x14),
                       *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x18));
  uVar3 = FUN_0040c770((double)iVar2 * 0.03);
  uVar3 = FUN_00b905f0(0xc,uVar3);
  uVar3 = FUN_00b905e0(2,uVar3);
LAB_01ad055c:
  FUN_01ad01b0(param_1);
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x28))(*(longlong **)(param_1 + 0xd8));
  iVar7 = 1;
  if (0 < iVar2) {
    do {
      uVar4 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x30))
                        (*(longlong **)(param_1 + 0xd8),iVar7 + -1);
      plVar5 = (longlong *)FUN_004113f0(uVar4,&DAT_01cdd500);
      *(undefined4 *)(plVar5 + 0x12) = uVar3;
      if ((char)plVar5[0xb] == '\x05') {
        *(int *)(plVar5 + 0x12) = (int)plVar5[0x12] + -2;
      }
      (**(code **)(*plVar5 + 0x138))(plVar5,*(undefined8 *)(param_1 + 0x80));
      iVar7 = iVar7 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if ((*(longlong *)(param_1 + 0xf0) != 0) &&
     (cVar1 = FUN_01ad1090(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0xf0) + 0x58),local_50),
     cVar1 != '\0')) {
    lVar6 = (**(code **)(**(longlong **)(local_50[0] + 0x70) + 0x30))
                      (*(longlong **)(local_50[0] + 0x70),0);
    uVar3 = FUN_0040c770((double)*(int *)(lVar6 + 0x94) * 0.9);
    *(undefined4 *)(*(longlong *)(param_1 + 0xf0) + 0x48) = uVar3;
  }
  if ((*(longlong *)(param_1 + 0xf8) != 0) &&
     (cVar1 = FUN_01ad1090(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0xf8) + 0x58),local_50),
     cVar1 != '\0')) {
    lVar6 = (**(code **)(**(longlong **)(local_50[0] + 0x70) + 0x30))
                      (*(longlong **)(local_50[0] + 0x70),0);
    uVar3 = FUN_0040c770((double)*(int *)(lVar6 + 0x94) * 0.9);
    *(undefined4 *)(*(longlong *)(param_1 + 0xf8) + 0x48) = uVar3;
  }
  return;
}


/* Ghidra address: 00a13790 */
/* Ghidra symbol: FUN_00a13790 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00a13790(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  undefined8 uVar6;
  longlong lVar7;
  bool bVar8;
  
  lVar2 = param_1[0x4e];
  lVar3 = *(longlong *)(lVar2 + 0x30);
  bVar8 = (int)param_1[0xe] != 0;
  if (bVar8) {
    *(undefined4 *)(param_1 + 0xe) = 2;
  }
  if (param_2 != 0) {
    *(code **)(lVar2 + 8) = FUN_00a13a50;
    *(code **)(lVar2 + 0x10) = FUN_00a13ae0;
    *(undefined4 *)(lVar2 + 0x38) = 1;
    iVar1 = *(int *)(lVar2 + 0x38);
    goto joined_r0x00a138da;
  }
  pcVar5 = FUN_00a14700;
  if (bVar8) {
    pcVar5 = FUN_00a14350;
  }
  *(code **)(lVar2 + 8) = pcVar5;
  *(undefined **)(lVar2 + 0x10) = &DAT_00a147f0;
  if (*(int *)((longlong)param_1 + 0x9c) < 1) {
    lVar7 = *param_1;
    uVar6 = 0x100000038;
LAB_00a13874:
    *(undefined8 *)(lVar7 + 0x28) = uVar6;
    (**(code **)*param_1)(param_1);
    iVar1 = (int)param_1[0xe];
  }
  else {
    if (0x100 < *(int *)((longlong)param_1 + 0x9c)) {
      lVar7 = *param_1;
      uVar6 = 0x10000000039;
      goto LAB_00a13874;
    }
    iVar1 = (int)param_1[0xe];
  }
  if (iVar1 == 2) {
    lVar4 = (ulonglong)((int)param_1[0x11] + 2) * 6;
    lVar7 = *(longlong *)(lVar2 + 0x40);
    if (lVar7 == 0) {
      lVar7 = (**(code **)(param_1[1] + 8))(param_1,1,lVar4);
      *(longlong *)(lVar2 + 0x40) = lVar7;
    }
    FUN_00a1bd20(lVar7,lVar4);
    if (*(longlong *)(lVar2 + 0x50) == 0) {
      FUN_00a13900(param_1);
    }
    *(undefined4 *)(lVar2 + 0x48) = 0;
    iVar1 = *(int *)(lVar2 + 0x38);
  }
  else {
    iVar1 = *(int *)(lVar2 + 0x38);
  }
joined_r0x00a138da:
  if (iVar1 != 0) {
    lVar7 = 0;
    do {
      FUN_00a1bd20(*(undefined8 *)(lVar3 + lVar7 * 8),0x1000);
      lVar7 = lVar7 + 1;
    } while (lVar7 != 0x20);
    *(undefined4 *)(lVar2 + 0x38) = 0;
  }
  return;
}


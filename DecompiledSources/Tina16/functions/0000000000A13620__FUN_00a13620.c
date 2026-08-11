/* Ghidra address: 00a13620 */
/* Ghidra symbol: FUN_00a13620 */


void FUN_00a13620(longlong *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  puVar3 = (undefined8 *)(**(code **)param_1[1])(param_1,1,0x58);
  param_1[0x4e] = (longlong)puVar3;
  *puVar3 = FUN_00a13790;
  puVar3[3] = &LAB_00a138f0;
  puVar3[8] = 0;
  puVar3[10] = 0;
  if ((int)param_1[0x12] != 3) {
    puVar2 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar2 + 5) = 0x2f;
    (*(code *)*puVar2)(param_1);
  }
  uVar4 = (**(code **)param_1[1])(param_1,1,0x100);
  puVar3[6] = uVar4;
  lVar5 = 0;
  do {
    uVar4 = (**(code **)(param_1[1] + 8))(param_1,1,0x1000);
    *(undefined8 *)(puVar3[6] + lVar5 * 8) = uVar4;
    lVar5 = lVar5 + 1;
  } while (lVar5 != 0x20);
  *(undefined4 *)(puVar3 + 7) = 1;
  if (*(int *)((longlong)param_1 + 0x84) == 0) {
    puVar3[4] = 0;
    iVar1 = (int)param_1[0xe];
    goto joined_r0x00a136f9;
  }
  iVar1 = (int)param_1[0xf];
  if (iVar1 < 8) {
    lVar5 = *param_1;
    uVar4 = 0x800000038;
LAB_00a13718:
    *(undefined8 *)(lVar5 + 0x28) = uVar4;
    (**(code **)*param_1)(param_1);
  }
  else if (0x100 < iVar1) {
    lVar5 = *param_1;
    uVar4 = 0x10000000039;
    goto LAB_00a13718;
  }
  uVar4 = (**(code **)(param_1[1] + 0x10))(param_1,1,iVar1,3);
  puVar3[4] = uVar4;
  *(int *)(puVar3 + 5) = iVar1;
  iVar1 = (int)param_1[0xe];
joined_r0x00a136f9:
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0xe) = 2;
    uVar4 = (**(code **)(param_1[1] + 8))(param_1,1,(ulonglong)((int)param_1[0x11] + 2) * 6);
    puVar3[8] = uVar4;
    FUN_00a13900(param_1);
    return;
  }
  return;
}


/* Ghidra address: 01a5eef0 */
/* Ghidra symbol: FUN_01a5eef0 */


void FUN_01a5eef0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined4 *puVar8;
  bool bVar9;
  undefined4 local_30;
  undefined4 local_2c [3];
  
  lVar1 = *(longlong *)(param_1 + 0x88);
  uVar6 = (**(code **)(**(longlong **)(lVar1 + 0xd8) + 0x30))(*(longlong **)(lVar1 + 0xd8),0);
  puVar8 = (undefined4 *)&DAT_01cdd500;
  cVar3 = FUN_004113d0(uVar6,&DAT_01cdd500);
  if (cVar3 == '\0') {
LAB_01a5efb9:
    plVar2 = *(longlong **)(param_1 + 0xa8);
    if (plVar2 == (longlong *)0x0) {
      uVar4 = FUN_0040c770((double)*(int *)(lVar1 + 0x14) +
                           *(double *)(param_1 + 0x50) *
                           (double)(*(int *)(lVar1 + 0x1c) - *(int *)(lVar1 + 0x14)));
      *(undefined4 *)(param_1 + 0x48) = uVar4;
      uVar4 = FUN_0040c770((double)*(int *)(lVar1 + 0x18) +
                           *(double *)(param_1 + 0x58) *
                           (double)(*(int *)(lVar1 + 0x20) - *(int *)(lVar1 + 0x18)));
      *(undefined4 *)(param_1 + 0x4c) = uVar4;
    }
    else {
      puVar8 = &local_30;
      (**(code **)(*plVar2 + 0xf0))
                (plVar2,*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),local_2c,
                 puVar8);
      *(undefined4 *)(param_1 + 0x48) = local_2c[0];
      *(undefined4 *)(param_1 + 0x4c) = local_30;
    }
  }
  else {
    puVar8 = (undefined4 *)0x0;
    lVar7 = (**(code **)(**(longlong **)(lVar1 + 0xd8) + 0x30))(*(longlong **)(lVar1 + 0xd8),0);
    if (*(char *)(lVar7 + 0x58) != '\a') goto LAB_01a5efb9;
    uVar6 = (**(code **)(**(longlong **)(lVar1 + 0xd8) + 0x30))(*(longlong **)(lVar1 + 0xd8),0);
    lVar7 = FUN_004113f0(uVar6,&DAT_01cdd500);
    uVar6 = (**(code **)(**(longlong **)(lVar7 + 0x70) + 0x30))(*(longlong **)(lVar7 + 0x70),0);
    local_2c[0] = FUN_01cd60f0(uVar6,*(undefined8 *)(param_1 + 0x50));
    puVar8 = (undefined4 *)0x0;
    uVar6 = (**(code **)(**(longlong **)(lVar7 + 0x78) + 0x30))(*(longlong **)(lVar7 + 0x78),0);
    local_30 = FUN_01cd60f0(uVar6,*(undefined8 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x48) = local_2c[0];
    *(undefined4 *)(param_1 + 0x4c) = local_30;
  }
  lVar7 = *(longlong *)(param_1 + 0x88);
  if (*(char *)(lVar7 + 0x108) != '\0') {
    if (*(byte *)(lVar7 + 0xb0) < 8) {
      bVar9 = ((int)CONCAT71((int7)((ulonglong)puVar8 >> 8),1) << (*(byte *)(lVar7 + 0xb0) & 0x1f) &
              1U) != 0;
    }
    else {
      bVar9 = false;
    }
    if (bVar9) goto LAB_01a5f09c;
  }
  if (*(byte *)(lVar7 + 0xb0) < 8) {
    bVar9 = ((int)CONCAT71((int7)((ulonglong)lVar7 >> 8),1) << (*(byte *)(lVar7 + 0xb0) & 0x1f) & 2U
            ) != 0;
  }
  else {
    bVar9 = false;
  }
  if (!bVar9) {
    FUN_005fce30(*(undefined8 *)(*(longlong *)(param_1 + 0x90) + 0x80),
                 (longlong)*(short *)(param_1 + 0x70));
    return;
  }
LAB_01a5f09c:
  uVar4 = FUN_0040c770(*(double *)(param_1 + 0x60) *
                       (double)(*(int *)(lVar1 + 0x1c) - *(int *)(lVar1 + 0x14)));
  uVar5 = FUN_0040c770(*(double *)(param_1 + 0x68) *
                       (double)(*(int *)(lVar1 + 0x20) - *(int *)(lVar1 + 0x18)));
  uVar4 = FUN_00b905e0(uVar4,uVar5);
  FUN_005fce30(*(undefined8 *)(*(longlong *)(param_1 + 0x90) + 0x80),uVar4);
  return;
}


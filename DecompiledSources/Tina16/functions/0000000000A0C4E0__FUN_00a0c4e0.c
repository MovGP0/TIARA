/* Ghidra address: 00a0c4e0 */
/* Ghidra symbol: FUN_00a0c4e0 */


longlong FUN_00a0c4e0(longlong *param_1,uint param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  
  lVar1 = param_1[1];
  if (0x3b9ac9e8 < param_3) {
    *(undefined8 *)(*param_1 + 0x28) = 0x100000036;
    (**(code **)*param_1)(param_1);
  }
  lVar2 = 0;
  if ((param_3 & 7) != 0) {
    lVar2 = 8 - (param_3 & 7);
  }
  if (1 < param_2) {
    lVar8 = *param_1;
    *(undefined4 *)(lVar8 + 0x28) = 0xe;
    *(uint *)(lVar8 + 0x2c) = param_2;
    (**(code **)*param_1)(param_1);
  }
  param_3 = lVar2 + param_3;
  lVar2 = (longlong)(int)param_2;
  puVar9 = *(undefined8 **)(lVar1 + 0x60 + lVar2 * 8);
  if (puVar9 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    do {
      puVar3 = puVar9;
      uVar6 = puVar3[2];
      if (param_3 <= uVar6) goto LAB_00a0c64a;
      puVar9 = (undefined8 *)*puVar3;
      puVar7 = puVar3;
    } while ((undefined8 *)*puVar3 != (undefined8 *)0x0);
  }
  puVar4 = &DAT_01e6ec40;
  if (puVar7 == (undefined8 *)0x0) {
    puVar4 = &DAT_01e6ec30;
  }
  uVar6 = 0x3b9ac9e8 - param_3;
  if (*(ulonglong *)(puVar4 + lVar2 * 8) <= 0x3b9ac9e8 - param_3) {
    uVar6 = *(ulonglong *)(puVar4 + lVar2 * 8);
  }
  lVar8 = param_3 + 0x18 + uVar6;
  puVar3 = (undefined8 *)FUN_00a0d6d0(param_1,lVar8);
  if (puVar3 == (undefined8 *)0x0) {
    uVar5 = uVar6;
    do {
      uVar6 = uVar5 >> 1;
      if (uVar5 < 100) {
        *(undefined8 *)(*param_1 + 0x28) = 0x200000036;
        (**(code **)*param_1)(param_1);
      }
      lVar8 = param_3 + 0x18 + uVar6;
      puVar3 = (undefined8 *)FUN_00a0d6d0(param_1,lVar8);
      uVar5 = uVar6;
    } while (puVar3 == (undefined8 *)0x0);
  }
  *(int *)(lVar1 + 0x90) = *(int *)(lVar1 + 0x90) + (int)lVar8;
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = uVar6 + param_3;
  puVar9 = (undefined8 *)(lVar1 + 0x60 + lVar2 * 8);
  if (puVar7 != (undefined8 *)0x0) {
    puVar9 = puVar7;
  }
  *puVar9 = puVar3;
  uVar6 = puVar3[2];
LAB_00a0c64a:
  lVar1 = puVar3[1];
  puVar3[1] = lVar1 + param_3;
  puVar3[2] = uVar6 - param_3;
  return (longlong)puVar3 + lVar1 + 0x18;
}


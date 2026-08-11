/* Ghidra address: 00a0c680 */
/* Ghidra symbol: FUN_00a0c680 */


undefined8 * FUN_00a0c680(longlong *param_1,uint param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  lVar1 = param_1[1];
  if (0x3b9ac9e8 < param_3) {
    *(undefined8 *)(*param_1 + 0x28) = 0x300000036;
    (**(code **)*param_1)(param_1);
  }
  lVar4 = 0;
  if ((param_3 & 7) != 0) {
    lVar4 = 8 - (param_3 & 7);
  }
  if (1 < param_2) {
    lVar2 = *param_1;
    *(undefined4 *)(lVar2 + 0x28) = 0xe;
    *(uint *)(lVar2 + 0x2c) = param_2;
    (**(code **)*param_1)(param_1);
  }
  lVar2 = lVar4 + param_3 + 0x18;
  puVar3 = (undefined8 *)FUN_00a0d6f0(param_1,lVar2);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)(*param_1 + 0x28) = 0x400000036;
    (**(code **)*param_1)(param_1);
  }
  *(int *)(lVar1 + 0x90) = *(int *)(lVar1 + 0x90) + (int)lVar2;
  *puVar3 = *(undefined8 *)(lVar1 + 0x70 + (longlong)(int)param_2 * 8);
  puVar3[1] = lVar4 + param_3;
  puVar3[2] = 0;
  *(undefined8 **)(lVar1 + 0x70 + (longlong)(int)param_2 * 8) = puVar3;
  return puVar3 + 3;
}


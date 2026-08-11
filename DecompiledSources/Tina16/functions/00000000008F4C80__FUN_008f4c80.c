/* Ghidra address: 008f4c80 */
/* Ghidra symbol: FUN_008f4c80 */


void FUN_008f4c80(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int local_30;
  undefined4 local_2c [3];
  
  if (*(int *)(param_1 + 5) != 0x9c) {
    if (*(int *)(param_1 + 0x14) == 0x9c) {
      puVar3 = param_1 + 2;
      puVar4 = param_1 + 0x18;
      for (lVar2 = 7; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      puVar3 = param_1 + 0x11;
      puVar4 = param_1 + 2;
      for (lVar2 = 7; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
    }
    else {
      uVar1 = (**(code **)*param_1)(param_1);
      FUN_008e6da0(uVar1,local_2c,&local_30);
      puVar3 = param_1 + 2;
      puVar4 = param_1 + 0x18;
      for (lVar2 = 7; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      puVar3 = param_1 + 0x11;
      puVar4 = param_1 + 2;
      for (lVar2 = 7; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      param_1[0x12] = param_1[0x12] + 1;
      *(undefined4 *)(param_1 + 0x14) = local_2c[0];
      param_1[0x11] = param_1[0x11] + (longlong)local_30;
      *(int *)(param_1 + 0x16) = local_30;
      FUN_008f4f40(param_1,param_1 + 0x11);
    }
  }
  return;
}


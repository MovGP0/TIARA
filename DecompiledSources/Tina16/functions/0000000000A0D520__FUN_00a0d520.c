/* Ghidra address: 00a0d520 */
/* Ghidra symbol: FUN_00a0d520 */


void FUN_00a0d520(longlong *param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  lVar2 = param_1[1];
  if (param_2 < 2) {
    if (param_2 == 1) {
      for (lVar5 = *(longlong *)(lVar2 + 0x80); lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x30)) {
        if (*(int *)(lVar5 + 0x2c) != 0) {
          *(undefined4 *)(lVar5 + 0x2c) = 0;
          (**(code **)(lVar5 + 0x48))(param_1,lVar5 + 0x38);
        }
      }
      *(undefined8 *)(lVar2 + 0x80) = 0;
      for (lVar5 = *(longlong *)(lVar2 + 0x88); lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x30)) {
        if (*(int *)(lVar5 + 0x2c) != 0) {
          *(undefined4 *)(lVar5 + 0x2c) = 0;
          (**(code **)(lVar5 + 0x48))(param_1,lVar5 + 0x38);
        }
      }
      *(undefined8 *)(lVar2 + 0x88) = 0;
    }
  }
  else {
    lVar5 = *param_1;
    *(undefined4 *)(lVar5 + 0x28) = 0xe;
    *(uint *)(lVar5 + 0x2c) = param_2;
    (**(code **)*param_1)(param_1);
  }
  lVar5 = (longlong)(int)param_2;
  puVar3 = *(undefined8 **)(lVar2 + 0x70 + lVar5 * 8);
  *(undefined8 *)(lVar2 + 0x70 + lVar5 * 8) = 0;
  while (puVar3 != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)*puVar3;
    lVar1 = puVar3[1] + 0x18 + puVar3[2];
    FUN_00a0d700(param_1,puVar3,lVar1);
    *(int *)(lVar2 + 0x90) = *(int *)(lVar2 + 0x90) - (int)lVar1;
    puVar3 = puVar4;
  }
  puVar3 = *(undefined8 **)(lVar2 + 0x60 + lVar5 * 8);
  *(undefined8 *)(lVar2 + 0x60 + lVar5 * 8) = 0;
  while (puVar3 != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)*puVar3;
    lVar5 = puVar3[1] + 0x18 + puVar3[2];
    FUN_00a0d6e0(param_1,puVar3,lVar5);
    *(int *)(lVar2 + 0x90) = *(int *)(lVar2 + 0x90) - (int)lVar5;
    puVar3 = puVar4;
  }
  return;
}


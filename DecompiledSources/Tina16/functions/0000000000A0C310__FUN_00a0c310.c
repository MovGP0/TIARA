/* Ghidra address: 00a0c310 */
/* Ghidra symbol: FUN_00a0c310 */


undefined8 FUN_00a0c310(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  
  iVar3 = *(int *)((longlong)param_1 + 0x24);
  if ((iVar3 - 0xcdU < 2) && ((int)param_1[0xb] == 0)) {
    if (*(uint *)(param_1 + 0x15) < *(uint *)((longlong)param_1 + 0x8c)) {
      puVar2 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar2 + 5) = 0x43;
      (*(code *)*puVar2)(param_1);
    }
    (**(code **)(param_1[0x44] + 8))(param_1);
    *(undefined4 *)((longlong)param_1 + 0x24) = 0xd2;
  }
  else if (iVar3 != 0xd2) {
    if (iVar3 == 0xcf) {
      *(undefined4 *)((longlong)param_1 + 0x24) = 0xd2;
    }
    else {
      lVar1 = *param_1;
      *(undefined4 *)(lVar1 + 0x28) = 0x14;
      *(int *)(lVar1 + 0x2c) = iVar3;
      (**(code **)*param_1)(param_1);
    }
  }
  do {
    if (*(int *)(param_1[0x48] + 0x24) != 0) {
      (**(code **)(param_1[5] + 0x30))(param_1);
      FUN_00a1bd30(param_1);
      return 1;
    }
    iVar3 = (**(code **)param_1[0x48])(param_1);
  } while (iVar3 != 0);
  return 0;
}


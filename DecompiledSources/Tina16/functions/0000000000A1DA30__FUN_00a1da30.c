/* Ghidra address: 00a1da30 */
/* Ghidra symbol: FUN_00a1da30 */


void FUN_00a1da30(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = *(int *)((longlong)param_1 + 0x24);
  if (1 < iVar4 - 0x65U) {
    if (iVar4 != 0x67) {
      lVar2 = *param_1;
      *(undefined4 *)(lVar2 + 0x28) = 0x14;
      *(int *)(lVar2 + 0x2c) = iVar4;
      (**(code **)*param_1)(param_1);
    }
    while (*(int *)(param_1[0x36] + 0x1c) == 0) {
      (**(code **)param_1[0x36])(param_1);
      uVar3 = *(uint *)(param_1 + 0x28);
      if (uVar3 != 0) {
        uVar5 = 0;
        do {
          puVar1 = (undefined8 *)param_1[2];
          if (puVar1 != (undefined8 *)0x0) {
            *(uint *)(puVar1 + 1) = uVar5;
            *(uint *)((longlong)puVar1 + 0xc) = uVar3;
            (*(code *)*puVar1)(param_1);
          }
          iVar4 = (**(code **)(param_1[0x39] + 8))(param_1,0);
          if (iVar4 == 0) {
            puVar1 = (undefined8 *)*param_1;
            *(undefined4 *)(puVar1 + 5) = 0x18;
            (*(code *)*puVar1)(param_1);
          }
          uVar5 = uVar5 + 1;
          uVar3 = *(uint *)(param_1 + 0x28);
        } while (uVar5 < uVar3);
      }
LAB_00a1da7c:
      (**(code **)(param_1[0x36] + 0x10))(param_1);
    }
    (**(code **)(param_1[0x3a] + 0x18))(param_1);
    (**(code **)(param_1[5] + 0x20))(param_1);
    FUN_00a1bd30(param_1);
    return;
  }
  if (*(uint *)((longlong)param_1 + 0x34) <= *(uint *)(param_1 + 0x26)) goto LAB_00a1da7c;
  puVar1 = (undefined8 *)*param_1;
  *(undefined4 *)(puVar1 + 5) = 0x43;
  (*(code *)*puVar1)(param_1);
  goto LAB_00a1da7c;
}


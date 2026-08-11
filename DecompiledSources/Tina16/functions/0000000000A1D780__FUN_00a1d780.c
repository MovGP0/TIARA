/* Ghidra address: 00a1d780 */
/* Ghidra symbol: FUN_00a1d780 */


uint FUN_00a1d780(longlong *param_1,undefined8 param_2,uint param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *(int *)((longlong)param_1 + 0x24);
  if (iVar3 != 0x66) {
    lVar1 = *param_1;
    *(undefined4 *)(lVar1 + 0x28) = 0x14;
    *(int *)(lVar1 + 0x2c) = iVar3;
    (**(code **)*param_1)(param_1);
  }
  uVar4 = *(uint *)((longlong)param_1 + 0x34);
  if (*(uint *)(param_1 + 0x26) < uVar4) {
    puVar2 = (undefined8 *)param_1[2];
    if (puVar2 != (undefined8 *)0x0) {
      *(uint *)(puVar2 + 1) = *(uint *)(param_1 + 0x26);
      *(uint *)((longlong)puVar2 + 0xc) = uVar4;
      (*(code *)*puVar2)(param_1);
    }
    if (*(int *)(param_1[0x36] + 0x18) != 0) {
      (**(code **)(param_1[0x36] + 8))(param_1);
    }
    uVar4 = *(int *)((longlong)param_1 + 0x13c) * 8;
    if (param_3 < uVar4) {
      puVar2 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar2 + 5) = 0x17;
      (*(code *)*puVar2)(param_1);
    }
    iVar3 = (**(code **)(param_1[0x39] + 8))(param_1,param_2);
    if (iVar3 != 0) {
      *(uint *)(param_1 + 0x26) = (int)param_1[0x26] + uVar4;
      return uVar4;
    }
  }
  else {
    lVar1 = *param_1;
    *(undefined4 *)(lVar1 + 0x28) = 0x7b;
    (**(code **)(lVar1 + 8))(param_1,0xffffffff);
  }
  return 0;
}


/* Ghidra address: 00a1d6c0 */
/* Ghidra symbol: FUN_00a1d6c0 */


void FUN_00a1d6c0(longlong *param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  uint uVar4;
  int local_1c;
  
  iVar1 = *(int *)((longlong)param_1 + 0x24);
  if (iVar1 != 0x65) {
    lVar2 = *param_1;
    *(undefined4 *)(lVar2 + 0x28) = 0x14;
    *(int *)(lVar2 + 0x2c) = iVar1;
    (**(code **)*param_1)(param_1);
  }
  if (*(uint *)((longlong)param_1 + 0x34) <= *(uint *)(param_1 + 0x26)) {
    lVar2 = *param_1;
    *(undefined4 *)(lVar2 + 0x28) = 0x7b;
    (**(code **)(lVar2 + 8))(param_1,0xffffffff);
  }
  puVar3 = (undefined8 *)param_1[2];
  if (puVar3 != (undefined8 *)0x0) {
    *(int *)(puVar3 + 1) = (int)param_1[0x26];
    *(undefined4 *)((longlong)puVar3 + 0xc) = *(undefined4 *)((longlong)param_1 + 0x34);
    (*(code *)*puVar3)(param_1);
  }
  if (*(int *)(param_1[0x36] + 0x18) != 0) {
    (**(code **)(param_1[0x36] + 8))(param_1);
  }
  uVar4 = *(int *)((longlong)param_1 + 0x34) - (int)param_1[0x26];
  if (param_3 <= uVar4) {
    uVar4 = param_3;
  }
  local_1c = 0;
  (**(code **)(param_1[0x37] + 8))(param_1,param_2,&local_1c,uVar4);
  *(int *)(param_1 + 0x26) = (int)param_1[0x26] + local_1c;
  return;
}


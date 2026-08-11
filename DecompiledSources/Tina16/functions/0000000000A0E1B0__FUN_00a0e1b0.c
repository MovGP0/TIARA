/* Ghidra address: 00a0e1b0 */
/* Ghidra symbol: FUN_00a0e1b0 */


int FUN_00a0e1b0(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int local_1c;
  
  iVar1 = *(int *)((longlong)param_1 + 0x24);
  if (iVar1 != 0xcd) {
    lVar3 = *param_1;
    *(undefined4 *)(lVar3 + 0x28) = 0x14;
    *(int *)(lVar3 + 0x2c) = iVar1;
    (**(code **)*param_1)(param_1);
  }
  uVar2 = *(uint *)((longlong)param_1 + 0x8c);
  if (*(uint *)(param_1 + 0x15) < uVar2) {
    puVar4 = (undefined8 *)param_1[2];
    if (puVar4 != (undefined8 *)0x0) {
      *(uint *)(puVar4 + 1) = *(uint *)(param_1 + 0x15);
      *(uint *)((longlong)puVar4 + 0xc) = uVar2;
      (*(code *)*puVar4)(param_1);
    }
    local_1c = 0;
    (**(code **)(param_1[0x45] + 8))(param_1,param_2,&local_1c,param_3);
    *(int *)(param_1 + 0x15) = (int)param_1[0x15] + local_1c;
  }
  else {
    lVar3 = *param_1;
    *(undefined4 *)(lVar3 + 0x28) = 0x7b;
    (**(code **)(lVar3 + 8))(param_1,0xffffffff);
    local_1c = 0;
  }
  return local_1c;
}


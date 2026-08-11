/* Ghidra address: 00a0ec30 */
/* Ghidra symbol: FUN_00a0ec30 */


void FUN_00a0ec30(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  lVar2 = param_1[0x44];
  if (*(int *)(lVar2 + 0x10) == 0) {
    if ((*(int *)((longlong)param_1 + 0x6c) != 0) && (param_1[0x14] == 0)) {
      if ((*(int *)((longlong)param_1 + 0x74) == 0) || (*(int *)((longlong)param_1 + 0x84) == 0)) {
        if (*(int *)((longlong)param_1 + 0x7c) == 0) {
          puVar4 = (undefined8 *)*param_1;
          *(undefined4 *)(puVar4 + 5) = 0x2e;
          (*(code *)*puVar4)(param_1);
        }
        else {
          param_1[0x4e] = *(longlong *)(lVar2 + 0x20);
        }
      }
      else {
        param_1[0x4e] = *(longlong *)(lVar2 + 0x28);
        *(undefined4 *)(lVar2 + 0x10) = 1;
      }
    }
    (**(code **)param_1[0x4b])(param_1);
    (**(code **)(param_1[0x46] + 0x10))(param_1);
    if (*(int *)((longlong)param_1 + 0x5c) != 0) goto LAB_00a0ecb2;
    if (*(int *)(lVar2 + 0x1c) == 0) {
      (**(code **)param_1[0x4d])(param_1);
    }
    (**(code **)param_1[0x4c])(param_1);
    if (*(int *)((longlong)param_1 + 0x6c) != 0) {
      (**(code **)param_1[0x4e])(param_1,*(undefined4 *)(lVar2 + 0x10));
    }
    (**(code **)param_1[0x47])(param_1);
    puVar4 = (undefined8 *)param_1[0x45];
  }
  else {
    *(undefined4 *)(lVar2 + 0x10) = 0;
    (**(code **)param_1[0x4e])(param_1,0);
    (**(code **)param_1[0x47])(param_1,2);
    puVar4 = (undefined8 *)param_1[0x45];
  }
  (*(code *)*puVar4)(param_1);
LAB_00a0ecb2:
  lVar3 = param_1[2];
  if (lVar3 != 0) {
    iVar1 = *(int *)(lVar2 + 0x18);
    *(int *)(lVar3 + 0x10) = iVar1;
    iVar1 = (2 - (uint)(*(int *)(lVar2 + 0x10) == 0)) + iVar1;
    *(int *)(lVar3 + 0x14) = iVar1;
    if (((int)param_1[0xb] != 0) && (*(int *)(param_1[0x48] + 0x24) == 0)) {
      *(uint *)(lVar3 + 0x14) = (2 - (uint)(*(int *)((longlong)param_1 + 0x84) == 0)) + iVar1;
    }
  }
  return;
}


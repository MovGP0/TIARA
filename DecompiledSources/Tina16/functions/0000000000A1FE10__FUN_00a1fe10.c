/* Ghidra address: 00a1fe10 */
/* Ghidra symbol: FUN_00a1fe10 */


void FUN_00a1fe10(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  lVar2 = param_1[0x36];
  iVar1 = *(int *)(lVar2 + 0x20);
  if (iVar1 == 2) {
LAB_00a1ff42:
    if ((int)param_1[0x21] == 0) {
      FUN_00a20080(param_1);
      FUN_00a20300(param_1);
    }
    (**(code **)param_1[0x3e])(param_1,0);
    (**(code **)param_1[0x39])(param_1,2);
    if (*(int *)(lVar2 + 0x2c) == 0) {
      (**(code **)(param_1[0x3a] + 8))(param_1);
    }
    (**(code **)(param_1[0x3a] + 0x10))(param_1);
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 == 0) {
        FUN_00a20080(param_1);
        FUN_00a20300(param_1);
        if ((int)param_1[0x20] == 0) {
          (**(code **)param_1[0x3b])(param_1);
          (**(code **)param_1[0x3c])(param_1);
          (**(code **)param_1[0x38])(param_1,0);
        }
        (**(code **)param_1[0x3d])(param_1);
        (**(code **)param_1[0x3e])(param_1,(int)param_1[0x21]);
        (**(code **)param_1[0x39])(param_1,(1 < *(int *)(lVar2 + 0x28)) * '\x03');
        (**(code **)param_1[0x37])(param_1,0);
        *(uint *)(lVar2 + 0x18) = (uint)((int)param_1[0x21] == 0);
      }
      else {
        puVar3 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar3 + 5) = 0x30;
        (*(code *)*puVar3)(param_1);
      }
      goto LAB_00a1ffa1;
    }
    FUN_00a20080(param_1);
    FUN_00a20300(param_1);
    if (((*(int *)((longlong)param_1 + 0x19c) == 0) && (*(int *)((longlong)param_1 + 0x1a4) != 0))
       && (*(int *)((longlong)param_1 + 0x104) == 0)) {
      *(undefined4 *)(lVar2 + 0x20) = 2;
      *(int *)(lVar2 + 0x24) = *(int *)(lVar2 + 0x24) + 1;
      goto LAB_00a1ff42;
    }
    (**(code **)param_1[0x3e])(param_1,1);
    (**(code **)param_1[0x39])(param_1,2);
  }
  *(undefined4 *)(lVar2 + 0x18) = 0;
LAB_00a1ffa1:
  iVar1 = *(int *)(lVar2 + 0x28);
  *(uint *)(lVar2 + 0x1c) = (uint)(*(int *)(lVar2 + 0x24) == iVar1 + -1);
  lVar4 = param_1[2];
  if (lVar4 != 0) {
    *(int *)(lVar4 + 0x10) = *(int *)(lVar2 + 0x24);
    *(int *)(lVar4 + 0x14) = iVar1;
  }
  return;
}


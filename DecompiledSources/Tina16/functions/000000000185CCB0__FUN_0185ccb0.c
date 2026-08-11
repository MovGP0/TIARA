/* Ghidra address: 0185ccb0 */
/* Ghidra symbol: FUN_0185ccb0 */


void FUN_0185ccb0(longlong param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_00410f20(*(longlong *)(param_1 + 8));
  }
  *(undefined8 *)(param_1 + 8) = 0;
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_00410f20(*(longlong *)(param_1 + 0x10));
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_0185f580(param_1,param_1 + 0x18);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (*(longlong *)(param_1 + 0x20) == 0) {
    uVar2 = FUN_004095c0(6);
    *(undefined8 *)(param_1 + 0x20) = uVar2;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x20);
  *puVar1 = 0x2d2d2d2d;
  *(undefined2 *)(puVar1 + 1) = 0x2d2d;
  if (*(longlong *)(param_1 + 0x28) == 0) {
    uVar2 = FUN_004095c0(0x24);
    *(undefined8 *)(param_1 + 0x28) = uVar2;
  }
  FUN_0040d200(*(undefined8 *)(param_1 + 0x28),0x24,0);
  if (*(longlong *)(param_1 + 0x30) == 0) {
    uVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
    *(undefined8 *)(param_1 + 0x30) = uVar2;
  }
  iVar5 = *(int *)(*(longlong *)(param_1 + 0x30) + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      lVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x30),iVar4);
      if (lVar3 != 0) {
        if (*(longlong *)(lVar3 + 0x28) != 0) {
          FUN_0185f580(param_1,lVar3 + 0x28);
        }
        if (*(longlong *)(lVar3 + 0x30) != 0) {
          FUN_004095f0(*(longlong *)(lVar3 + 0x30));
        }
        if (*(longlong *)(lVar3 + 0x40) != 0) {
          FUN_00410f20(*(longlong *)(lVar3 + 0x40));
        }
        FUN_004095f0(lVar3);
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))(*(longlong **)(param_1 + 0x30));
  if (*(longlong *)(param_1 + 0x38) == 0) {
    uVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
    *(undefined8 *)(param_1 + 0x38) = uVar2;
  }
  iVar5 = *(int *)(*(longlong *)(param_1 + 0x38) + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      lVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x38),iVar4);
      if (lVar3 != 0) {
        FUN_004095f0(lVar3);
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  (**(code **)(**(longlong **)(param_1 + 0x38) + 0x10))(*(longlong **)(param_1 + 0x38));
  if (*(longlong *)(param_1 + 0x40) == 0) {
    uVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
    *(undefined8 *)(param_1 + 0x40) = uVar2;
  }
  (**(code **)(**(longlong **)(param_1 + 0x40) + 0x10))(*(longlong **)(param_1 + 0x40));
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_004095f0(*(longlong *)(param_1 + 0x48));
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  return;
}


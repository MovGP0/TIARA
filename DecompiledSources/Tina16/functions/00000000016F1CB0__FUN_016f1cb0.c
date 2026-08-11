/* Ghidra address: 016f1cb0 */
/* Ghidra symbol: FUN_016f1cb0 */


void FUN_016f1cb0(undefined8 *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  longlong local_70;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  undefined8 local_30;
  
  local_50 = *param_1;
  local_48 = param_1[1];
  uStack_40 = param_1[2];
  local_38 = param_1[3];
  local_30 = param_1[4];
  local_70 = param_3;
  if (((char)local_50 == '\a') || ((char)local_50 == '\b')) {
    uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
    uVar2 = uStack_40._4_4_;
    local_88 = local_48;
    local_80 = local_30;
    if ((char)local_50 == '\a') {
      FUN_016f1c30(auStack_a8,1,uVar2,local_38 & 0xffffffff);
    }
    else {
      FUN_016f1c30(auStack_a8,2,uVar2,local_38 & 0xffffffff);
    }
  }
  uVar3 = 0;
  while ((int)uVar3 < (int)*(uint *)(param_2 + 0x10)) {
    if (*(uint *)(param_2 + 0x10) <= uVar3) {
      FUN_00594f90();
    }
    lVar4 = (longlong)(int)uVar3;
    if (**(char **)(*(longlong *)(param_2 + 8) + lVar4 * 8) == '\v') {
      if (*(uint *)(param_2 + 0x10) <= uVar3) {
        FUN_00594f90();
      }
      if (*(uint *)(param_2 + 0x10) <= uVar3) {
        FUN_00594f90();
      }
      if (*(uint *)(param_2 + 0x10) <= uVar3) {
        FUN_00594f90();
      }
      lVar1 = *(longlong *)(*(longlong *)(param_2 + 8) + lVar4 * 8);
      local_88 = *(undefined8 *)(lVar1 + 0x10);
      local_80 = *(undefined8 *)(lVar1 + 0x18);
      FUN_016f1c30(auStack_a8,1,*(undefined4 *)(lVar1 + 4),0);
      if (*(uint *)(param_2 + 0x10) <= uVar3) {
        FUN_00594f90();
      }
      if (*(uint *)(param_2 + 0x10) <= uVar3) {
        FUN_00594f90();
      }
      if (*(uint *)(param_2 + 0x10) <= uVar3) {
        FUN_00594f90();
      }
      lVar1 = *(longlong *)(*(longlong *)(param_2 + 8) + lVar4 * 8);
      local_88 = *(undefined8 *)(lVar1 + 0x10);
      local_80 = *(undefined8 *)(lVar1 + 0x18);
      FUN_016f1c30(auStack_a8,1,*(undefined4 *)(lVar1 + 8),0);
      if (*(uint *)(param_2 + 0x10) <= uVar3) {
        FUN_00594f90();
      }
      local_58 = *(undefined8 *)(*(longlong *)(param_2 + 8) + lVar4 * 8);
      FUN_00597e50(local_70 + 8,&local_58);
      FUN_00599670(param_2 + 8,uVar3,5);
    }
    else {
      uVar3 = uVar3 + 1;
    }
  }
  return;
}


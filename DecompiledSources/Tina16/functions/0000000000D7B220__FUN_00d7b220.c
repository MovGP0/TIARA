/* Ghidra address: 00d7b220 */
/* Ghidra symbol: FUN_00d7b220 */


void FUN_00d7b220(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 local_48 [16];
  undefined8 *local_38;
  undefined8 *local_30;
  undefined8 *local_28;
  undefined8 *local_20;
  
  FUN_00d787d0(param_1);
  if (*(longlong *)(param_1 + 0x90) != 0) {
    lVar2 = FUN_00d5a350(*(longlong *)(param_1 + 0x90),
                         *(undefined8 *)(*(longlong *)(param_1 + 0x130) + 0x20),
                         *(longlong *)(param_1 + 0x130) + 0x10);
    if (lVar2 != 0) {
      local_20 = (undefined8 *)(param_1 + 0x130);
      uVar1 = *local_20;
      *local_20 = 0;
      FUN_00410f20(uVar1);
      *(longlong *)(param_1 + 0x130) = lVar2;
      FUN_004238d0(local_48,*(undefined4 *)(param_1 + 0xe4),*(undefined4 *)(param_1 + 0xe8),
                   *(undefined4 *)(param_1 + 0xf0),*(undefined4 *)(param_1 + 0xec));
      FUN_00d59770(lVar2,local_48);
    }
    lVar2 = FUN_00d5a350(*(undefined8 *)(param_1 + 0x90),
                         *(undefined8 *)(*(longlong *)(param_1 + 0x138) + 0x20),
                         *(longlong *)(param_1 + 0x138) + 0x10);
    if (lVar2 != 0) {
      local_28 = (undefined8 *)(param_1 + 0x138);
      uVar1 = *local_28;
      *local_28 = 0;
      FUN_00410f20(uVar1);
      *(longlong *)(param_1 + 0x138) = lVar2;
      FUN_004238d0(local_48,*(undefined4 *)(param_1 + 0xe4),*(undefined4 *)(param_1 + 0xe8),
                   *(undefined4 *)(param_1 + 0xf0),*(undefined4 *)(param_1 + 0xec));
      FUN_00d59770(lVar2,local_48);
    }
    lVar2 = FUN_00d5a350(*(undefined8 *)(param_1 + 0x90),
                         *(undefined8 *)(*(longlong *)(param_1 + 0x140) + 0x20),
                         *(longlong *)(param_1 + 0x140) + 0x10);
    if (lVar2 != 0) {
      local_30 = (undefined8 *)(param_1 + 0x140);
      uVar1 = *local_30;
      *local_30 = 0;
      FUN_00410f20(uVar1);
      *(longlong *)(param_1 + 0x140) = lVar2;
      FUN_004238d0(local_48,*(undefined4 *)(param_1 + 0xe4),*(undefined4 *)(param_1 + 0xe8),
                   *(undefined4 *)(param_1 + 0xf0),*(undefined4 *)(param_1 + 0xec));
      FUN_00d59770(lVar2,local_48);
    }
    lVar2 = FUN_00d5a350(*(undefined8 *)(param_1 + 0x90),
                         *(undefined8 *)(*(longlong *)(param_1 + 0x148) + 0x20),
                         *(longlong *)(param_1 + 0x148) + 0x10);
    if (lVar2 != 0) {
      local_38 = (undefined8 *)(param_1 + 0x148);
      uVar1 = *local_38;
      *local_38 = 0;
      FUN_00410f20(uVar1);
      *(longlong *)(param_1 + 0x148) = lVar2;
      FUN_004238d0(local_48,*(undefined4 *)(param_1 + 0xe4),*(undefined4 *)(param_1 + 0xe8),
                   *(undefined4 *)(param_1 + 0xf0),*(undefined4 *)(param_1 + 0xec));
      FUN_00d59770(lVar2,local_48);
    }
  }
  return;
}


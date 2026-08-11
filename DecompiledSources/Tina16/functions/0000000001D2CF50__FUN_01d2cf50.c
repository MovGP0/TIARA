/* Ghidra address: 01d2cf50 */
/* Ghidra symbol: FUN_01d2cf50 */


void FUN_01d2cf50(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined4 local_20;
  undefined4 local_1c;
  undefined8 local_18;
  char local_9;
  
  local_30 = auStack_58;
  local_9 = '\x01';
  local_1c = *(undefined4 *)(param_1 + 0x48);
  local_20 = *(undefined4 *)(param_1 + 0x58);
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  if (*(int *)(param_1 + 0x58) < *(int *)(param_1 + 0x48)) {
    local_18 = *(undefined8 *)(param_1 + 0x50);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x32;
    iVar1 = FUN_01d43610();
    if (((double)iVar1 / 16.0 < (double)*(int *)(param_1 + 0x58)) ||
       (4095.5 < (double)*(int *)(param_1 + 0x58))) {
      *(undefined8 *)(param_1 + 0x50) = local_18;
      *(undefined4 *)(param_1 + 0x48) = local_1c;
      *(undefined4 *)(param_1 + 0x58) = local_20;
      return;
    }
    uVar2 = FUN_004095c0((longlong)(*(int *)(param_1 + 0x58) << 4));
    *(undefined8 *)(param_1 + 0x50) = uVar2;
    if (local_9 != '\0') {
      FUN_00409a70(local_18,*(undefined8 *)(param_1 + 0x50),
                   (longlong)((*(int *)(param_1 + 0x48) + -1) * 0x10));
      FUN_004095f0(local_18,(longlong)((*(int *)(param_1 + 0x58) + -0x32) * 0x10));
    }
  }
  if (local_9 != '\0') {
    *(undefined4 *)
     (*(longlong *)(param_1 + 0x50) + -0x10 + (longlong)*(int *)(param_1 + 0x48) * 0x10) = param_2;
    *(undefined4 *)
     (*(longlong *)(param_1 + 0x50) + -0xc + (longlong)*(int *)(param_1 + 0x48) * 0x10) = param_3;
    *(undefined4 *)(*(longlong *)(param_1 + 0x50) + -8 + (longlong)*(int *)(param_1 + 0x48) * 0x10)
         = param_4;
    *(undefined4 *)(*(longlong *)(param_1 + 0x50) + -4 + (longlong)*(int *)(param_1 + 0x48) * 0x10)
         = param_5;
  }
  return;
}


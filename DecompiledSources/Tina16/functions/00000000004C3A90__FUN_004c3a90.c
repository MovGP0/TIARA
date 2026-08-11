/* Ghidra address: 004c3a90 */
/* Ghidra symbol: FUN_004c3a90 */


void FUN_004c3a90(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong local_res10 [3];
  longlong local_30;
  
  local_res10[0] = param_2;
  FUN_00419500(param_2);
  lVar4 = 0;
  if (local_res10[0] != 0) {
    lVar4 = *(longlong *)(local_res10[0] + -8);
  }
  if (lVar4 < param_3 + param_4) {
    local_30 = 0;
    if (local_res10[0] != 0) {
      local_30 = *(longlong *)(local_res10[0] + -8);
    }
    local_30 = local_30 - param_3;
    lVar4 = param_4 - local_30;
  }
  else {
    lVar4 = 0;
    local_30 = param_4;
  }
  for (; 0 < local_30; local_30 = local_30 - lVar1) {
    lVar1 = 0;
    if (*(longlong *)(param_1 + 0x10) != 0) {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + -8);
    }
    lVar1 = lVar1 - *(longlong *)(param_1 + 0x20);
    if (lVar1 < 1) {
      FUN_004c3a60(param_1);
      lVar1 = 0;
      if (*(longlong *)(param_1 + 0x10) != 0) {
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + -8);
      }
    }
    if (local_30 < lVar1) {
      lVar1 = local_30;
    }
    FUN_00409a70(local_res10[0] + param_3,
                 *(longlong *)(param_1 + 0x10) + *(longlong *)(param_1 + 0x20),lVar1);
    param_3 = param_3 + lVar1;
    *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + lVar1;
  }
  for (; 0 < lVar4; lVar4 = lVar4 - lVar1) {
    lVar1 = 0;
    if (*(longlong *)(param_1 + 0x10) != 0) {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + -8);
    }
    lVar1 = lVar1 - *(longlong *)(param_1 + 0x20);
    if (lVar1 < 1) {
      FUN_004c3a60();
      lVar1 = 0;
      if (*(longlong *)(param_1 + 0x10) != 0) {
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + -8);
      }
    }
    if (lVar4 < lVar1) {
      lVar1 = lVar4;
    }
    lVar2 = 0;
    lVar3 = lVar1;
    if (-1 < lVar1 + -1) {
      do {
        *(undefined1 *)(*(longlong *)(param_1 + 0x10) + *(longlong *)(param_1 + 0x20) + lVar2) = 0;
        lVar2 = lVar2 + 1;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + lVar1;
  }
  FUN_00419430(local_res10,&DAT_00406578);
  return;
}


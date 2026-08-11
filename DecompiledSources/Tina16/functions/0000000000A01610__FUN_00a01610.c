/* Ghidra address: 00a01610 */
/* Ghidra symbol: FUN_00a01610 */


longlong * FUN_00a01610(longlong *param_1,longlong *param_2)

{
  undefined1 *puVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  int local_28;
  int local_24;
  longlong local_20;
  
  local_30 = auStack_58;
  local_24 = (int)param_1[2] - (int)param_1[1];
  if (((int)param_1[3] == 0x4b0) && (*(int *)((longlong)param_1 + 0x1c) == 0x4b0)) {
    local_30 = auStack_58;
    FUN_004169f0(param_2,(longlong)local_24 / 2 & 0xffffffff);
    uVar3 = FUN_00414de0(param_2);
    FUN_00409a70(param_1[1],uVar3,(longlong)local_24);
  }
  else {
    local_28 = 0;
    puVar1 = auStack_58;
    if (0 < local_24) {
      FUN_004169f0(param_2,local_24);
      local_20 = param_1[1];
      do {
        local_28 = local_28 + 1;
        uVar2 = (**(code **)(*param_1 + 0x10))(param_1);
        lVar4 = FUN_00414de0(param_2);
        *(undefined2 *)(lVar4 + -2 + (longlong)local_28 * 2) = uVar2;
        if (*(short *)(*param_2 + -2 + (longlong)local_28 * 2) == 0) {
          local_28 = local_28 + -1;
          break;
        }
      } while ((ulonglong)param_1[1] < (ulonglong)param_1[2]);
      param_1[1] = local_20;
      puVar1 = local_30;
    }
    local_30 = puVar1;
    FUN_004169f0(param_2,local_28);
  }
  return param_2;
}


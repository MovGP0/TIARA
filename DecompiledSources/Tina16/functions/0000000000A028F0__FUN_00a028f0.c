/* Ghidra address: 00a028f0 */
/* Ghidra symbol: FUN_00a028f0 */


longlong * FUN_00a028f0(longlong param_1,longlong *param_2,int param_3,int param_4)

{
  undefined2 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  int local_24;
  int local_20;
  int local_1c;
  
  local_30 = auStack_58;
  FUN_004169f0(param_2,param_4 - param_3);
  local_24 = 0;
  if (*param_2 != 0) {
    local_24 = *(int *)(*param_2 + -4);
  }
  if (0 < local_24) {
    local_1c = *(int *)(*(longlong *)(param_1 + 0x28) + 8) - *(int *)(param_1 + 8);
    local_20 = 0;
    FUN_00a02b70(param_1,param_3);
    while (*(int *)(*(longlong *)(param_1 + 0x28) + 8) - *(int *)(param_1 + 8) < param_4) {
      local_20 = local_20 + 1;
      uVar1 = FUN_00a029f0(param_1);
      lVar2 = FUN_00414de0(param_2);
      *(undefined2 *)(lVar2 + -2 + (longlong)local_20 * 2) = uVar1;
    }
    FUN_004169f0(param_2,local_20);
    FUN_00a02b70(param_1,local_1c);
  }
  return param_2;
}


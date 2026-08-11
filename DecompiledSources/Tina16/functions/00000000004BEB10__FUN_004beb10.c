/* Ghidra address: 004beb10 */
/* Ghidra symbol: FUN_004beb10 */


void FUN_004beb10(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong local_res10 [3];
  longlong local_28;
  longlong local_20;
  
  local_res10[0] = param_2;
  FUN_00419500(param_2);
  local_28 = param_3;
  for (local_20 = param_4; 0 < local_20; local_20 = local_20 - lVar1) {
    lVar1 = *(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20);
    if (lVar1 == 0) {
      FUN_004bec80(param_1,0,1);
      lVar1 = *(longlong *)(param_1 + 0x28);
    }
    if (local_20 <= lVar1) {
      lVar1 = local_20;
    }
    FUN_00409a70(*(longlong *)(param_1 + 0x10) + *(longlong *)(param_1 + 0x20),
                 local_res10[0] + local_28,lVar1);
    *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + lVar1;
    local_28 = local_28 + lVar1;
  }
  FUN_00419430(local_res10,&DAT_00406578);
  return;
}


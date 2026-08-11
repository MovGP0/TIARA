/* Ghidra address: 019511a0 */
/* Ghidra symbol: FUN_019511a0 */


void FUN_019511a0(longlong param_1)

{
  double dVar1;
  double dVar2;
  undefined1 auStack_58 [32];
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  
  local_20 = (double)FUN_019508b0(param_1);
  local_28 = (double)FUN_019508b0(param_1);
  local_28 = local_28 + *(double *)(param_1 + 0xa8);
  local_30 = (double)FUN_01950860(param_1);
  dVar2 = (double)FUN_01950860(param_1);
  dVar1 = local_28;
  dVar2 = dVar2 + *(double *)(param_1 + 0xb0);
  if (local_28 < local_20) {
    local_28 = local_20;
    local_20 = dVar1;
  }
  local_38 = dVar2;
  if (dVar2 < local_30) {
    local_38 = local_30;
    local_30 = dVar2;
  }
  FUN_01951150(auStack_58);
  return;
}


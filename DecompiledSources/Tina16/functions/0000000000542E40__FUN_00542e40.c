/* Ghidra address: 00542e40 */
/* Ghidra symbol: FUN_00542e40 */


void FUN_00542e40(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong local_10;
  
  local_10 = 0;
  FUN_0041b840(&local_10,DAT_02011680);
  if (local_10 == 0) {
    lVar2 = FUN_00542b90(&DAT_00542ab8,1);
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = lVar2 + 0x10;
    }
    FUN_0041b840(&local_10,lVar2);
  }
  lVar1 = *(longlong *)(param_1 + 0x28);
  LOCK();
  lVar2 = **(longlong **)(param_1 + 0x40);
  if (lVar1 == lVar2) {
    **(longlong **)(param_1 + 0x40) = local_10;
    lVar2 = lVar1;
  }
  UNLOCK();
  if (lVar2 == *(longlong *)(param_1 + 0x28)) {
    local_10 = 0;
  }
  FUN_0041b800(&local_10);
  return;
}


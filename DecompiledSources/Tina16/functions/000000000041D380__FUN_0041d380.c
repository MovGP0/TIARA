/* Ghidra address: 0041d380 */
/* Ghidra symbol: FUN_0041d380 */


void FUN_0041d380(longlong *param_1)

{
  ulonglong *puVar1;
  ulonglong local_10;
  
  puVar1 = (ulonglong *)((longlong)param_1 + (longlong)*(int *)(*param_1 + -0x80) + -8);
  local_10 = *puVar1;
  while ((local_10 & 1) == 0) {
    LOCK();
    if (local_10 == *puVar1) {
      *puVar1 = local_10 | 1;
    }
    UNLOCK();
    local_10 = *puVar1;
  }
  return;
}


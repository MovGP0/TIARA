/* Ghidra address: 004121f0 */
/* Ghidra symbol: FUN_004121f0 */


ulonglong FUN_004121f0(longlong *param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong local_20;
  
  puVar1 = (ulonglong *)((longlong)param_1 + (longlong)*(int *)(*param_1 + -0x80) + -8);
  local_20 = *puVar1;
  uVar3 = local_20 & 0xfffffffffffffffe;
  if (uVar3 == 0) {
    uVar2 = FUN_00411cf0();
    do {
      LOCK();
      if (local_20 == *puVar1) {
        *puVar1 = uVar2 | local_20 & 1;
      }
      UNLOCK();
      local_20 = *puVar1;
      uVar3 = local_20 & 0xfffffffffffffffe;
    } while (uVar3 == 0);
    if (uVar3 != uVar2) {
      FUN_00407d90();
    }
  }
  return uVar3;
}


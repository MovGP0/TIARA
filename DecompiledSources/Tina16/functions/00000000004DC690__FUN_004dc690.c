/* Ghidra address: 004dc690 */
/* Ghidra symbol: FUN_004dc690 */


void FUN_004dc690(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  if (((*(uint *)(param_1 + 0x20) & 1) == 0) && ((*(uint *)(param_1 + 0x20) & 2) == 0)) {
    plVar2 = (longlong *)FUN_004dc530(param_1);
    (**(code **)(*plVar2 + 0x60))(plVar2,0xffffffff);
  }
  LOCK();
  lVar1 = *(longlong *)(param_1 + 0x30);
  *(longlong *)(param_1 + 0x30) = 0;
  UNLOCK();
  if (lVar1 != 0) {
    FUN_004134c0(lVar1);
  }
  return;
}


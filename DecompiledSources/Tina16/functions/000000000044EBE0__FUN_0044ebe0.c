/* Ghidra address: 0044ebe0 */
/* Ghidra symbol: FUN_0044ebe0 */


void FUN_0044ebe0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  do {
    lVar1 = *param_1;
    *param_2 = lVar1;
    LOCK();
    lVar2 = *param_1;
    if (lVar1 == lVar2) {
      *param_1 = (longlong)param_2;
      lVar2 = lVar1;
    }
    UNLOCK();
  } while (lVar2 != lVar1);
  return;
}


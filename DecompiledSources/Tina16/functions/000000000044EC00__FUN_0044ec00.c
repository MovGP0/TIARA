/* Ghidra address: 0044ec00 */
/* Ghidra symbol: FUN_0044ec00 */


longlong * FUN_0044ec00(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  do {
    plVar1 = (longlong *)*param_1;
    if (plVar1 == (longlong *)0x0) {
      return (longlong *)0x0;
    }
    LOCK();
    plVar2 = (longlong *)*param_1;
    if (plVar1 == plVar2) {
      *param_1 = *plVar1;
      plVar2 = plVar1;
    }
    UNLOCK();
  } while (plVar2 != plVar1);
  return plVar1;
}


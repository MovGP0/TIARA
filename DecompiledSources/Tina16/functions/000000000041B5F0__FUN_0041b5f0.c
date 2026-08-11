/* Ghidra address: 0041b5f0 */
/* Ghidra symbol: FUN_0041b5f0 */


void FUN_0041b5f0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = DAT_01db9080;
  if ((DAT_01db9080 == (longlong *)0x0) || (DAT_01db9080[1] != param_1)) {
    for (; plVar2 != (longlong *)0x0; plVar2 = (longlong *)*plVar2) {
      plVar1 = (longlong *)*plVar2;
      if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
        *plVar2 = *plVar1;
        FUN_004095f0(plVar1);
        return;
      }
    }
  }
  else {
    DAT_01db9080 = (longlong *)*DAT_01db9080;
    FUN_004095f0(plVar2);
  }
  return;
}


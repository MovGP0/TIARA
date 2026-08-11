/* Ghidra address: 01bfcef0 */
/* Ghidra symbol: FUN_01bfcef0 */


void FUN_01bfcef0(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  if (*(char *)(param_1 + 0x31) != param_2) {
    *(char *)(param_1 + 0x31) = param_2;
    lVar1 = FUN_01bfc680(param_1);
    if (lVar1 != 0) {
      plVar2 = (longlong *)FUN_01bfc680(param_1);
      (**(code **)(*plVar2 + 0x180))(plVar2);
    }
  }
  return;
}


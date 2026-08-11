/* Ghidra address: 009850e0 */
/* Ghidra symbol: FUN_009850e0 */


void FUN_009850e0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  (**(code **)(*(longlong *)param_1[0x13] + 0x100))((longlong *)param_1[0x13]);
  lVar1 = (**(code **)(*param_1 + 0xa0))(param_1);
  if (lVar1 != 0) {
    plVar2 = (longlong *)(**(code **)(*param_1 + 0xa0))(param_1);
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  return;
}


/* Ghidra address: 01c07c30 */
/* Ghidra symbol: FUN_01c07c30 */


void FUN_01c07c30(undefined8 param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = FUN_01bfc680(param_1);
  if (lVar1 != 0) {
    plVar2 = (longlong *)FUN_01bfc680(param_1);
    (**(code **)(*plVar2 + 0x260))(plVar2);
  }
  return;
}


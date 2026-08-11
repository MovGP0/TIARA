/* Ghidra address: 0094d2d0 */
/* Ghidra symbol: FUN_0094d2d0 */


void FUN_0094d2d0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x188))(param_1);
  if (lVar1 != 0) {
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x188))(param_1);
    (**(code **)(*plVar2 + 0x2d0))(plVar2,param_1);
  }
  return;
}


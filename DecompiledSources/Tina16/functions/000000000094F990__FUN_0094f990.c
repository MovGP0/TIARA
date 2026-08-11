/* Ghidra address: 0094f990 */
/* Ghidra symbol: FUN_0094f990 */


void FUN_0094f990(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x188))(param_1);
  if (lVar1 != 0) {
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x188))(param_1);
    (**(code **)(*plVar2 + 0x2c8))(plVar2,param_1);
  }
  return;
}


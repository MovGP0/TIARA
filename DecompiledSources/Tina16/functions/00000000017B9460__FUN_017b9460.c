/* Ghidra address: 017b9460 */
/* Ghidra symbol: FUN_017b9460 */


void FUN_017b9460(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  
  FUN_01cf0e90(param_1,param_2,param_3);
  if (-1 < *(int *)(param_1 + 0x1c)) {
    FUN_017b96e0(param_1);
    plVar1 = (longlong *)FUN_017b9690(param_1);
    (**(code **)(*plVar1 + 0x90))(plVar1,0,param_3);
  }
  return;
}


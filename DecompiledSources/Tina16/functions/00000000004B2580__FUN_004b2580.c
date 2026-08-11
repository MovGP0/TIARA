/* Ghidra address: 004b2580 */
/* Ghidra symbol: FUN_004b2580 */


void FUN_004b2580(longlong param_1,uint param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (*(uint *)(lVar1 + 0x10) <= param_2) {
    FUN_00594f90();
  }
  plVar2 = *(longlong **)(*(longlong *)(lVar1 + 8) + (longlong)(int)param_2 * 8);
  (**(code **)(*plVar2 + 0x10))(plVar2,param_3);
  return;
}


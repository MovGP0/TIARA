/* Ghidra address: 006493a0 */
/* Ghidra symbol: FUN_006493a0 */


void FUN_006493a0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x160))(*(longlong **)(param_1 + 0x50));
  if (lVar1 != 0) {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x160))(*(longlong **)(param_1 + 0x50));
    FUN_00660200(uVar2);
  }
  return;
}


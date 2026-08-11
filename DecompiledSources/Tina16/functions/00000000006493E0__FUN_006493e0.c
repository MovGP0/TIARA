/* Ghidra address: 006493e0 */
/* Ghidra symbol: FUN_006493e0 */


void FUN_006493e0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x160))(*(longlong **)(param_1 + 0x50));
  if (lVar1 != 0) {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x160))(*(longlong **)(param_1 + 0x50));
    FUN_006601e0(uVar2);
  }
  return;
}


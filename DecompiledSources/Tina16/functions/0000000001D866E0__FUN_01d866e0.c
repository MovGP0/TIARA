/* Ghidra address: 01d866e0 */
/* Ghidra symbol: FUN_01d866e0 */


void FUN_01d866e0(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x60) != 0) {
    plVar1 = *(longlong **)(param_1 + 0x60);
    FUN_010e19d0(plVar1);
    uVar2 = FUN_0065b870(plVar1);
    thunk_FUN_041b2403(uVar2,0x1234,0,(longlong)*(int *)(param_1 + 0x60));
    (**(code **)(*plVar1 + 0x488))(plVar1);
  }
  return;
}


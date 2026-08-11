/* Ghidra address: 007035e0 */
/* Ghidra symbol: FUN_007035e0 */


void FUN_007035e0(longlong param_1,int param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x4a4) != param_2) {
    *(int *)(param_1 + 0x4a4) = param_2;
    uVar1 = FUN_0065b870(param_1);
    thunk_FUN_041b2403(uVar1,0x1406,0,(longlong)param_2);
    uVar2 = FUN_0064fca0(param_1,0x1407,0,0);
    *(undefined4 *)(param_1 + 0x4a4) = uVar2;
  }
  return;
}


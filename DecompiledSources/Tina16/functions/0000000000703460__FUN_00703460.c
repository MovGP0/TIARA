/* Ghidra address: 00703460 */
/* Ghidra symbol: FUN_00703460 */


void FUN_00703460(longlong param_1,int param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x494) != param_2) {
    *(int *)(param_1 + 0x494) = param_2;
    uVar1 = FUN_0065b870(param_1);
    thunk_FUN_041b2403(uVar1,0x140a,0,(longlong)param_2);
    uVar2 = FUN_0064fca0(param_1,0x140b,0,0);
    *(undefined4 *)(param_1 + 0x494) = uVar2;
  }
  return;
}


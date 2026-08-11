/* Ghidra address: 00703660 */
/* Ghidra symbol: FUN_00703660 */


void FUN_00703660(longlong param_1,int param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x4ac) != param_2) {
    *(int *)(param_1 + 0x4ac) = param_2;
    uVar1 = FUN_0065b870(param_1);
    thunk_FUN_041b2403(uVar1,0x1408,0,(longlong)param_2);
    FUN_0064fca0(param_1,0x1402,0,0);
    uVar2 = FUN_0064fca0(param_1,0x1409,0,0);
    *(undefined4 *)(param_1 + 0x4ac) = uVar2;
  }
  return;
}


/* Ghidra address: 006eaea0 */
/* Ghidra symbol: FUN_006eaea0 */


void FUN_006eaea0(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  FUN_00681e20(param_1);
  uVar1 = FUN_0065b870(param_1);
  iVar2 = FUN_005fbf20(*(undefined4 *)(param_1 + 200));
  thunk_FUN_041b2403(uVar1,0x443,0,(longlong)iVar2);
  return;
}


/* Ghidra address: 01051b80 */
/* Ghidra symbol: FUN_01051b80 */


void FUN_01051b80(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0065b870(*(undefined8 *)(param_1 + 0x958));
  thunk_FUN_041b2403(uVar1,0x435,0,0x7fffffff);
  uVar1 = FUN_0065b870(*(undefined8 *)(*(longlong *)(param_1 + 0x800) + 0x510));
  uVar1 = thunk_FUN_03c9d277(uVar1,0xfffffffc,FUN_0104df30);
  *(undefined8 *)(param_1 + 0x6b0) = uVar1;
  uVar1 = FUN_0065b870(*(undefined8 *)(*(longlong *)(param_1 + 0x828) + 0x510));
  uVar1 = thunk_FUN_03c9d277(uVar1,0xfffffffc,FUN_0104e010);
  *(undefined8 *)(param_1 + 0x6b8) = uVar1;
  FUN_00f8f2b0(*(undefined8 *)(param_1 + 0x9d8),param_1,1,0);
  FUN_01052690(param_1);
  return;
}


/* Ghidra address: 006fc530 */
/* Ghidra symbol: FUN_006fc530 */


void FUN_006fc530(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0065b870(*(undefined8 *)(param_2 + 0x60));
  *(undefined8 *)(param_2 + 0x48) = uVar1;
  thunk_FUN_03c9d277(*(undefined8 *)(param_2 + 0x48),0xfffffff0,(longlong)*(int *)(param_2 + 0x44));
  return;
}


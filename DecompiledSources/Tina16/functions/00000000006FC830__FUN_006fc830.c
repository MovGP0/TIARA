/* Ghidra address: 006fc830 */
/* Ghidra symbol: FUN_006fc830 */


void FUN_006fc830(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0065b870(*(undefined8 *)(param_2 + 0x80));
  *(undefined8 *)(param_2 + 0x58) = uVar1;
  thunk_FUN_03c9d277(*(undefined8 *)(param_2 + 0x58),0xfffffff0,(longlong)*(int *)(param_2 + 0x54));
  return;
}


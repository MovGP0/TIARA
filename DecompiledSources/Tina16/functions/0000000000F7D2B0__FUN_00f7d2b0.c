/* Ghidra address: 00f7d2b0 */
/* Ghidra symbol: FUN_00f7d2b0 */


void FUN_00f7d2b0(longlong param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar2 = _GetLineNo(*(undefined8 *)(param_1 + 0x10));
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  uVar1 = _GetModuleName(*(undefined8 *)(param_1 + 0x10));
  FUN_004167d0(param_1 + 0x48,uVar1);
  return;
}


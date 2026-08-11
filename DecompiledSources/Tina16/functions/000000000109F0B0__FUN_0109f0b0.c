/* Ghidra address: 0109f0b0 */
/* Ghidra symbol: FUN_0109f0b0 */


void FUN_0109f0b0(longlong param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar2 = _GetLineNo(*(undefined8 *)(param_1 + 0x9c0));
  *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x1660) + 0x3548) + 0x40) = uVar2;
  uVar1 = _GetModuleName(*(undefined8 *)(param_1 + 0x9c0));
  FUN_004167d0(*(longlong *)(*(longlong *)(param_1 + 0x1660) + 0x3548) + 0x48,uVar1);
  FUN_0109d610(param_1);
  FUN_0109df70(param_1);
  FUN_0109f070(param_1);
  FUN_0109d420(param_1);
  return;
}


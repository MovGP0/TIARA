/* Ghidra address: 01b9f0f0 */
/* Ghidra symbol: FUN_01b9f0f0 */


void FUN_01b9f0f0(longlong param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 0x708) = 0;
  uVar1 = FUN_0198d3a0(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8),1,0);
  *(undefined8 *)(param_1 + 0x700) = uVar1;
  FUN_019a57f0(uVar1,*(undefined8 *)(*(longlong *)(param_1 + 0x6e8) + 0x4a0),1,0);
  FUN_0064cf60(param_1,0x412);
  return;
}


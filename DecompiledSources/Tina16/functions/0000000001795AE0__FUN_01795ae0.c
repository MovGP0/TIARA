/* Ghidra address: 01795ae0 */
/* Ghidra symbol: FUN_01795ae0 */


void FUN_01795ae0(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00c5ef40(&PTR_FUN_00c5e088,1,param_1);
  FUN_01794b80(param_1,uVar1);
  *(undefined1 *)(*(longlong *)(param_1 + 0xd20) + 0x20) = 1;
  FUN_0082a6c0(*(undefined8 *)(param_1 + 0x700),1);
  return;
}


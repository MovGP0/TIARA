/* Ghidra address: 017a4f60 */
/* Ghidra symbol: FUN_017a4f60 */


void FUN_017a4f60(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_006e2530(*(undefined8 *)(param_1 + 0x6f0));
  FUN_006de140(uVar2);
  iVar1 = FUN_006decb0(*(undefined8 *)(*(longlong *)(param_1 + 0x6f0) + 0x550));
  *(bool *)(param_1 + 0x7b0) = iVar1 == 3;
  return;
}


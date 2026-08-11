/* Ghidra address: 008f3800 */
/* Ghidra symbol: FUN_008f3800 */


void FUN_008f3800(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = FUN_004b6da0(uVar1);
  FUN_004b6dc0(uVar1,lVar2 - *(longlong *)(param_1 + 0x28));
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}


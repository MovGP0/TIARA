/* Ghidra address: 006fa8c0 */
/* Ghidra symbol: FUN_006fa8c0 */


void FUN_006fa8c0(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x340);
  if (lVar1 != 0) {
    uVar2 = FUN_006fa830();
    FUN_006fc590(lVar1,uVar2);
  }
  return;
}


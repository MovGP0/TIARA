/* Ghidra address: 012b9630 */
/* Ghidra symbol: FUN_012b9630 */


void FUN_012b9630(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x6d0);
  iVar2 = FUN_0064d0b0(uVar1);
  FUN_00848460(uVar1,0,iVar2 - *(int *)(param_1 + 0x72c));
  return;
}


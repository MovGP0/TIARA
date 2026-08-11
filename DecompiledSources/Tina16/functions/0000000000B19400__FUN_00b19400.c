/* Ghidra address: 00b19400 */
/* Ghidra symbol: FUN_00b19400 */


void FUN_00b19400(longlong param_1,int param_2)

{
  undefined8 uVar1;
  
  if ((-1 < param_2) && (param_2 < *(int *)(*(longlong *)(param_1 + 8) + 0x10))) {
    uVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 8),param_2);
    FUN_00418590(uVar1,&DAT_00b18708);
    FUN_004ae870(*(undefined8 *)(param_1 + 8),param_2);
  }
  return;
}


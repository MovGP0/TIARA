/* Ghidra address: 00703ad0 */
/* Ghidra symbol: FUN_00703ad0 */


void FUN_00703ad0(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  FUN_006a3320(param_1);
  uVar2 = FUN_004b1870(param_1);
  (**(code **)(**(longlong **)(param_1 + 8) + 0x60))(*(longlong **)(param_1 + 8),uVar2);
  cVar1 = *(char *)(*(longlong *)(param_1 + 8) + 0x31);
  if ((cVar1 == '\x02') || (cVar1 == '\x03')) {
    FUN_006a3610();
  }
  return;
}


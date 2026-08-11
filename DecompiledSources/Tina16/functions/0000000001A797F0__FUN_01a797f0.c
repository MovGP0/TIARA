/* Ghidra address: 01a797f0 */
/* Ghidra symbol: FUN_01a797f0 */


void FUN_01a797f0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x798) + 0xf0);
  if (lVar1 != 0) {
    FUN_01abfbd0(lVar1);
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x798) + 0xf8);
  if (lVar1 != 0) {
    FUN_01abfbd0(lVar1);
  }
  FUN_01ae4310(*(undefined8 *)(param_1 + 0x798));
  return;
}


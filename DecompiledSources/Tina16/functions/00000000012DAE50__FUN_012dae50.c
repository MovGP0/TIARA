/* Ghidra address: 012dae50 */
/* Ghidra symbol: FUN_012dae50 */


void FUN_012dae50(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x80);
  if (lVar1 != 0) {
    FUN_012cd080(lVar1,*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0xa8));
  }
  return;
}


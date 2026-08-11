/* Ghidra address: 0131c5c0 */
/* Ghidra symbol: FUN_0131c5c0 */


void FUN_0131c5c0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x90);
  if (lVar1 != 0) {
    FUN_012cce60(lVar1,*(undefined8 *)(param_1 + 0x58),*(undefined1 *)(param_1 + 0xa0));
  }
  return;
}


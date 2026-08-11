/* Ghidra address: 012dae20 */
/* Ghidra symbol: FUN_012dae20 */


void FUN_012dae20(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x80);
  if (lVar1 != 0) {
    FUN_012cce60(lVar1,*(undefined8 *)(param_1 + 0x58),*(undefined1 *)(param_1 + 0xa0));
  }
  return;
}


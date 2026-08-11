/* Ghidra address: 0080de60 */
/* Ghidra symbol: FUN_0080de60 */


void FUN_0080de60(longlong param_1)

{
  longlong lVar1;
  undefined1 local_20 [16];
  
  thunk_FUN_03cc0d62(local_20);
  lVar1 = FUN_0064acf0(local_20,1);
  if (*(longlong *)(param_1 + 0xb0) != lVar1) {
    *(longlong *)(param_1 + 0xb0) = lVar1;
  }
  return;
}


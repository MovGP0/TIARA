/* Ghidra address: 00787a30 */
/* Ghidra symbol: FUN_00787a30 */


undefined8 FUN_00787a30(longlong param_1)

{
  longlong lVar1;
  
  if ((*(longlong *)(param_1 + 0x18) != 0) &&
     (lVar1 = thunk_FUN_041da4fa(), lVar1 == *(longlong *)(param_1 + 0x18))) {
    return 1;
  }
  return 0;
}


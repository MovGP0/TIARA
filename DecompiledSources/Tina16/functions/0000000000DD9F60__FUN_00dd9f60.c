/* Ghidra address: 00dd9f60 */
/* Ghidra symbol: FUN_00dd9f60 */


longlong FUN_00dd9f60(longlong param_1)

{
  longlong lVar1;
  int local_c;
  
  lVar1 = 0;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x48) + 0x20))(*(longlong **)(param_1 + 0x48),&local_c);
    lVar1 = (longlong)local_c;
  }
  return lVar1;
}


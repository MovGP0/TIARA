/* Ghidra address: 006ef6e0 */
/* Ghidra symbol: FUN_006ef6e0 */


ulonglong FUN_006ef6e0(longlong param_1)

{
  ulonglong uVar1;
  
  if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 0x510) == '\0') {
    uVar1 = FUN_006efd60(*(longlong *)(param_1 + 8),param_1);
  }
  else {
    uVar1 = (ulonglong)*(uint *)(param_1 + 0x20);
  }
  return uVar1;
}


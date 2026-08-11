/* Ghidra address: 01bd6440 */
/* Ghidra symbol: FUN_01bd6440 */


ulonglong FUN_01bd6440(longlong param_1)

{
  ulonglong uVar1;
  
  uVar1 = FUN_01bd5610(param_1);
  if (*(longlong *)(param_1 + 0x590) != 0) {
    uVar1 = (ulonglong)(uint)((int)uVar1 + *(int *)(*(longlong *)(param_1 + 0x590) + 0x98));
  }
  return uVar1;
}


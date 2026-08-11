/* Ghidra address: 008bb460 */
/* Ghidra symbol: FUN_008bb460 */


longlong FUN_008bb460(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = 0;
  if (*(longlong *)(param_1 + 8) != 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + -8);
  }
  if (*(int *)(param_1 + 0x10) == lVar1) {
    FUN_005950e0(param_1 + 8,*(int *)(param_1 + 0x10) + 1);
  }
  return param_1;
}


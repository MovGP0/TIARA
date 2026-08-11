/* Ghidra address: 0041c9b0 */
/* Ghidra symbol: FUN_0041c9b0 */


longlong FUN_0041c9b0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int local_1c;
  
  lVar1 = FUN_0041c880(param_1,param_2,&local_1c);
  if ((lVar1 != 0) && (local_1c < *(int *)(param_1 + 8))) {
    if (local_1c < *(int *)(param_1 + 8) + -1) {
      FUN_00409a70(*(longlong *)(param_1 + 0x10) + (longlong)(local_1c + 1) * 8,
                   *(longlong *)(param_1 + 0x10) + (longlong)local_1c * 8,
                   (longlong)(((*(int *)(param_1 + 8) - local_1c) + -1) * 8));
    }
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
  }
  return lVar1;
}


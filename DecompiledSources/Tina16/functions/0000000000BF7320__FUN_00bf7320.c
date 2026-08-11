/* Ghidra address: 00bf7320 */
/* Ghidra symbol: FUN_00bf7320 */


int FUN_00bf7320(longlong param_1,int param_2)

{
  return *(int *)(*(longlong *)(param_1 + 0x130) + 0x530) +
         (param_2 + -1) * *(int *)(*(longlong *)(param_1 + 0x130) + 0x4d4);
}


/* Ghidra address: 010f2040 */
/* Ghidra symbol: FUN_010f2040 */


void FUN_010f2040(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0x6d0) + 0x268))(*(longlong **)(param_1 + 0x6d0),0);
  *(int *)(param_1 + 0x6f0) =
       *(int *)(param_1 + 0x6f4) * *(int *)(*(longlong *)(param_1 + 0x6e8) + 0x158);
  return;
}


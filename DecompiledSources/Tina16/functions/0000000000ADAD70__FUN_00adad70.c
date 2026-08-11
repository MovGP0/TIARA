/* Ghidra address: 00adad70 */
/* Ghidra symbol: FUN_00adad70 */


void FUN_00adad70(longlong param_1)

{
  longlong lVar1;
  
  **(undefined2 **)(param_1 + 0x128) = *(undefined2 *)(*(longlong *)(param_1 + 0x120) + 0x20);
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x120) + 0x30);
  **(int **)(param_1 + 0x130) = *(int *)(*(longlong *)(lVar1 + 0x28) + 8) - *(int *)(lVar1 + 8);
  **(undefined4 **)(param_1 + 0x138) =
       *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x120) + 0xe8) + 0x28);
  return;
}


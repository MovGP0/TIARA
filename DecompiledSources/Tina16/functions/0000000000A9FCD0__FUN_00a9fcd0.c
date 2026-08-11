/* Ghidra address: 00a9fcd0 */
/* Ghidra symbol: FUN_00a9fcd0 */


void FUN_00a9fcd0(longlong param_1)

{
  *(undefined4 *)(*(longlong *)(param_1 + 0x70) + 0x88) = 0;
  *(undefined4 *)(*(longlong *)(param_1 + 0x70) + 0x8c) = 0;
  *(undefined4 *)(*(longlong *)(param_1 + 0x70) + 0x80) = 0;
  *(undefined4 *)(*(longlong *)(param_1 + 0x70) + 0x84) = 0;
  **(undefined4 **)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(*(longlong *)(param_1 + 0x70) + 0x90) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)(*(longlong *)(param_1 + 0x70) + 0x94) =
       *(undefined4 *)(*(longlong *)(param_1 + 0x70) + 0x78);
  *(int *)(*(longlong *)(param_1 + 0x70) + 0x98) =
       *(int *)(*(longlong *)(param_1 + 0x70) + 0x90) +
       *(int *)(*(longlong *)(param_1 + 0x70) + 0x514);
  *(int *)(*(longlong *)(param_1 + 0x70) + 0x9c) =
       *(int *)(*(longlong *)(param_1 + 0x70) + 0x94) +
       *(int *)(*(longlong *)(param_1 + 0x70) + 0x88);
  return;
}


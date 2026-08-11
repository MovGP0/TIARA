/* Ghidra address: 00c210c0 */
/* Ghidra symbol: FUN_00c210c0 */


void FUN_00c210c0(longlong param_1)

{
  FUN_00c1e2a0(param_1);
  FUN_0040d200(*(undefined8 *)(param_1 + 0x818),(longlong)((*(int *)(param_1 + 0x18) + 4) * 4),0);
  FUN_0040d200(*(undefined8 *)(param_1 + 0x820),(longlong)((*(int *)(param_1 + 0x18) + 4) * 4),0);
  FUN_0040d200(*(undefined8 *)(param_1 + 0x828),(longlong)((*(int *)(param_1 + 0x18) + 4) * 4),0);
  FUN_0040d200(*(undefined8 *)(param_1 + 0x830),(longlong)((*(int *)(param_1 + 0x18) + 4) * 4),0);
  FUN_0040d200(*(undefined8 *)(param_1 + 0x838),(longlong)((*(int *)(param_1 + 0x18) + 4) * 4),0);
  FUN_0040d200(*(undefined8 *)(param_1 + 0x840),(longlong)((*(int *)(param_1 + 0x18) + 4) * 4),0);
  *(int *)(param_1 + 0x878) = *(int *)(param_1 + 8) * 2;
  *(longlong *)(param_1 + 0x848) = *(longlong *)(param_1 + 0x818) + 8;
  *(longlong *)(param_1 + 0x850) = *(longlong *)(param_1 + 0x820) + 8;
  *(longlong *)(param_1 + 0x858) = *(longlong *)(param_1 + 0x828) + 8;
  *(longlong *)(param_1 + 0x860) = *(longlong *)(param_1 + 0x830) + 8;
  *(longlong *)(param_1 + 0x868) = *(longlong *)(param_1 + 0x838) + 8;
  *(longlong *)(param_1 + 0x870) = *(longlong *)(param_1 + 0x840) + 8;
  return;
}


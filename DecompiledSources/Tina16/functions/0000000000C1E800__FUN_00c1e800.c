/* Ghidra address: 00c1e800 */
/* Ghidra symbol: FUN_00c1e800 */


void FUN_00c1e800(longlong param_1)

{
  **(undefined4 **)(param_1 + 0x830) = *(undefined4 *)(param_1 + 0x860);
  **(undefined4 **)(param_1 + 0x838) = *(undefined4 *)(param_1 + 0x864);
  **(undefined4 **)(param_1 + 0x840) = *(undefined4 *)(param_1 + 0x868);
  *(undefined4 *)(param_1 + 0x848) = 0;
  *(undefined4 *)(param_1 + 0x84c) = 0;
  *(undefined4 *)(param_1 + 0x850) = 0;
  *(undefined4 *)(param_1 + 0x854) = *(undefined4 *)(param_1 + 0x84c);
  *(undefined4 *)(param_1 + 0x858) = *(undefined4 *)(param_1 + 0x84c);
  *(undefined4 *)(param_1 + 0x85c) = *(undefined4 *)(param_1 + 0x84c);
  *(undefined4 *)(param_1 + 0x860) = *(undefined4 *)(param_1 + 0x84c);
  *(undefined4 *)(param_1 + 0x864) = *(undefined4 *)(param_1 + 0x84c);
  *(undefined4 *)(param_1 + 0x868) = *(undefined4 *)(param_1 + 0x84c);
  FUN_00c1e270(param_1);
  if (*(int *)(param_1 + 8) == 1) {
    *(undefined8 *)(param_1 + 0x830) = *(undefined8 *)(param_1 + 0x818);
    *(undefined8 *)(param_1 + 0x838) = *(undefined8 *)(param_1 + 0x820);
    *(undefined8 *)(param_1 + 0x840) = *(undefined8 *)(param_1 + 0x828);
  }
  else {
    *(longlong *)(param_1 + 0x830) =
         *(longlong *)(param_1 + 0x818) + (longlong)(*(int *)(param_1 + 0x18) + 1) * 4;
    *(longlong *)(param_1 + 0x838) =
         *(longlong *)(param_1 + 0x820) + (longlong)(*(int *)(param_1 + 0x18) + 1) * 4;
    *(longlong *)(param_1 + 0x840) =
         *(longlong *)(param_1 + 0x828) + (longlong)(*(int *)(param_1 + 0x18) + 1) * 4;
  }
  return;
}


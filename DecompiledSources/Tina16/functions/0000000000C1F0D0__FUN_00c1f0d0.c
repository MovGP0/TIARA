/* Ghidra address: 00c1f0d0 */
/* Ghidra symbol: FUN_00c1f0d0 */


void FUN_00c1f0d0(longlong param_1)

{
  undefined8 uVar1;
  
  FUN_0040d200(*(undefined8 *)(param_1 + 0x818),(longlong)((*(int *)(param_1 + 0x18) + 4) * 4),0);
  FUN_0040d200(*(undefined8 *)(param_1 + 0x820),(longlong)((*(int *)(param_1 + 0x18) + 4) * 4),0);
  FUN_0040d200(*(undefined8 *)(param_1 + 0x828),(longlong)((*(int *)(param_1 + 0x18) + 4) * 4),0);
  uVar1 = *(undefined8 *)(param_1 + 0x818);
  *(undefined8 *)(param_1 + 0x818) = *(undefined8 *)(param_1 + 0x830);
  *(undefined8 *)(param_1 + 0x830) = *(undefined8 *)(param_1 + 0x848);
  *(undefined8 *)(param_1 + 0x848) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x820);
  *(undefined8 *)(param_1 + 0x820) = *(undefined8 *)(param_1 + 0x838);
  *(undefined8 *)(param_1 + 0x838) = *(undefined8 *)(param_1 + 0x850);
  *(undefined8 *)(param_1 + 0x850) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x828);
  *(undefined8 *)(param_1 + 0x828) = *(undefined8 *)(param_1 + 0x840);
  *(undefined8 *)(param_1 + 0x840) = *(undefined8 *)(param_1 + 0x858);
  *(undefined8 *)(param_1 + 0x858) = uVar1;
  FUN_00c1e270(param_1);
  *(int *)(param_1 + 0x8a8) = *(int *)(param_1 + 8) * 2;
  if (*(int *)(param_1 + 8) == 1) {
    *(longlong *)(param_1 + 0x860) = *(longlong *)(param_1 + 0x818) + 8;
    *(longlong *)(param_1 + 0x868) = *(longlong *)(param_1 + 0x820) + 8;
    *(longlong *)(param_1 + 0x870) = *(longlong *)(param_1 + 0x828) + 8;
    *(longlong *)(param_1 + 0x878) = *(longlong *)(param_1 + 0x830) + 8;
    *(longlong *)(param_1 + 0x880) = *(longlong *)(param_1 + 0x838) + 8;
    *(longlong *)(param_1 + 0x888) = *(longlong *)(param_1 + 0x840) + 8;
    *(longlong *)(param_1 + 0x890) = *(longlong *)(param_1 + 0x848) + 8;
    *(longlong *)(param_1 + 0x898) = *(longlong *)(param_1 + 0x850) + 8;
    *(longlong *)(param_1 + 0x8a0) = *(longlong *)(param_1 + 0x858) + 8;
  }
  else {
    *(longlong *)(param_1 + 0x860) =
         *(longlong *)(param_1 + 0x818) + (longlong)(*(int *)(param_1 + 0x18) + 1) * 4;
    *(longlong *)(param_1 + 0x868) =
         *(longlong *)(param_1 + 0x820) + (longlong)(*(int *)(param_1 + 0x18) + 1) * 4;
    *(longlong *)(param_1 + 0x870) =
         *(longlong *)(param_1 + 0x828) + (longlong)(*(int *)(param_1 + 0x18) + 1) * 4;
    *(longlong *)(param_1 + 0x878) =
         *(longlong *)(param_1 + 0x830) + (longlong)(*(int *)(param_1 + 0x18) + 1) * 4;
    *(longlong *)(param_1 + 0x880) =
         *(longlong *)(param_1 + 0x838) + (longlong)(*(int *)(param_1 + 0x18) + 1) * 4;
    *(longlong *)(param_1 + 0x888) =
         *(longlong *)(param_1 + 0x840) + (longlong)(*(int *)(param_1 + 0x18) + 1) * 4;
    *(longlong *)(param_1 + 0x890) =
         *(longlong *)(param_1 + 0x848) + (longlong)(*(int *)(param_1 + 0x18) + 1) * 4;
    *(longlong *)(param_1 + 0x898) =
         *(longlong *)(param_1 + 0x850) + (longlong)(*(int *)(param_1 + 0x18) + 1) * 4;
    *(longlong *)(param_1 + 0x8a0) =
         *(longlong *)(param_1 + 0x858) + (longlong)(*(int *)(param_1 + 0x18) + 1) * 4;
  }
  return;
}


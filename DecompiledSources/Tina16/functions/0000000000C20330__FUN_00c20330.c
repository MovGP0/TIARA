/* Ghidra address: 00c20330 */
/* Ghidra symbol: FUN_00c20330 */


void FUN_00c20330(longlong param_1)

{
  undefined8 uVar1;
  
  FUN_0040d200(*(undefined8 *)(param_1 + 0x818),(longlong)((*(int *)(param_1 + 0x18) + 6) * 4),0);
  FUN_0040d200(*(undefined8 *)(param_1 + 0x820),(longlong)((*(int *)(param_1 + 0x18) + 6) * 4),0);
  FUN_0040d200(*(undefined8 *)(param_1 + 0x828),(longlong)((*(int *)(param_1 + 0x18) + 6) * 4),0);
  uVar1 = *(undefined8 *)(param_1 + 0x818);
  *(undefined8 *)(param_1 + 0x818) = *(undefined8 *)(param_1 + 0x830);
  *(undefined8 *)(param_1 + 0x830) = *(undefined8 *)(param_1 + 0x848);
  *(undefined8 *)(param_1 + 0x848) = *(undefined8 *)(param_1 + 0x860);
  *(undefined8 *)(param_1 + 0x860) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x820);
  *(undefined8 *)(param_1 + 0x820) = *(undefined8 *)(param_1 + 0x838);
  *(undefined8 *)(param_1 + 0x838) = *(undefined8 *)(param_1 + 0x850);
  *(undefined8 *)(param_1 + 0x850) = *(undefined8 *)(param_1 + 0x868);
  *(undefined8 *)(param_1 + 0x868) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x828);
  *(undefined8 *)(param_1 + 0x828) = *(undefined8 *)(param_1 + 0x840);
  *(undefined8 *)(param_1 + 0x840) = *(undefined8 *)(param_1 + 0x858);
  *(undefined8 *)(param_1 + 0x858) = *(undefined8 *)(param_1 + 0x870);
  *(undefined8 *)(param_1 + 0x870) = uVar1;
  FUN_00c1e270(param_1);
  *(int *)(param_1 + 0x8d8) = *(int *)(param_1 + 8) * 2;
  *(int *)(param_1 + 0x8dc) = *(int *)(param_1 + 8) * 3;
  if (*(int *)(param_1 + 8) == 1) {
    *(longlong *)(param_1 + 0x878) = *(longlong *)(param_1 + 0x818) + 0xc;
    *(longlong *)(param_1 + 0x880) = *(longlong *)(param_1 + 0x820) + 0xc;
    *(longlong *)(param_1 + 0x888) = *(longlong *)(param_1 + 0x828) + 0xc;
    *(longlong *)(param_1 + 0x890) = *(longlong *)(param_1 + 0x830) + 0xc;
    *(longlong *)(param_1 + 0x898) = *(longlong *)(param_1 + 0x838) + 0xc;
    *(longlong *)(param_1 + 0x8a0) = *(longlong *)(param_1 + 0x840) + 0xc;
    *(longlong *)(param_1 + 0x8a8) = *(longlong *)(param_1 + 0x848) + 0xc;
    *(longlong *)(param_1 + 0x8b0) = *(longlong *)(param_1 + 0x850) + 0xc;
    *(longlong *)(param_1 + 0x8b8) = *(longlong *)(param_1 + 0x858) + 0xc;
    *(longlong *)(param_1 + 0x8c0) = *(longlong *)(param_1 + 0x860) + 0xc;
    *(longlong *)(param_1 + 0x8c8) = *(longlong *)(param_1 + 0x868) + 0xc;
    *(longlong *)(param_1 + 0x8d0) = *(longlong *)(param_1 + 0x870) + 0xc;
  }
  else {
    *(longlong *)(param_1 + 0x878) =
         *(longlong *)(param_1 + 0x818) + (longlong)(*(int *)(param_1 + 0x18) + 2) * 4;
    *(longlong *)(param_1 + 0x880) =
         *(longlong *)(param_1 + 0x820) + (longlong)(*(int *)(param_1 + 0x18) + 2) * 4;
    *(longlong *)(param_1 + 0x888) =
         *(longlong *)(param_1 + 0x828) + (longlong)(*(int *)(param_1 + 0x18) + 2) * 4;
    *(longlong *)(param_1 + 0x890) =
         *(longlong *)(param_1 + 0x830) + (longlong)(*(int *)(param_1 + 0x18) + 2) * 4;
    *(longlong *)(param_1 + 0x898) =
         *(longlong *)(param_1 + 0x838) + (longlong)(*(int *)(param_1 + 0x18) + 2) * 4;
    *(longlong *)(param_1 + 0x8a0) =
         *(longlong *)(param_1 + 0x840) + (longlong)(*(int *)(param_1 + 0x18) + 2) * 4;
    *(longlong *)(param_1 + 0x8a8) =
         *(longlong *)(param_1 + 0x848) + (longlong)(*(int *)(param_1 + 0x18) + 2) * 4;
    *(longlong *)(param_1 + 0x8b0) =
         *(longlong *)(param_1 + 0x850) + (longlong)(*(int *)(param_1 + 0x18) + 2) * 4;
    *(longlong *)(param_1 + 0x8b8) =
         *(longlong *)(param_1 + 0x858) + (longlong)(*(int *)(param_1 + 0x18) + 2) * 4;
    *(longlong *)(param_1 + 0x8c0) =
         *(longlong *)(param_1 + 0x848) + (longlong)(*(int *)(param_1 + 0x18) + 2) * 4;
    *(longlong *)(param_1 + 0x8c8) =
         *(longlong *)(param_1 + 0x850) + (longlong)(*(int *)(param_1 + 0x18) + 2) * 4;
    *(longlong *)(param_1 + 0x8d0) =
         *(longlong *)(param_1 + 0x858) + (longlong)(*(int *)(param_1 + 0x18) + 2) * 4;
  }
  return;
}


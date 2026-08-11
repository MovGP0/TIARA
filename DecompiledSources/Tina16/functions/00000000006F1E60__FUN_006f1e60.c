/* Ghidra address: 006f1e60 */
/* Ghidra symbol: FUN_006f1e60 */


void FUN_006f1e60(longlong param_1)

{
  longlong *plVar1;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined8 local_20;
  
  local_30 = auStack_58;
  if (*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x518) != 0) {
    FUN_004b1f10(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x500));
    local_20 = FUN_004baeb0(&PTR_FUN_0047f878,1,
                            *(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x518),0x400);
    FUN_004c23c0(local_20);
    FUN_004bf530(local_20,*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x500));
    FUN_00410f20(local_20);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x60) + 0x518);
    (**(code **)(*plVar1 + -0x20))(plVar1,1);
    *(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x518) = 0;
  }
  return;
}


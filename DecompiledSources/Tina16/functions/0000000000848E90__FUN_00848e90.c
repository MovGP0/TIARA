/* Ghidra address: 00848e90 */
/* Ghidra symbol: FUN_00848e90 */


void FUN_00848e90(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  
  *(undefined4 *)(*(longlong *)(param_1 + 0x50) + 0x518) =
       *(undefined4 *)(*(longlong *)(param_1 + 0x50) + 0x4a8);
  *(undefined4 *)(*(longlong *)(param_1 + 0x50) + 0x51c) =
       *(undefined4 *)(*(longlong *)(param_1 + 0x50) + 0x4ac);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x50) + 0x510);
  (**(code **)(*plVar1 + 0x2d8))(plVar1);
  iVar2 = FUN_00835810(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x510));
  if (iVar2 == -1) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x50) + 0x4a1) = 0;
  }
  else {
    *(undefined1 *)(*(longlong *)(param_1 + 0x50) + 0x4a1) = 1;
  }
  FUN_0064e030(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x510),
               *(undefined4 *)(*(longlong *)(param_1 + 0x50) + 200));
  FUN_0064df10(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x510),
               *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0xb8));
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x50) + 0x510);
  (**(code **)(*plVar1 + 0x148))(plVar1,*(undefined1 *)(*(longlong *)(param_1 + 0x50) + 0x2c8));
  FUN_00680ad0(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x510));
  return;
}


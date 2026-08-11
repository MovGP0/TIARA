/* Ghidra address: 018995d0 */
/* Ghidra symbol: FUN_018995d0 */


void FUN_018995d0(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  *(undefined4 *)(param_1 + 0x4d8) = param_2;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x4c8) + 0x4c8);
  (**(code **)(*plVar1 + 0x70))(plVar1,0);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x4c8) + 0x4c8);
  (**(code **)(*plVar1 + 0x88))(plVar1,0);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x4b8) + 0x4c0);
  if (lVar2 != 0) {
    FUN_0180dfe0(lVar2,*(undefined8 *)(*(longlong *)(param_1 + 0x4c8) + 0x4c8),
                 *(undefined4 *)(param_1 + 0x4d8),
                 *(undefined4 *)(*(longlong *)(param_1 + 0x4c8) + 0x4e8));
  }
  return;
}


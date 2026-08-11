/* Ghidra address: 018996e0 */
/* Ghidra symbol: FUN_018996e0 */


void FUN_018996e0(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  *(undefined4 *)(param_1 + 0x4dc) = param_2;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x4c8) + 0x4d0);
  (**(code **)(*plVar1 + 0x70))(plVar1,0);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x4c8) + 0x4d0);
  (**(code **)(*plVar1 + 0x88))(plVar1,0);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x4b8) + 0x4c0);
  if (lVar2 != 0) {
    FUN_0180dfe0(lVar2,*(undefined8 *)(*(longlong *)(param_1 + 0x4c8) + 0x4d0),
                 *(undefined4 *)(param_1 + 0x4dc),
                 *(undefined4 *)(*(longlong *)(param_1 + 0x4c8) + 0x4e8));
  }
  return;
}


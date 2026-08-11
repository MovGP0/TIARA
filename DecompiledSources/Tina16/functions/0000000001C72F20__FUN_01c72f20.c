/* Ghidra address: 01c72f20 */
/* Ghidra symbol: FUN_01c72f20 */


void FUN_01c72f20(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x90) + 0x700) + 0x490);
  FUN_005fdab0(plVar1[0x10]);
  (**(code **)(*plVar1 + 0xa8))(plVar1,param_1 + 0x50);
  if (*(int *)(param_1 + 0xa0) !=
      *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x90) + 0x700) + 0x4a4) + -1) {
    FUN_005fd4e0(plVar1[0xf],0);
    (**(code **)(*plVar1 + 200))
              (plVar1,*(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x54));
    (**(code **)(*plVar1 + 0xc0))
              (plVar1,*(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x5c));
  }
  return;
}


/* Ghidra address: 01085cd0 */
/* Ghidra symbol: FUN_01085cd0 */


void FUN_01085cd0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0xa78);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x180))(plVar1);
    FUN_0108fa10(param_1,*(undefined4 *)(param_1 + 0x4c94));
    FUN_00bfcc50(*(longlong *)(param_1 + 0xa78),
                 *(int *)(param_1 + 0x4c94) - *(int *)(*(longlong *)(param_1 + 0xa78) + 0x508) / 2);
  }
  return;
}


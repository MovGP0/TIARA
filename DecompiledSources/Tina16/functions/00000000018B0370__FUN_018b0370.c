/* Ghidra address: 018b0370 */
/* Ghidra symbol: FUN_018b0370 */


void FUN_018b0370(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x60) + 0x838);
  plVar1 = (longlong *)
           (**(code **)(*plVar1 + 0x30))
                     (plVar1,*(undefined4 *)(*(longlong *)(param_2 + 0x68) + 0x18));
  (**(code **)(*plVar1 + 0x100))(plVar1,*(undefined8 *)(param_2 + 0x38));
  FUN_00410f20(*(undefined8 *)(param_2 + 0x38));
  return;
}


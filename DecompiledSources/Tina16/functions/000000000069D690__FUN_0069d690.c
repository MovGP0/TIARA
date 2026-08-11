/* Ghidra address: 0069d690 */
/* Ghidra symbol: FUN_0069d690 */


void FUN_0069d690(longlong param_1)

{
  longlong *plVar1;
  
  FUN_0069d4b0(param_1,1);
  thunk_FUN_0418a669(*(undefined8 *)(param_1 + 0x40));
  thunk_FUN_041a4bab(*(undefined8 *)(param_1 + 0x40));
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  plVar1 = (longlong *)FUN_0069db00(param_1);
  (**(code **)(*plVar1 + 0x100))(plVar1);
  return;
}


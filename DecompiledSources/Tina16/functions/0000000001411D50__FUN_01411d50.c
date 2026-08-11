/* Ghidra address: 01411d50 */
/* Ghidra symbol: FUN_01411d50 */


void FUN_01411d50(longlong param_1,undefined4 param_2)

{
  FUN_00b0b020(*(undefined8 *)(param_1 + 0x6d0),0);
  FUN_0140b070(param_2,*(undefined4 *)(param_1 + 0x820),param_1 + 0x7e8,
               *(undefined8 *)(param_1 + 0x7b8),*(undefined4 *)(param_1 + 0x7c8),
               *(int *)(param_1 + 0x7b0) + -1,*(undefined4 *)(param_1 + 0x828),1);
  FUN_01410d70(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x6d0) + 0x2a8))(*(longlong **)(param_1 + 0x6d0),1,1);
  return;
}


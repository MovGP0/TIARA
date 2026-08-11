/* Ghidra address: 0140e970 */
/* Ghidra symbol: FUN_0140e970 */


void FUN_0140e970(longlong param_1,undefined4 param_2)

{
  FUN_00b0b020(*(undefined8 *)(param_1 + 0x6d0),0);
  FUN_0140b070(param_2,*(undefined4 *)(param_1 + 0x7e8),param_1 + 0x7b0,
               *(undefined8 *)(param_1 + 0x790),*(undefined2 *)(param_1 + 0x78a),
               *(ushort *)(param_1 + 0x788) - 1,*(undefined2 *)(param_1 + 0x7ee),0);
  FUN_0140e330(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x6d0) + 0x2a8))(*(longlong **)(param_1 + 0x6d0),1,1);
  return;
}


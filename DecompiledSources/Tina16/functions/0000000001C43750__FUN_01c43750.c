/* Ghidra address: 01c43750 */
/* Ghidra symbol: FUN_01c43750 */


void FUN_01c43750(longlong param_1,longlong param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x720) + 0x128))(*(longlong **)(param_1 + 0x720),1);
  (**(code **)(**(longlong **)(param_1 + 0x730) + 0x128))(*(longlong **)(param_1 + 0x730),1);
  (**(code **)(**(longlong **)(param_1 + 0x890) + 0x128))(*(longlong **)(param_1 + 0x890),1);
  if (param_2 != 0) {
    FUN_01c3dc60(param_1,param_2);
  }
  return;
}


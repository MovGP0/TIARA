/* Ghidra address: 0060dc90 */
/* Ghidra symbol: FUN_0060dc90 */


void FUN_0060dc90(longlong param_1,longlong *param_2,undefined8 param_3)

{
  FUN_0060e650(param_1);
  if (*(longlong *)(param_1 + 0x50) != 0) {
    (**(code **)(*param_2 + 0x110))(param_2,param_3,*(longlong *)(param_1 + 0x50));
  }
  return;
}


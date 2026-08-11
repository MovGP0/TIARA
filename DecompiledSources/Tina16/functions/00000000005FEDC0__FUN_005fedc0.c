/* Ghidra address: 005fedc0 */
/* Ghidra symbol: FUN_005fedc0 */


void FUN_005fedc0(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x50))(param_1);
  (**(code **)(*param_1 + 0x58))(param_1,9);
  thunk_FUN_03b3ef59(param_1[0xc],param_2);
  (**(code **)(*param_1 + 0x48))(param_1);
  return;
}


/* Ghidra address: 018995b0 */
/* Ghidra symbol: FUN_018995b0 */


void FUN_018995b0(longlong *param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x9a) = param_2;
  (**(code **)(*param_1 + 0x280))(param_1);
  return;
}


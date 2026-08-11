/* Ghidra address: 007438e0 */
/* Ghidra symbol: FUN_007438e0 */


void FUN_007438e0(longlong *param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x94) = param_2;
  FUN_00654450(param_1);
  (**(code **)(*param_1 + 0x180))(param_1);
  return;
}


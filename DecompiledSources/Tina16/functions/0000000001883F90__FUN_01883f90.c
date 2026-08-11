/* Ghidra address: 01883f90 */
/* Ghidra symbol: FUN_01883f90 */


void FUN_01883f90(longlong *param_1,undefined2 param_2)

{
  *(undefined2 *)(param_1 + 0x7c) = param_2;
  (**(code **)(*param_1 + 0xf0))(param_1,0);
  FUN_01883d10(param_1);
  return;
}


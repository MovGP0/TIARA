/* Ghidra address: 010e4480 */
/* Ghidra symbol: FUN_010e4480 */


void FUN_010e4480(longlong param_1,undefined2 param_2)

{
  code *local_28;
  longlong local_20;
  
  local_28 = FUN_010e44e0;
  local_20 = param_1;
  FUN_00f834f0(&local_28);
  *(undefined1 *)(param_1 + 0x888) = 1;
  local_28 = FUN_010e44e0;
  local_20 = param_1;
  FUN_00f833f0(&local_28,param_2);
  return;
}


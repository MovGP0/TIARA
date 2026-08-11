/* Ghidra address: 018845f0 */
/* Ghidra symbol: FUN_018845f0 */


void FUN_018845f0(longlong *param_1,undefined2 param_2)

{
  *(undefined2 *)(param_1 + 0x5b) = param_2;
  (**(code **)(*param_1 + 0xf0))(param_1,0);
  return;
}


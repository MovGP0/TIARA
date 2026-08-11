/* Ghidra address: 017bd0f0 */
/* Ghidra symbol: FUN_017bd0f0 */


void FUN_017bd0f0(longlong param_1,longlong param_2)

{
  FUN_017be010(param_1,param_2);
  *(undefined2 *)(param_2 + 0x2d8) = *(undefined2 *)(param_1 + 0x2d8);
  *(undefined4 *)(param_2 + 0xb8) = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)(param_2 + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  return;
}


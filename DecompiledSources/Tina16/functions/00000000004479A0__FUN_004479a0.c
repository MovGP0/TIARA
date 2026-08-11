/* Ghidra address: 004479a0 */
/* Ghidra symbol: FUN_004479a0 */


void FUN_004479a0(longlong param_1)

{
  *(undefined2 *)(param_1 + 0x3e) = **(undefined2 **)(param_1 + 0x70);
  *(longlong *)(param_1 + 0x70) = *(longlong *)(param_1 + 0x70) + 2;
  return;
}


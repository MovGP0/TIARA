/* Ghidra address: 010e2bb0 */
/* Ghidra symbol: FUN_010e2bb0 */


void FUN_010e2bb0(longlong *param_1)

{
  if (param_1[0xf8] != 0) {
    FUN_0082a6c0(param_1[0xf8],1);
  }
  (**(code **)(*param_1 + 0x3d8))(param_1,param_1);
  return;
}


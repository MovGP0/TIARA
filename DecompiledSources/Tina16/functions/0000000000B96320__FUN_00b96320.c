/* Ghidra address: 00b96320 */
/* Ghidra symbol: FUN_00b96320 */


void FUN_00b96320(longlong *param_1,longlong param_2)

{
  FUN_007fbb10(param_1,param_2);
  *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) | 0x28;
  (**(code **)(*param_1 + 0x148))(param_1,0);
  FUN_00668000(param_1[0x26],0);
  FUN_00668090(param_1[0x26],0);
  return;
}


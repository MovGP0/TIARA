/* Ghidra address: 0113c5c0 */
/* Ghidra symbol: FUN_0113c5c0 */


void FUN_0113c5c0(longlong *param_1)

{
  if (*(char *)(param_1[0x142] + 0x148) != '\0') {
    FUN_0082a6c0(param_1[0xf8],1);
    (**(code **)(*param_1 + 0x3d8))(param_1,param_1);
    FUN_0082a6c0(param_1[0xf7],1);
    (**(code **)(*param_1 + 0x3e0))(param_1,param_1);
  }
  return;
}


/* Ghidra address: 0113dfb0 */
/* Ghidra symbol: FUN_0113dfb0 */


undefined8 FUN_0113dfb0(longlong *param_1)

{
  if (*(char *)(param_1[0x142] + 0x148) != '\0') {
    if (param_1[0xf8] != 0) {
      FUN_0082a6c0(param_1[0xf8],1);
    }
    (**(code **)(*param_1 + 0x3d8))(param_1,param_1);
  }
  return CONCAT71((int7)((ulonglong)param_1[0x142] >> 8),*(char *)(param_1[0x142] + 0x148) == '\0');
}


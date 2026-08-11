/* Ghidra address: 01a97c80 */
/* Ghidra symbol: FUN_01a97c80 */


longlong FUN_01a97c80(longlong param_1)

{
  FUN_00410f20(*(undefined8 *)(param_1 + 0x1a8));
  if (*(longlong *)(param_1 + 0x148) != 0) {
    FUN_01a9a6f0(param_1,*(longlong *)(param_1 + 0x148),*(undefined8 *)(param_1 + 0x98));
    FUN_01a9a6f0(param_1,*(undefined8 *)(param_1 + 0x148),*(undefined8 *)(param_1 + 0x118));
    FUN_01a9a6f0(param_1,*(undefined8 *)(param_1 + 0x148),*(undefined8 *)(param_1 + 0x120));
  }
  FUN_00b94db0(param_1);
  return param_1;
}


/* Ghidra address: 00f70fb0 */
/* Ghidra symbol: FUN_00f70fb0 */


void FUN_00f70fb0(longlong param_1,undefined8 param_2)

{
  FUN_00f6f9c0(param_1,param_2);
  FUN_004b89e0(param_2,param_1 + 0x120,4);
  FUN_004b89e0(param_2,param_1 + 0x124,1);
  FUN_00f608e0(param_2,*(undefined8 *)(param_1 + 0x110));
  FUN_00f608e0(param_2,*(undefined8 *)(param_1 + 0x118));
  FUN_004b89e0(param_2,param_1 + 0x126,1);
  if (*(char *)(param_1 + 0x30) == '\x01') {
    FUN_004b89e0(param_2,param_1 + 0x125,1);
  }
  return;
}


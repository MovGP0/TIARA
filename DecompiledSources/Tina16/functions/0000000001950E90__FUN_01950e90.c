/* Ghidra address: 01950e90 */
/* Ghidra symbol: FUN_01950e90 */


void FUN_01950e90(longlong param_1,char param_2)

{
  if (param_2 == '\0') {
    *(byte *)(param_1 + 0xd1) = *(byte *)(param_1 + 0xd1) & 0xfd;
  }
  else {
    *(byte *)(param_1 + 0xd1) = *(byte *)(param_1 + 0xd1) | 2;
  }
  return;
}


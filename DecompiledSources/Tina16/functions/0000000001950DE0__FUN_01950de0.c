/* Ghidra address: 01950de0 */
/* Ghidra symbol: FUN_01950de0 */


void FUN_01950de0(longlong param_1,char param_2)

{
  if (param_2 == '\0') {
    *(byte *)(param_1 + 0xd1) = *(byte *)(param_1 + 0xd1) & 0xfe;
  }
  else {
    *(byte *)(param_1 + 0xd1) = *(byte *)(param_1 + 0xd1) | 1;
  }
  return;
}


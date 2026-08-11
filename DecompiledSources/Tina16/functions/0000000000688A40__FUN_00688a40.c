/* Ghidra address: 00688a40 */
/* Ghidra symbol: FUN_00688a40 */


void FUN_00688a40(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x4f) == '\0') {
    *(uint *)(*(longlong *)(param_2 + 0x70) + 0xa4) =
         *(uint *)(*(longlong *)(param_2 + 0x70) + 0xa4) & 0xffffbfff;
  }
  return;
}


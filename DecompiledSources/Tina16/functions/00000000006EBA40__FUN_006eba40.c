/* Ghidra address: 006eba40 */
/* Ghidra symbol: FUN_006eba40 */


void FUN_006eba40(longlong param_1,longlong param_2)

{
  FUN_006d3e20(0x10);
  FUN_00654e40(param_1,param_2);
  *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 2;
  if (*(char *)(param_1 + 0x4d0) == '\x01') {
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 4;
  }
  else {
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 8;
  }
  if (*(char *)(param_1 + 0x4d1) == '\0') {
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x40;
  }
  if (*(char *)(param_1 + 0x490) != '\0') {
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x20;
  }
  if (*(char *)(param_1 + 0x4b8) == '\0') {
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x80;
  }
  if (*(char *)(param_1 + 0x4b9) != '\0') {
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 1;
  }
  FUN_00654d20(param_1,param_2,L"msctls_updown32");
  *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffc | 8;
  return;
}


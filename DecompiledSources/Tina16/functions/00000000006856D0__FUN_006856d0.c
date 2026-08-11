/* Ghidra address: 006856d0 */
/* Ghidra symbol: FUN_006856d0 */


void FUN_006856d0(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x54a) != param_2) {
    *(char *)(param_1 + 0x54a) = param_2;
    if (param_2 == '\x01') {
      *(uint *)(param_1 + 0xa0) = *(uint *)(param_1 + 0xa0) & 0xfffffdff;
    }
    else {
      *(uint *)(param_1 + 0xa0) = *(uint *)(param_1 + 0xa0) | 0x200;
    }
    FUN_00655b90();
  }
  return;
}


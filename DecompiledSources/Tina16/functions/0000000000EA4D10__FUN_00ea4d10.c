/* Ghidra address: 00ea4d10 */
/* Ghidra symbol: FUN_00ea4d10 */


void FUN_00ea4d10(longlong param_1,byte param_2)

{
  if (*(byte *)(param_1 + 10) != param_2) {
    *(byte *)(param_1 + 10) = param_2;
    *(undefined4 *)(param_1 + 0x508) = 0x400800;
    if ((param_2 & 1) != 0) {
      *(uint *)(param_1 + 0x508) = *(uint *)(param_1 + 0x508) | 1;
    }
    if ((param_2 & 2) != 0) {
      *(uint *)(param_1 + 0x508) = *(uint *)(param_1 + 0x508) | 2;
    }
    if ((param_2 & 4) != 0) {
      *(uint *)(param_1 + 0x508) = *(uint *)(param_1 + 0x508) | 4;
    }
    if ((param_2 & 8) != 0) {
      *(uint *)(param_1 + 0x508) = *(uint *)(param_1 + 0x508) | 8;
    }
    if ((param_2 & 0x10) != 0) {
      *(uint *)(param_1 + 0x508) = *(uint *)(param_1 + 0x508) | 0x10;
    }
    if ((param_2 & 0x20) != 0) {
      *(uint *)(param_1 + 0x508) = *(uint *)(param_1 + 0x508) | 0x200;
    }
    if ((param_2 & 0x40) != 0) {
      *(uint *)(param_1 + 0x508) = *(uint *)(param_1 + 0x508) | 0x1000;
    }
    FUN_00ea3330();
  }
  return;
}


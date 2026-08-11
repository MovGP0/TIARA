/* Ghidra address: 013ab670 */
/* Ghidra symbol: FUN_013ab670 */


void FUN_013ab670(longlong param_1,undefined8 param_2,undefined8 param_3,ushort param_4)

{
  if (*(char *)(param_1 + 0x6d1) != '\0') {
    if ((param_4 & 1) == 0) {
      FUN_005fdab0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x6b8) + 0x498) + 0x80),
                   0xff000005);
    }
    else {
      FUN_005fdab0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x6b8) + 0x498) + 0x80),
                   0x8000);
    }
  }
  return;
}


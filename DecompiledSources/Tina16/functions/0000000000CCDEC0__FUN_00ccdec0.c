/* Ghidra address: 00ccdec0 */
/* Ghidra symbol: FUN_00ccdec0 */


void FUN_00ccdec0(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x29) = param_2;
  if (*(char *)(param_1 + 0x29) == '\x01') {
    *(undefined1 *)(param_1 + 0x28) = 0;
  }
  else if (*(char *)(param_1 + 0x29) == '\x04') {
    *(undefined1 *)(param_1 + 0x28) = 2;
  }
  else if (*(char *)(param_1 + 0x29) == '\b') {
    *(undefined1 *)(param_1 + 0x28) = 3;
  }
  else if (*(char *)(param_1 + 0x29) == '\x10') {
    *(undefined1 *)(param_1 + 0x28) = 4;
  }
  else if (*(char *)(param_1 + 0x29) == ' ') {
    *(undefined1 *)(param_1 + 0x28) = 5;
  }
  else {
    *(undefined1 *)(param_1 + 0x28) = 1;
    if (((*(byte *)(param_1 + 0x29) & 2) != 0) &&
       (*(byte *)(param_1 + 0x29) = *(byte *)(param_1 + 0x29) & 0xfd,
       *(char *)(param_1 + 0x29) == '\0')) {
      *(undefined1 *)(param_1 + 0x29) = 0x3d;
    }
  }
  return;
}


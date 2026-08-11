/* Ghidra address: 00ad0890 */
/* Ghidra symbol: FUN_00ad0890 */


void FUN_00ad0890(longlong param_1)

{
  short sVar1;
  
  do {
    while (*(short *)(*(longlong *)(param_1 + 0x50) + 0x20) != 0x2d) {
      FUN_00ad06f0(param_1);
    }
    FUN_00ad06f0(param_1);
    if (*(short *)(*(longlong *)(param_1 + 0x50) + 0x20) == 0x2d) {
      while (*(short *)(*(longlong *)(param_1 + 0x50) + 0x20) == 0x2d) {
        FUN_00ad06f0(param_1);
      }
      while ((sVar1 = *(short *)(*(longlong *)(param_1 + 0x50) + 0x20), sVar1 == 0x20 ||
             (sVar1 == 0xd))) {
        FUN_00ad06f0(param_1);
      }
      if (*(short *)(*(longlong *)(param_1 + 0x50) + 0x20) == 0x21) {
        FUN_00ad06f0(param_1);
      }
      *(bool *)(param_1 + 0x2f) = *(short *)(*(longlong *)(param_1 + 0x50) + 0x20) == 0x3e;
    }
    else {
      *(undefined1 *)(param_1 + 0x2f) = 0;
    }
  } while (*(char *)(param_1 + 0x2f) == '\0');
  *(undefined1 *)(*(longlong *)(param_1 + 0x50) + 0x80) = 0;
  return;
}


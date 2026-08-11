/* Ghidra address: 0080d020 */
/* Ghidra symbol: FUN_0080d020 */


void FUN_0080d020(longlong param_1)

{
  undefined1 auStack_38 [40];
  undefined1 *local_10;
  
  local_10 = auStack_38;
  *(undefined1 *)(param_1 + 0x159) = 1;
  FUN_0043e0b0(FUN_007f9410);
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    if (*(int *)PTR_DAT_02003cb8 == 3) {
      FUN_00800700(*(longlong *)(param_1 + 0xa8),2);
    }
    else if (*(int *)PTR_DAT_02003cb8 == 7) {
      *(undefined1 *)(param_1 + 0x1a8) = 1;
      *(undefined1 *)(*(longlong *)(param_1 + 0xa8) + 0x4d2) = 1;
    }
    if (*(char *)(param_1 + 0xd3) != '\0') {
      if ((*(char *)(*(longlong *)(param_1 + 0xa8) + 0x4d2) == '\x01') ||
         (*(char *)(param_1 + 0x1a8) == '\x01')) {
        FUN_0080bf50(param_1);
        if (*(char *)(param_1 + 0x1a8) == '\x01') {
          FUN_008059a0(*(undefined8 *)(param_1 + 0xa8));
        }
      }
      else {
        FUN_007fdf50(*(longlong *)(param_1 + 0xa8),1);
      }
    }
    do {
      FUN_0080cca0(param_1);
    } while (*(char *)(param_1 + 0x148) == '\0');
  }
  *(undefined1 *)(param_1 + 0x159) = 0;
  return;
}


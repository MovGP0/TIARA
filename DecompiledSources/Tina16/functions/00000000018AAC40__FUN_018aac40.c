/* Ghidra address: 018aac40 */
/* Ghidra symbol: FUN_018aac40 */


void FUN_018aac40(longlong param_1)

{
  if ((*(char *)(param_1 + 0x4b9) != '\0') || (DAT_02110670 == '\0')) {
    if (DAT_02110670 == '\0') {
      *(undefined4 *)(*(longlong *)(param_1 + 0x550) + 0x50c) = 0;
    }
    else {
      *(int *)(*(longlong *)(param_1 + 0x550) + 0x50c) = *(int *)(param_1 + 0x528) + -1;
    }
    FUN_018a6c20(*(undefined8 *)(param_1 + 0x550));
    if (DAT_02110670 != '\0') {
      FUN_018aba30(param_1);
    }
  }
  return;
}


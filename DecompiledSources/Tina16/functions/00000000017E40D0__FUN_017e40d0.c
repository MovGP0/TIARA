/* Ghidra address: 017e40d0 */
/* Ghidra symbol: FUN_017e40d0 */


void FUN_017e40d0(longlong param_1)

{
  if (((*(char *)(param_1 + 0x359) != '\0') && (DAT_02110118 != '\0')) &&
     (*(char *)(param_1 + 0x358) != '\0')) {
    FUN_00410f20(*(undefined8 *)(param_1 + 0x380));
    FUN_007f95c0(*(undefined8 *)(param_1 + 0x378));
    *(undefined1 *)(param_1 + 0x358) = 0;
  }
  return;
}


/* Ghidra address: 007e7070 */
/* Ghidra symbol: FUN_007e7070 */


void FUN_007e7070(longlong param_1)

{
  longlong lVar1;
  
  if (*(char *)(param_1 + 0x91) != '\0') {
    lVar1 = FUN_006485b0(*(undefined8 *)(param_1 + 0x88));
    if (lVar1 != 0) {
      FUN_007e7030(param_1,*(undefined1 *)(lVar1 + 0xb1));
      *(undefined1 *)(param_1 + 0x91) = 1;
    }
  }
  return;
}


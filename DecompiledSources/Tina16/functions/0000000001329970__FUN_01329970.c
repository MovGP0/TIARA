/* Ghidra address: 01329970 */
/* Ghidra symbol: FUN_01329970 */


void FUN_01329970(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x488);
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0x49c) = 1;
    if (*(char *)(lVar1 + 0x1439) == '\0') {
      FUN_00f51380(lVar1,1);
    }
    else {
      *(undefined1 *)(lVar1 + 0x1438) = 1;
    }
  }
  return;
}


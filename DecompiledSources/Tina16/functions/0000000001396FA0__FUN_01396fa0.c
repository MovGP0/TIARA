/* Ghidra address: 01396fa0 */
/* Ghidra symbol: FUN_01396fa0 */


void FUN_01396fa0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x488);
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0x49c) = 1;
    if (*PTR_DAT_020052b8 != '\0') {
      FUN_017d2010(lVar1,0);
    }
    if (*(char *)(lVar1 + 0x1401) == '\0') {
      FUN_00f513f0(lVar1,1);
    }
    else {
      *(undefined1 *)(lVar1 + 0x1400) = 1;
    }
  }
  if (*PTR_DAT_020052b8 != '\0') {
    FUN_017fe450(*(undefined8 *)PTR_DAT_02001d08,"StopAnalysis()",0,1);
  }
  return;
}


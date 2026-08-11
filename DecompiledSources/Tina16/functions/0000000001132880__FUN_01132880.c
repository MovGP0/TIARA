/* Ghidra address: 01132880 */
/* Ghidra symbol: FUN_01132880 */


void FUN_01132880(void)

{
  longlong lVar1;
  
  DAT_02030198 = DAT_02030198 + -1;
  if (DAT_02030198 == -1) {
    lVar1 = FUN_00410e60(&DAT_01132700,1);
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = lVar1 + 0x10;
    }
    FUN_0041b890(&DAT_02030188,lVar1,&DAT_011328fc);
    FUN_0041b890(&DAT_02030190,DAT_02030188,&DAT_0113290c);
  }
  return;
}


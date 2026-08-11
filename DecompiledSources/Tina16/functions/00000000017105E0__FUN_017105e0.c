/* Ghidra address: 017105e0 */
/* Ghidra symbol: FUN_017105e0 */


longlong FUN_017105e0(void)

{
  longlong lVar1;
  undefined8 local_10;
  
  local_10 = 0;
  if (DAT_0210ff88 == 0) {
    lVar1 = FUN_01716240(&DAT_0170c720,1);
    FUN_01719cd0(lVar1,DAT_0210ff90);
    FUN_01719b80(lVar1,*(undefined8 *)PTR_DAT_02001340,L"<COMMONCATDIR>");
    FUN_01719b80(lVar1,*(undefined8 *)PTR_DAT_02004438,L"<CATALOGDIR>");
    FUN_01719d10(lVar1);
    DAT_0210ff88 = lVar1;
  }
  lVar1 = DAT_0210ff88;
  FUN_00414480(&local_10);
  return lVar1;
}


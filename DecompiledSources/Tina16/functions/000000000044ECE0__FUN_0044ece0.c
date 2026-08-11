/* Ghidra address: 0044ece0 */
/* Ghidra symbol: FUN_0044ece0 */


undefined8 FUN_0044ece0(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_0044ec00(&DAT_0200c680);
  if (lVar1 == 0) {
    uVar2 = thunk_FUN_0416e139(0,0,0,0);
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 8);
    *(undefined8 *)(lVar1 + 8) = 0;
    FUN_0044ebe0(&DAT_0200c888,lVar1);
  }
  thunk_FUN_0419e928(uVar2);
  return uVar2;
}


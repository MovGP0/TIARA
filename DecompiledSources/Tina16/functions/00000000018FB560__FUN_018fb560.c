/* Ghidra address: 018fb560 */
/* Ghidra symbol: FUN_018fb560 */


void FUN_018fb560(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  DAT_021106e0 = DAT_021106e0 + 1;
  if (DAT_021106e0 == 0) {
    lVar1 = FUN_01851b50();
    if (lVar1 != 0) {
      uVar2 = FUN_01851b50();
      FUN_004aee30(uVar2,&PTR_FUN_018f0be0);
    }
  }
  return;
}


/* Ghidra address: 01915210 */
/* Ghidra symbol: FUN_01915210 */


void FUN_01915210(void)

{
  undefined8 uVar1;
  
  DAT_021106fc = DAT_021106fc + 1;
  if (DAT_021106fc == 0) {
    uVar1 = FUN_01851b50();
    FUN_004aee50(uVar1,&PTR_FUN_0190f9f8,0);
  }
  return;
}


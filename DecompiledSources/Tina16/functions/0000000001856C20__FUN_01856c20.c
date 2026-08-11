/* Ghidra address: 01856c20 */
/* Ghidra symbol: FUN_01856c20 */


void FUN_01856c20(void)

{
  undefined8 uVar1;
  
  DAT_021102f0 = DAT_021102f0 + -1;
  if (DAT_021102f0 == -1) {
    *(undefined ***)PTR_PTR_02002398 = &PTR_FUN_005f7f40;
    uVar1 = FUN_018669c0();
    FUN_01867620(uVar1,&PTR_FUN_01855b08);
    uVar1 = FUN_018669c0();
    FUN_01867620(uVar1,&PTR_FUN_01855ed8);
    uVar1 = FUN_018669c0();
    FUN_01867620(uVar1,&PTR_FUN_01856358);
  }
  return;
}


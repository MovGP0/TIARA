/* Ghidra address: 01856bb0 */
/* Ghidra symbol: FUN_01856bb0 */


void FUN_01856bb0(void)

{
  undefined8 uVar1;
  
  DAT_021102f0 = DAT_021102f0 + 1;
  if (DAT_021102f0 == 0) {
    *(undefined8 *)PTR_PTR_02002398 = 0;
    uVar1 = FUN_018669c0();
    FUN_01867750(uVar1,&PTR_FUN_01855ed8);
    uVar1 = FUN_018669c0();
    FUN_01867750(uVar1,&PTR_FUN_01855b08);
    uVar1 = FUN_018669c0();
    FUN_01867750(uVar1,&PTR_FUN_01856358);
  }
  return;
}


/* Ghidra address: 00414190 */
/* Ghidra symbol: FUN_00414190 */


void FUN_00414190(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_004097b0();
  uVar2 = FUN_004097e0();
  FUN_00412870(uVar1,uVar2);
  if (PTR_FUN_02006010 != (undefined *)0x0) {
    (*(code *)PTR_FUN_02006010)(uVar1,uVar2);
  }
  FUN_00409860(0xd9,uVar2);
  return;
}


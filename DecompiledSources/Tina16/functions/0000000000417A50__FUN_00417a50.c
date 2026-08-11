/* Ghidra address: 00417a50 */
/* Ghidra symbol: FUN_00417a50 */


void FUN_00417a50(void)

{
  if (PTR_FUN_01db9020 == (undefined *)0x0) {
    FUN_004098e0(0x10);
  }
  else {
    (*(code *)PTR_FUN_01db9020)();
  }
  return;
}


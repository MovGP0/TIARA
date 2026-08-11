/* Ghidra address: 0040c920 */
/* Ghidra symbol: FUN_0040c920 */


void FUN_0040c920(void)

{
  undefined8 unaff_retaddr;
  
  if (PTR_FUN_02006070 != (undefined *)0x0) {
    (*(code *)PTR_FUN_02006070)();
  }
  FUN_00409860(0xd2,unaff_retaddr);
  return;
}


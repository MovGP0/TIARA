/* Ghidra address: 004141e0 */
/* Ghidra symbol: FUN_004141e0 */


void FUN_004141e0(void)

{
  undefined8 unaff_retaddr;
  
  if (PTR_FUN_02006060 == (undefined *)0x0) {
    FUN_00409880(0x15,unaff_retaddr);
  }
  else {
    (*(code *)PTR_FUN_02006060)();
  }
  return;
}


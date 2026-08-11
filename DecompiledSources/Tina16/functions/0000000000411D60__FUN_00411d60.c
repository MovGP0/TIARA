/* Ghidra address: 00411d60 */
/* Ghidra symbol: FUN_00411d60 */


void FUN_00411d60(void)

{
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)FUN_004121e0();
  if ((*puVar1 & 0xfffffffffffffffe) != 0) {
    *puVar1 = 0;
    FUN_00411d90();
  }
  return;
}


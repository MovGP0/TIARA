/* Ghidra address: 00dfc0e0 */
/* Ghidra symbol: FUN_00dfc0e0 */


bool FUN_00dfc0e0(void)

{
  byte in_ID;
  
  return (ulonglong)((ulonglong)(in_ID & 1) != 1) * 0x200000 != (ulonglong)(in_ID & 1) * 0x200000;
}


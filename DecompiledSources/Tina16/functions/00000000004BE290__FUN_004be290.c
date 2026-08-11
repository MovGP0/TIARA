/* Ghidra address: 004be290 */
/* Ghidra symbol: FUN_004be290 */


bool FUN_004be290(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_004c23c0(param_1);
  *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + -1;
  return cVar1 == '\0';
}


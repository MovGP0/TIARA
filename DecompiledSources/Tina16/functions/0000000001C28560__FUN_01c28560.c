/* Ghidra address: 01c28560 */
/* Ghidra symbol: FUN_01c28560 */


bool FUN_01c28560(void)

{
  longlong lVar1;
  
  lVar1 = FUN_01c27400();
  return *(longlong *)(lVar1 + 0x18) == 0;
}


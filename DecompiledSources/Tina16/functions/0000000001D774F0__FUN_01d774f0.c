/* Ghidra address: 01d774f0 */
/* Ghidra symbol: FUN_01d774f0 */


bool FUN_01d774f0(void)

{
  char cVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_00781840();
  cVar1 = (**(code **)(*plVar2 + 0x98))(plVar2);
  return cVar1 != '\0';
}


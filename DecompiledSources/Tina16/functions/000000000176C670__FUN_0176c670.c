/* Ghidra address: 0176c670 */
/* Ghidra symbol: FUN_0176c670 */


bool FUN_0176c670(longlong param_1)

{
  char cVar1;
  bool bVar2;
  
  bVar2 = false;
  if (*(longlong *)(param_1 + 8) != 0) {
    cVar1 = FUN_019a1cf0();
    bVar2 = cVar1 == '\0';
  }
  return bVar2;
}


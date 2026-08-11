/* Ghidra address: 00af8f40 */
/* Ghidra symbol: FUN_00af8f40 */


bool FUN_00af8f40(longlong param_1,int param_2,int param_3)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = **(char **)(param_1 + 0x78);
  if (cVar1 == '\x02') {
    bVar2 = param_2 == param_3;
  }
  else if (cVar1 == '\x03') {
    bVar2 = param_2 <= param_3;
  }
  else if (cVar1 == '\x04') {
    bVar2 = param_3 <= param_2;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}


/* Ghidra address: 010d9130 */
/* Ghidra symbol: FUN_010d9130 */


void FUN_010d9130(longlong param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x9be);
  if (cVar1 == '\0') {
    FUN_010d8ca0(param_1,1);
  }
  else if (cVar1 == '\x01') {
    FUN_010d8ca0(param_1,2);
  }
  else if (cVar1 == '\x02') {
    FUN_010d8ca0(param_1,0);
  }
  return;
}


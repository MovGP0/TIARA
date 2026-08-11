/* Ghidra address: 00d3cf70 */
/* Ghidra symbol: FUN_00d3cf70 */


bool FUN_00d3cf70(longlong param_1)

{
  bool bVar1;
  undefined1 local_24 [12];
  int local_18;
  int local_14;
  
  if (*(char *)(param_1 + 0x7d) == '\0') {
    bVar1 = false;
  }
  else {
    FUN_00d3c440(param_1,local_24);
    bVar1 = local_18 < local_14;
  }
  return bVar1;
}


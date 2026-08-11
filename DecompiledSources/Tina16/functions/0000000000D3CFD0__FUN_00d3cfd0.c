/* Ghidra address: 00d3cfd0 */
/* Ghidra symbol: FUN_00d3cfd0 */


bool FUN_00d3cfd0(longlong param_1)

{
  bool bVar1;
  undefined1 local_24 [12];
  int local_18;
  int local_14;
  
  if (*(char *)(param_1 + 0x7c) == '\0') {
    bVar1 = false;
  }
  else {
    FUN_00d3cb70(param_1,local_24);
    bVar1 = local_18 < local_14;
  }
  return bVar1;
}


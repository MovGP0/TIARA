/* Ghidra address: 00d3b1a0 */
/* Ghidra symbol: FUN_00d3b1a0 */


void FUN_00d3b1a0(longlong param_1)

{
  char cVar1;
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  undefined1 local_20 [16];
  
  thunk_FUN_03cc0d62(local_20);
  FUN_00d3cd00(param_1,local_30);
  cVar1 = FUN_00423210(local_30,local_20);
  if (cVar1 == '\0') {
    FUN_00d3c6c0(param_1,local_40);
    cVar1 = FUN_00423210(local_40,local_20);
    if (cVar1 == '\0') {
      FUN_00d3b2b0(param_1,*(undefined1 *)(param_1 + 0xae),*(undefined1 *)(param_1 + 0xad),0,0);
    }
  }
  return;
}


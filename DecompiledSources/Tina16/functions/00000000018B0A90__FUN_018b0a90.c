/* Ghidra address: 018b0a90 */
/* Ghidra symbol: FUN_018b0a90 */


void FUN_018b0a90(longlong param_1)

{
  int iVar1;
  
  while( true ) {
    iVar1 = FUN_004b2060(param_1);
    if (iVar1 < 2) break;
    FUN_018b09c0(param_1,1);
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  return;
}


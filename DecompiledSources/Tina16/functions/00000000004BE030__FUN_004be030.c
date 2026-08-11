/* Ghidra address: 004be030 */
/* Ghidra symbol: FUN_004be030 */


void FUN_004be030(longlong param_1,char param_2)

{
  char cVar1;
  
  cVar1 = FUN_004c23c0(param_1);
  if (cVar1 != param_2) {
    *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + -1;
    FUN_004c25a0(param_1);
    FUN_004bdee0();
  }
  return;
}


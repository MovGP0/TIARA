/* Ghidra address: 004c02a0 */
/* Ghidra symbol: FUN_004c02a0 */


void FUN_004c02a0(longlong param_1)

{
  char cVar1;
  undefined1 local_22 [18];
  
  cVar1 = FUN_004c23c0(param_1);
  if (cVar1 == '\x05') {
    FUN_004bea90(param_1,local_22,10);
    FUN_0040a8e0(local_22);
  }
  else {
    *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + -1;
    FUN_004c02f0(param_1);
  }
  return;
}


/* Ghidra address: 004d5da0 */
/* Ghidra symbol: FUN_004d5da0 */


bool FUN_004d5da0(longlong param_1)

{
  bool bVar1;
  
  bVar1 = true;
  if (*(longlong *)(param_1 + 0x58) != 0) {
    bVar1 = *(int *)(*(longlong *)(param_1 + 0x80) + 0x7c) !=
            *(int *)(*(longlong *)(param_1 + 0x58) + 0x7c);
  }
  return bVar1;
}


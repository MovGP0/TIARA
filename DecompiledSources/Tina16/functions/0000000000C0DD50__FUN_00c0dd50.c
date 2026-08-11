/* Ghidra address: 00c0dd50 */
/* Ghidra symbol: FUN_00c0dd50 */


void FUN_00c0dd50(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x518) != param_2) {
    *(char *)(param_1 + 0x518) = param_2;
    FUN_00c0a950(param_1,0x100);
  }
  return;
}


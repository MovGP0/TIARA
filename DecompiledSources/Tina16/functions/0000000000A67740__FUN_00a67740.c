/* Ghidra address: 00a67740 */
/* Ghidra symbol: FUN_00a67740 */


void FUN_00a67740(longlong param_1,int param_2)

{
  short sVar1;
  
  while( true ) {
    FUN_00a62d70(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x80),0);
    sVar1 = *(short *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x80) + 0x10);
    if (sVar1 == 0) {
      return;
    }
    if (sVar1 == 0x3c) break;
    if (sVar1 == 0x7b) {
      param_2 = param_2 + 1;
    }
    else if ((sVar1 == 0x7d) && (param_2 = param_2 + -1, param_2 == 0)) {
      FUN_00a62d70(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x80),0);
      return;
    }
  }
  return;
}


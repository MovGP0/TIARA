/* Ghidra address: 0112a330 */
/* Ghidra symbol: FUN_0112a330 */


void FUN_0112a330(longlong param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_01129a20(param_1 + 8);
  if (cVar1 == '\0') {
    *(short *)(param_1 + 8) = *(short *)(param_1 + 8) + *(short *)(param_2 + 8);
    *(short *)(param_1 + 10) = *(short *)(param_1 + 10) + *(short *)(param_2 + 10);
    *(short *)(param_1 + 0xc) = *(short *)(param_1 + 0xc) + *(short *)(param_2 + 0xc);
    *(short *)(param_1 + 0xe) = *(short *)(param_1 + 0xe) + *(short *)(param_2 + 0xe);
    *(short *)(param_1 + 0x10) = *(short *)(param_1 + 0x10) + *(short *)(param_2 + 0x10);
    *(short *)(param_1 + 0x12) = *(short *)(param_1 + 0x12) + *(short *)(param_2 + 0x12);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + *(int *)(param_2 + 0x14);
    FUN_0112a210(param_1,0);
  }
  return;
}


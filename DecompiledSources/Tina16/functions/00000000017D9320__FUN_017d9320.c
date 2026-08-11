/* Ghidra address: 017d9320 */
/* Ghidra symbol: FUN_017d9320 */


void FUN_017d9320(undefined8 param_1,longlong *param_2,int param_3)

{
  if (*(uint *)(param_2 + 2) == (uint)*(ushort *)((longlong)param_2 + 0x14)) {
    FUN_00409620(param_2,(*(ushort *)((longlong)param_2 + 0x14) + 0x32) * 2);
    *(short *)((longlong)param_2 + 0x14) = *(short *)((longlong)param_2 + 0x14) + 0x32;
  }
  *(short *)(*param_2 + (longlong)(int)param_2[2] * 2) = (short)param_3;
  *(short *)(param_2[1] + (longlong)param_3 * 2) = (short)param_2[2];
  *(int *)(param_2 + 2) = (int)param_2[2] + 1;
  return;
}


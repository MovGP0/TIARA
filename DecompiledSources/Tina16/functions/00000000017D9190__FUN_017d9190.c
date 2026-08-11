/* Ghidra address: 017d9190 */
/* Ghidra symbol: FUN_017d9190 */


void FUN_017d9190(undefined8 param_1,longlong *param_2,int param_3,ulonglong *param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = *param_4;
  uVar3 = param_4[1];
  if (*(uint *)(param_2 + 2) == (uint)*(ushort *)((longlong)param_2 + 0x14)) {
    FUN_00409620(param_2,(*(ushort *)((longlong)param_2 + 0x14) + 0x32) * 0x18);
    *(short *)((longlong)param_2 + 0x14) = *(short *)((longlong)param_2 + 0x14) + 0x32;
  }
  puVar1 = (ulonglong *)(*param_2 + (longlong)(int)param_2[2] * 0x18);
  *puVar1 = uVar2 ^ 0x8000000000000000;
  puVar1[1] = uVar3 ^ 0x8000000000000000;
  *(int *)(puVar1 + 2) = param_3;
  *(undefined1 *)((longlong)puVar1 + 0x14) = 1;
  *(short *)(param_2[1] + (longlong)param_3 * 2) = (short)param_2[2];
  *(int *)(param_2 + 2) = (int)param_2[2] + 1;
  return;
}


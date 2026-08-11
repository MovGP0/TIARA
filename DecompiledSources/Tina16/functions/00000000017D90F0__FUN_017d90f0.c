/* Ghidra address: 017d90f0 */
/* Ghidra symbol: FUN_017d90f0 */


void FUN_017d90f0(undefined8 param_1,longlong *param_2,int param_3,undefined8 param_4,char param_5,
                 char param_6)

{
  undefined8 *puVar1;
  
  if (*(uint *)(param_2 + 2) == (uint)*(ushort *)((longlong)param_2 + 0x14)) {
    FUN_00409620(param_2,(*(ushort *)((longlong)param_2 + 0x14) + 0x32) * 0x18);
    *(short *)((longlong)param_2 + 0x14) = *(short *)((longlong)param_2 + 0x14) + 0x32;
  }
  puVar1 = (undefined8 *)(*param_2 + (longlong)(int)param_2[2] * 0x18);
  if (param_6 == '\0') {
    *puVar1 = param_4;
  }
  else {
    puVar1[1] = param_4;
  }
  *(int *)(puVar1 + 2) = param_3;
  *(bool *)((longlong)puVar1 + 0x14) = param_5 == '\0';
  *(short *)(param_2[1] + (longlong)param_3 * 2) = (short)param_2[2];
  *(int *)(param_2 + 2) = (int)param_2[2] + 1;
  return;
}


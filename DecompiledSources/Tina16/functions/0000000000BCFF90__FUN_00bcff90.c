/* Ghidra address: 00bcff90 */
/* Ghidra symbol: FUN_00bcff90 */


void FUN_00bcff90(longlong param_1,int param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  FUN_004b3260(param_1);
  if (*(int *)(param_1 + 0x40) == *(int *)(param_1 + 0x44)) {
    FUN_00bcfee0(param_1);
  }
  if (param_2 < *(int *)(param_1 + 0x40)) {
    FUN_00409a70(*(longlong *)(param_1 + 0x38) + (longlong)param_2 * 0x28,
                 *(longlong *)(param_1 + 0x38) + (longlong)(param_2 + 1) * 0x28,
                 (longlong)((*(int *)(param_1 + 0x40) - param_2) * 0x28));
  }
  *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x38) + (longlong)param_2 * 0x28);
  *puVar1 = 0;
  FUN_00414ad0(puVar1,param_3);
  puVar1[1] = 0;
  puVar1[2] = 0xffffffffffffffff;
  *(undefined4 *)(puVar1 + 3) = 0xffffffff;
  *(undefined1 *)(puVar1 + 4) = 4;
  *(byte *)(puVar1 + 4) = *(byte *)(puVar1 + 4) | 8;
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  FUN_004b3390(param_1);
  return;
}


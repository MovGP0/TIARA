/* Ghidra address: 00bcf360 */
/* Ghidra symbol: FUN_00bcf360 */


void FUN_00bcf360(longlong param_1,int param_2)

{
  if ((param_2 < 0) || (*(int *)(param_1 + 0x40) <= param_2)) {
    FUN_00bceea0(param_2);
  }
  FUN_004b3260(param_1);
  FUN_00417740(*(longlong *)(param_1 + 0x38) + (longlong)param_2 * 0x28,&DAT_00bcca10);
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
  if (param_2 < *(int *)(param_1 + 0x40)) {
    FUN_00409a70(*(longlong *)(param_1 + 0x38) + (longlong)(param_2 + 1) * 0x28,
                 *(longlong *)(param_1 + 0x38) + (longlong)param_2 * 0x28,
                 (longlong)((*(int *)(param_1 + 0x40) - param_2) * 0x28));
  }
  *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    (**(code **)(param_1 + 0xa8))(*(undefined8 *)(param_1 + 0xb0),param_1,param_2,1);
  }
  FUN_004b3390(param_1);
  return;
}


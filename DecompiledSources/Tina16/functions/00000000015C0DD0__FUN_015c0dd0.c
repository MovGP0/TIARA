/* Ghidra address: 015c0dd0 */
/* Ghidra symbol: FUN_015c0dd0 */


void FUN_015c0dd0(undefined1 param_1,ulonglong *param_2)

{
  uint uVar1;
  
  uVar1 = FUN_015c0d90(param_1,(int)*param_2);
  *param_2 = (ulonglong)uVar1;
  param_2[1] = param_2[1] + (*param_2 & 0xff);
  param_2[1] = param_2[1] * 0x8088405 + 1 & 0xffffffff;
  uVar1 = FUN_015c0d90(param_2[1] >> 0x18,(int)param_2[2]);
  param_2[2] = (ulonglong)uVar1;
  return;
}


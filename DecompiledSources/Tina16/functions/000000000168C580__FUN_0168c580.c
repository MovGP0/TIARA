/* Ghidra address: 0168c580 */
/* Ghidra symbol: FUN_0168c580 */


double * FUN_0168c580(longlong param_1,double *param_2,undefined8 param_3,longlong param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  short *psVar3;
  short local_2e8 [340];
  undefined8 *local_40 [2];
  
  if (*(int *)(param_1 + 0x7c) == 0) {
    uVar1 = FUN_01b05600(param_3,*(undefined1 *)(param_1 + 0x78));
    *(undefined4 *)(param_1 + 0x7c) = uVar1;
  }
  if (*(int *)(param_1 + 0x80) == 0) {
    uVar1 = FUN_01b05600(param_3,*(undefined1 *)(param_1 + 0x79));
    *(undefined4 *)(param_1 + 0x80) = uVar1;
  }
  FUN_016ee260(param_3,local_40,0x2a8,0);
  psVar3 = local_2e8;
  for (lVar2 = 0x55; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined8 *)psVar3 = *local_40[0];
    local_40[0] = local_40[0] + 1;
    psVar3 = psVar3 + 4;
  }
  *param_2 = (double)(int)local_2e8[0] *
             (*(double *)(*(longlong *)(param_4 + 0x118) + (longlong)*(int *)(param_1 + 0x7c) * 8) -
             *(double *)(*(longlong *)(param_4 + 0x118) + (longlong)*(int *)(param_1 + 0x80) * 8));
  return param_2;
}


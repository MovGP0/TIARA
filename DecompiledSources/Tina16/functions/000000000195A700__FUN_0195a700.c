/* Ghidra address: 0195a700 */
/* Ghidra symbol: FUN_0195a700 */


void FUN_0195a700(longlong param_1,undefined8 param_2,double param_3,double param_4,double param_5,
                 double param_6)

{
  undefined4 uVar1;
  int iVar2;
  double dVar3;
  
  *(undefined8 *)(param_1 + 0x288) = param_2;
  *(double *)(param_1 + 0x268) = param_3;
  *(double *)(param_1 + 0x270) = param_4;
  *(double *)(param_1 + 0x278) = param_5;
  *(double *)(param_1 + 0x280) = param_6;
  dVar3 = (double)FUN_019508b0(param_1);
  uVar1 = FUN_0040c770(dVar3 * param_3 + param_5);
  *(undefined4 *)(param_1 + 0x248) = uVar1;
  dVar3 = (double)FUN_01950860(param_1);
  uVar1 = FUN_0040c770(dVar3 * param_4 + param_6);
  *(undefined4 *)(param_1 + 0x24c) = uVar1;
  dVar3 = (double)FUN_019508b0(param_1);
  uVar1 = FUN_0040c770((dVar3 + *(double *)(param_1 + 0xa8)) * param_3 + param_5);
  *(undefined4 *)(param_1 + 0x250) = uVar1;
  dVar3 = (double)FUN_01950860(param_1);
  uVar1 = FUN_0040c770((dVar3 + *(double *)(param_1 + 0xb0)) * param_4 + param_6);
  *(undefined4 *)(param_1 + 0x254) = uVar1;
  if (*(char *)(*(longlong *)(param_1 + 0x1c0) + 0x2c) != '\0') {
    iVar2 = FUN_0040c770(*(double *)(*(longlong *)(param_1 + 0x1c0) + 0x30) * param_3);
    *(int *)(param_1 + 0x250) = *(int *)(param_1 + 0x250) - iVar2;
    iVar2 = FUN_0040c770(*(double *)(*(longlong *)(param_1 + 0x1c0) + 0x30) * param_4);
    *(int *)(param_1 + 0x254) = *(int *)(param_1 + 0x254) - iVar2;
  }
  *(int *)(param_1 + 600) = *(int *)(param_1 + 0x250) - *(int *)(param_1 + 0x248);
  *(int *)(param_1 + 0x25c) = *(int *)(param_1 + 0x254) - *(int *)(param_1 + 0x24c);
  uVar1 = FUN_0040c770(*(double *)(*(longlong *)(param_1 + 0x1c0) + 0x40) * param_3);
  *(undefined4 *)(param_1 + 0x260) = uVar1;
  return;
}


/* Ghidra address: 00fc94f0 */
/* Ghidra symbol: FUN_00fc94f0 */


void FUN_00fc94f0(longlong param_1)

{
  double dVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  double dVar5;
  double dVar6;
  
  dVar1 = *(double *)(param_1 + 0xbe0);
  iVar2 = *(int *)(param_1 + 0x728);
  iVar3 = *(int *)(param_1 + 0x724);
  dVar5 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x6d8));
  dVar6 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x6e0));
  if ((dVar5 <= (double)iVar2 * (1.0 / dVar1) * (double)iVar3) && (dVar6 < dVar5)) {
    uVar4 = FUN_0040c770(((dVar5 - dVar6) / (double)*(int *)(param_1 + 0x724)) *
                         *(double *)(param_1 + 0xbe0));
    *(undefined4 *)(param_1 + 0xb68) = uVar4;
    uVar4 = FUN_0040c770((dVar6 / (double)*(int *)(param_1 + 0x724)) * *(double *)(param_1 + 0xbe0))
    ;
    *(undefined4 *)(param_1 + 0xb6c) = uVar4;
    *(double *)(param_1 + 0xb58) = dVar5;
    *(double *)(param_1 + 0xb60) = dVar6;
    uVar4 = (**(code **)(**(longlong **)(param_1 + 0x710) + 0x260))(*(longlong **)(param_1 + 0x710))
    ;
    *(undefined4 *)(param_1 + 0xb44) = uVar4;
  }
  return;
}


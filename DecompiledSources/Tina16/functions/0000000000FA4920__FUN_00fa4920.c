/* Ghidra address: 00fa4920 */
/* Ghidra symbol: FUN_00fa4920 */


void FUN_00fa4920(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  double dVar4;
  
  dVar4 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x758));
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x6c0) + 0x260))(*(longlong **)(param_1 + 0x6c0));
  iVar1 = *(int *)(param_1 + 0x844 + (longlong)*(int *)(param_1 + 0x878) * 4);
  iVar2 = *(int *)(param_1 + 0x844 + (longlong)iVar2 * 4);
  uVar3 = (**(code **)(**(longlong **)(param_1 + 0x6c0) + 0x260))(*(longlong **)(param_1 + 0x6c0));
  *(undefined4 *)(param_1 + 0x878) = uVar3;
  *(undefined1 *)(param_1 + 0x874) = 1;
  FUN_00b90440(*(undefined8 *)(param_1 + 0x758),(dVar4 / (double)iVar1) * (double)iVar2);
  *(undefined1 *)(param_1 + 0x874) = 0;
  return;
}


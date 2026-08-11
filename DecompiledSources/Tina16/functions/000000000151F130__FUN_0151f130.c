/* Ghidra address: 0151f130 */
/* Ghidra symbol: FUN_0151f130 */


void FUN_0151f130(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  
  plVar1 = *(longlong **)(param_1 + 0xec8);
  iVar3 = (**(code **)(*plVar1 + 0xa8))(plVar1);
  iVar4 = (**(code **)(*plVar1 + 0xc0))(plVar1);
  *(double *)(param_1 + 0xc50) = (double)(iVar3 - iVar4);
  uVar2 = (**(code **)(*plVar1 + 0x128))(plVar1);
  *(double *)(param_1 + 0xc58) = (double)uVar2 + *(double *)(param_1 + 0xc50);
  iVar3 = (**(code **)(*plVar1 + 0xe8))(plVar1);
  if (iVar3 == 0) {
    dVar5 = (double)(**(code **)(*plVar1 + 0x110))(plVar1);
    *(double *)(param_1 + 0xc50) = *(double *)(param_1 + 0xc50) * dVar5;
    dVar5 = (double)(**(code **)(*plVar1 + 0x110))(plVar1);
    *(double *)(param_1 + 0xc58) = *(double *)(param_1 + 0xc58) * dVar5;
  }
  if (*(char *)(*(longlong *)(param_1 + 0xb98) + 0x328) == '\0') {
    FUN_00b90440(*(undefined8 *)(param_1 + 0xb90),*(undefined8 *)(param_1 + 0xc58));
  }
  else {
    FUN_00b90440(*(undefined8 *)(param_1 + 0xb90),*(undefined8 *)(param_1 + 0xc50));
  }
  FUN_01506fd0(param_1);
  FUN_010eae00(*(undefined8 *)(param_1 + 0x9b0),*(undefined8 *)(param_1 + 0xc58),1,0,0);
  FUN_010eae00(*(undefined8 *)(param_1 + 0x9b0),*(undefined8 *)(param_1 + 0xc50),0,param_2,0);
  return;
}


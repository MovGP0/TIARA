/* Ghidra address: 006ec230 */
/* Ghidra symbol: FUN_006ec230 */


void FUN_006ec230(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  iVar1 = *(int *)(param_2 + 0x98);
  iVar2 = *(int *)(param_2 + 0x90);
  uVar4 = FUN_0065b870();
  uVar5 = FUN_0065b870(param_2);
  thunk_FUN_041b2403(uVar4,0x469,uVar5,0);
  iVar3 = *(int *)(param_2 + 0x90);
  FUN_0064cbf0(param_2,iVar1 * 2 - *(int *)(param_2 + 0x98));
  FUN_0064cb30(param_2,iVar2 - (iVar3 - iVar2));
  return;
}


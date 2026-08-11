/* Ghidra address: 00879100 */
/* Ghidra symbol: FUN_00879100 */


bool FUN_00879100(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  bool bVar5;
  
  iVar1 = 0;
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + -4);
  }
  iVar4 = 0;
  if (param_1 != 0) {
    iVar4 = *(int *)(param_1 + -4);
  }
  bVar5 = iVar1 <= iVar4;
  if (iVar1 <= iVar4) {
    lVar2 = FUN_00416740();
    uVar3 = FUN_00416740(param_2);
    iVar4 = 0;
    if (param_1 != 0) {
      iVar4 = *(int *)(param_1 + -4);
    }
    iVar1 = FUN_00427780(0x400,1,lVar2 + (longlong)(iVar4 - iVar1) * 2,iVar1,uVar3,iVar1);
    bVar5 = iVar1 == 2;
  }
  return bVar5;
}


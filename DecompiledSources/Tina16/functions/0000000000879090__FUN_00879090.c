/* Ghidra address: 00879090 */
/* Ghidra symbol: FUN_00879090 */


bool FUN_00879090(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  
  iVar2 = 0;
  if (param_2 != 0) {
    iVar2 = *(int *)(param_2 + -4);
  }
  iVar1 = 0;
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + -4);
  }
  bVar5 = iVar2 <= iVar1;
  if (iVar2 <= iVar1) {
    uVar3 = FUN_00416740();
    uVar4 = FUN_00416740(param_2);
    iVar2 = FUN_00427780(0x400,1,uVar3,iVar2,uVar4,iVar2);
    bVar5 = iVar2 == 2;
  }
  return bVar5;
}


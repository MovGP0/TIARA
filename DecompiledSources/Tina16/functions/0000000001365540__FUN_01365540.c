/* Ghidra address: 01365540 */
/* Ghidra symbol: FUN_01365540 */


undefined8 FUN_01365540(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  iVar4 = *(int *)(param_2 + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      uVar2 = FUN_004aeac0(param_2,iVar3);
      FUN_004ae7e0(uVar1,uVar2);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return uVar1;
}


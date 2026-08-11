/* Ghidra address: 0163dd40 */
/* Ghidra symbol: FUN_0163dd40 */


void FUN_0163dd40(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  
  FUN_0161db60(param_2,1);
  lVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  FUN_0161db10(param_2,lVar2);
  iVar5 = *(int *)(lVar2 + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      uVar3 = FUN_004aeac0(lVar2,iVar4);
      iVar1 = FUN_004aeba0(*(undefined8 *)(param_1 + 0x40),uVar3);
      if (iVar1 == -1) {
        uVar3 = FUN_004aeac0(lVar2,iVar4);
        FUN_004ae7e0(*(undefined8 *)(param_1 + 0x40),uVar3);
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_00410f20(lVar2);
  return;
}


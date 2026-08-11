/* Ghidra address: 00c3c480 */
/* Ghidra symbol: FUN_00c3c480 */


void FUN_00c3c480(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  if (*param_2 == 0) {
    lVar1 = FUN_00410e60(&PTR_FUN_00472dd0,1);
    *param_2 = lVar1;
  }
  iVar4 = *(int *)(param_1 + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      uVar2 = FUN_004aeac0(param_1,iVar3);
      uVar2 = FUN_00c3bef0(uVar2);
      FUN_004ae7e0(*param_2,uVar2);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}


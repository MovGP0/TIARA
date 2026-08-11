/* Ghidra address: 017a0190 */
/* Ghidra symbol: FUN_017a0190 */


void FUN_017a0190(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  
  lVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  iVar5 = 0;
  while (iVar5 < *(int *)(*(longlong *)(param_1 + 0xd10) + 0x10)) {
    lVar3 = FUN_004aeac0(*(longlong *)(param_1 + 0xd10),iVar5);
    cVar1 = FUN_004113d0(lVar3,&PTR_FUN_017a79c0);
    if ((cVar1 == '\0') || ((*(byte *)(lVar3 + 0x145) & 4) == 0)) {
      iVar5 = iVar5 + 1;
    }
    else {
      uVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),iVar5);
      FUN_004ae7e0(lVar2,uVar4);
      FUN_004ae870(*(undefined8 *)(param_1 + 0xd10),iVar5);
    }
  }
  iVar5 = *(int *)(lVar2 + 0x10);
  iVar6 = 0;
  if (-1 < iVar5 + -1) {
    do {
      uVar4 = FUN_004aeac0(lVar2,iVar6);
      FUN_004ae7e0(*(undefined8 *)(param_1 + 0xd10),uVar4);
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_00410f20(lVar2);
  return;
}


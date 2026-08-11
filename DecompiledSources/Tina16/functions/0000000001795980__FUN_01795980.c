/* Ghidra address: 01795980 */
/* Ghidra symbol: FUN_01795980 */


void FUN_01795980(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  
  lVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  iVar6 = *(int *)(*(longlong *)(param_1 + 0xd10) + 0x10);
  iVar5 = 0;
  if (-1 < iVar6 + -1) {
    do {
      lVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),iVar5);
      if (*(char *)(lVar3 + 0x21) != '\0') {
        uVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),iVar5);
        cVar1 = FUN_004113d0(uVar4,&PTR_FUN_017aad48);
        if (cVar1 == '\0') {
          uVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),iVar5);
          FUN_004ae7e0(lVar2,uVar4);
          FUN_004aedb0(*(undefined8 *)(param_1 + 0xd10),iVar5,0);
          FUN_01795670(param_1,1);
        }
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  FUN_004aee80(*(undefined8 *)(param_1 + 0xd10));
  FUN_0064e770(*(undefined8 *)(param_1 + 0x948));
  if (0 < *(int *)(lVar2 + 0x10)) {
    uVar4 = FUN_00c5c340(&DAT_00c5bba8,1,*(undefined8 *)(param_1 + 0xd10),lVar2,1);
    FUN_00c5c790(*(undefined8 *)(param_1 + 0xd50),uVar4);
  }
  FUN_00410f20(lVar2);
  return;
}


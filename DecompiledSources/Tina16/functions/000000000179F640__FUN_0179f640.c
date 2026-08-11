/* Ghidra address: 0179f640 */
/* Ghidra symbol: FUN_0179f640 */


void FUN_0179f640(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(longlong *)(param_1 + 0xd10) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),iVar3);
      cVar1 = FUN_004113d0(uVar2,&PTR_FUN_017ad080);
      if (cVar1 != '\0') {
        uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),iVar3);
        FUN_00410f20(uVar2);
        FUN_004aedb0(*(undefined8 *)(param_1 + 0xd10),iVar3,0);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_004aee80(*(undefined8 *)(param_1 + 0xd10));
  uVar2 = FUN_00c5ef40(&PTR_FUN_00c5ed90,1,param_1);
  FUN_01794b80(param_1,uVar2);
  FUN_0064e770(*(undefined8 *)(param_1 + 0x948));
  return;
}


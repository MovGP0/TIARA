/* Ghidra address: 0184ed70 */
/* Ghidra symbol: FUN_0184ed70 */


void FUN_0184ed70(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  
  *(undefined1 *)(param_2 + 0x82) = 1;
  *(undefined1 *)(param_2 + 0x138) = 1;
  iVar4 = FUN_0184caf0();
  iVar5 = 0;
  if (-1 < iVar4 + -1) {
    do {
      uVar1 = FUN_0184cd80(param_2,iVar5);
      cVar3 = FUN_004113d0(uVar1,&PTR_FUN_01843fa0);
      if (cVar3 != '\0') {
        lVar2 = FUN_0184cd80(param_2,iVar5);
        FUN_0184ed70(param_1,*(undefined8 *)(lVar2 + 0x90));
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}


/* Ghidra address: 0184ccf0 */
/* Ghidra symbol: FUN_0184ccf0 */


void FUN_0184ccf0(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  iVar2 = FUN_0184caf0(param_1);
  iVar2 = iVar2 + -1;
  if (-1 < iVar2) {
    do {
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0xa8) + 0x30))
                        (*(longlong **)(param_1 + 0xa8),iVar2);
      cVar1 = FUN_004113d0(uVar3,&PTR_FUN_01842f58);
      if (cVar1 != '\0') {
        lVar4 = FUN_0184cd80(param_1,iVar2);
        if (*(longlong *)(lVar4 + 0x10) == param_2) {
          uVar3 = FUN_0184cd80(param_1,iVar2);
          FUN_00410f20(uVar3);
          uVar3 = FUN_0184cd80(param_1,iVar2);
          FUN_0184cb10(param_1,uVar3);
        }
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != -1);
  }
  return;
}


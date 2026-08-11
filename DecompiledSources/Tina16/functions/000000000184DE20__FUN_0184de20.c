/* Ghidra address: 0184de20 */
/* Ghidra symbol: FUN_0184de20 */


void FUN_0184de20(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
  if (*(char *)(param_1 + 0x120) != '\0') {
    iVar4 = 0;
    while( true ) {
      iVar2 = (**(code **)(**(longlong **)(param_1 + 0xa8) + 0x28))(*(longlong **)(param_1 + 0xa8));
      if (iVar2 <= iVar4) break;
      lVar3 = (**(code **)(**(longlong **)(param_1 + 0xa8) + 0x30))
                        (*(longlong **)(param_1 + 0xa8),iVar4);
      cVar1 = FUN_004113d0(lVar3,&PTR_FUN_018471b0);
      if (cVar1 == '\0') {
        cVar1 = FUN_004113d0(lVar3,&PTR_FUN_01842f58);
        if ((cVar1 != '\0') && (*(longlong *)(lVar3 + 0x10) == 1)) goto LAB_0184de7d;
        iVar4 = iVar4 + 1;
      }
      else {
LAB_0184de7d:
        FUN_00410f20(lVar3);
        (**(code **)(**(longlong **)(param_1 + 0xa8) + 0x98))(*(longlong **)(param_1 + 0xa8),iVar4);
      }
    }
    *(undefined1 *)(param_1 + 0x120) = 0;
  }
  return;
}


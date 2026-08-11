/* Ghidra address: 01ada1b0 */
/* Ghidra symbol: FUN_01ada1b0 */


void FUN_01ada1b0(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  
  if (param_1 != 0) {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x28))();
    iVar5 = 0;
    if (-1 < iVar2 + -1) {
      do {
        uVar3 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x30))
                          (*(longlong **)(param_1 + 0xe0),iVar5);
        cVar1 = FUN_004113d0(uVar3,&PTR_FUN_01a5c280);
        if ((cVar1 != '\0') &&
           (lVar4 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x30))
                              (*(longlong **)(param_1 + 0xe0),iVar5),
           *(longlong *)(lVar4 + 0xa8) == param_2)) {
          lVar4 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x30))
                            (*(longlong **)(param_1 + 0xe0),iVar5);
          *(undefined8 *)(lVar4 + 0xa8) = 0;
        }
        iVar5 = iVar5 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return;
}


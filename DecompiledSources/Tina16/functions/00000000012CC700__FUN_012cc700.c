/* Ghidra address: 012cc700 */
/* Ghidra symbol: FUN_012cc700 */


void FUN_012cc700(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  code *pcVar4;
  int iVar5;
  
  if (*(undefined1 **)(param_1 + 0x718) != (undefined1 *)0x0) {
    **(undefined1 **)(param_1 + 0x718) = 1;
  }
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x738) + 0x28))();
  iVar5 = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar2 = (**(code **)(**(longlong **)(param_1 + 0x738) + 0x30))
                        (*(longlong **)(param_1 + 0x738),iVar5);
      if ((lVar2 != 0) && (lVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x740),iVar5), lVar2 != 0)
         ) {
        uVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x740),iVar5);
        pcVar4 = (code *)(**(code **)(**(longlong **)(param_1 + 0x738) + 0x30))
                                   (*(longlong **)(param_1 + 0x738),iVar5);
        (*pcVar4)(uVar3);
      }
      iVar5 = iVar5 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}


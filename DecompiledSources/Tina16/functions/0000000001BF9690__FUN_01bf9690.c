/* Ghidra address: 01bf9690 */
/* Ghidra symbol: FUN_01bf9690 */


void FUN_01bf9690(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  
  (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x10))
            (*(longlong **)(param_1 + 0xc0),*(undefined8 *)(param_1 + 0xb8));
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x28))(*(longlong **)(param_1 + 0xb8));
  *(undefined4 *)(param_1 + 0xb4) = uVar1;
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0xa8) + 0x28))();
  iVar5 = 0;
  if (-1 < iVar2 + -1) {
    do {
      lVar3 = (**(code **)(**(longlong **)(param_1 + 0xa8) + 0x30))
                        (*(longlong **)(param_1 + 0xa8),iVar5);
      uVar4 = (**(code **)(**(longlong **)(param_1 + 0xa8) + 0x30))
                        (*(longlong **)(param_1 + 0xa8),iVar5);
      (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x80))
                (*(longlong **)(param_1 + 0xc0),*(undefined8 *)(lVar3 + 0x40),uVar4);
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00414b50(param_1 + 0xa0,*(undefined8 *)(param_1 + 200));
  return;
}


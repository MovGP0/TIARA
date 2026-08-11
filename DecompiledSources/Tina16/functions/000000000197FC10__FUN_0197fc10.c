/* Ghidra address: 0197fc10 */
/* Ghidra symbol: FUN_0197fc10 */


void FUN_0197fc10(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))();
  iVar4 = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))(*(longlong **)(param_1 + 8),iVar4);
      iVar2 = FUN_00416db0(*(undefined8 *)(lVar3 + 0x40),param_2);
      if ((iVar2 == 0) || (param_2 == 0)) {
        lVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))
                          (*(longlong **)(param_1 + 8),iVar4);
        *(undefined1 *)(lVar3 + 0x48) = 1;
      }
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}


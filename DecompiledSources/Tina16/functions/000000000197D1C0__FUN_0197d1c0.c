/* Ghidra address: 0197d1c0 */
/* Ghidra symbol: FUN_0197d1c0 */


void FUN_0197d1c0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))();
  iVar4 = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))
                        (*(longlong **)(param_1 + 0x10),iVar4);
      *(undefined8 *)(lVar2 + 8) = 0;
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))
                        (*(longlong **)(param_1 + 0x10),iVar4);
      FUN_00410f20(uVar3);
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  if ((*(longlong *)(param_1 + 0x30) != 0) && (*(char *)(param_1 + 0x48) != '\0')) {
    FUN_00452320(param_1 + 0x30);
  }
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x90))(*(longlong **)(param_1 + 0x10));
  FUN_00414480(param_1 + 0x38);
  return;
}


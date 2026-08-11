/* Ghidra address: 01cec4a0 */
/* Ghidra symbol: FUN_01cec4a0 */


void FUN_01cec4a0(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))(*(longlong **)(param_1 + 0x10));
  iVar4 = 1;
  if (0 < iVar2) {
    do {
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))
                        (*(longlong **)(param_1 + 0x10),iVar4 + -1);
      cVar1 = FUN_004113d0(uVar3,&PTR_FUN_01ac9770);
      if (cVar1 != '\0') {
        uVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))
                          (*(longlong **)(param_1 + 0x10),iVar4 + -1);
        FUN_01acea90(uVar3);
      }
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}


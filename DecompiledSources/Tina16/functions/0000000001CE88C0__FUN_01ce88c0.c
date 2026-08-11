/* Ghidra address: 01ce88c0 */
/* Ghidra symbol: FUN_01ce88c0 */


void FUN_01ce88c0(longlong param_1,undefined1 param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x28))(*(longlong **)(param_1 + 0x70));
  iVar4 = 1;
  if (0 < iVar1) {
    do {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x30))
                        (*(longlong **)(param_1 + 0x70),iVar4 + -1);
      lVar3 = FUN_004113f0(uVar2,&DAT_01ccbf00);
      *(undefined1 *)(lVar3 + 0x11) = param_2;
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x28))(*(longlong **)(param_1 + 0x78));
  iVar4 = 1;
  if (0 < iVar1) {
    do {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))
                        (*(longlong **)(param_1 + 0x78),iVar4 + -1);
      lVar3 = FUN_004113f0(uVar2,&DAT_01ccbf00);
      *(undefined1 *)(lVar3 + 0x11) = param_2;
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x28))(*(longlong **)(param_1 + 0x88));
  iVar4 = 1;
  if (0 < iVar1) {
    do {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x30))
                        (*(longlong **)(param_1 + 0x88),iVar4 + -1);
      lVar3 = FUN_004113f0(uVar2,&PTR_FUN_01cd9128);
      *(undefined1 *)(lVar3 + 0x11) = param_2;
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}


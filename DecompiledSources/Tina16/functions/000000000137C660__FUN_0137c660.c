/* Ghidra address: 0137c660 */
/* Ghidra symbol: FUN_0137c660 */


void FUN_0137c660(longlong param_1,undefined1 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if (-1 < iVar1) {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))(*(longlong **)(param_1 + 8));
    if (iVar1 <= iVar2 + -1) {
      uVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))
                        (*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x1c));
      lVar4 = FUN_004113f0(uVar3,&PTR_FUN_011051a8);
      *(undefined1 *)(lVar4 + 0x38) = param_2;
    }
  }
  return;
}


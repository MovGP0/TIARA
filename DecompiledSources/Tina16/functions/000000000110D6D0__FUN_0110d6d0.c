/* Ghidra address: 0110d6d0 */
/* Ghidra symbol: FUN_0110d6d0 */


void FUN_0110d6d0(longlong param_1,undefined1 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))(*(longlong **)(param_1 + 8));
  if ((0 < iVar1) && (-1 < *(int *)(param_1 + 0x1c))) {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))(*(longlong **)(param_1 + 8));
    if (*(int *)(param_1 + 0x1c) <= iVar1 + -1) {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))
                        (*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x1c));
      lVar3 = FUN_004113f0(uVar2,&PTR_FUN_01105d80);
      FUN_00e190f0(lVar3 + 0x110);
      *param_2 = *(undefined1 *)(lVar3 + 0x110);
    }
  }
  return;
}


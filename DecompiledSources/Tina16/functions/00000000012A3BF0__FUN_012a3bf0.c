/* Ghidra address: 012a3bf0 */
/* Ghidra symbol: FUN_012a3bf0 */


void FUN_012a3bf0(longlong param_1,undefined4 param_2)

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
      lVar4 = FUN_004113f0(uVar3,&PTR_FUN_01105a20);
      *(char *)(lVar4 + 0x38) = (char)param_2;
    }
  }
  FUN_00e17c20(param_2);
  return;
}


/* Ghidra address: 012a5340 */
/* Ghidra symbol: FUN_012a5340 */


void FUN_012a5340(longlong param_1,byte param_2,undefined1 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))(*(longlong **)(param_1 + 8));
  if ((int)(uint)param_2 <= iVar1 + -1) {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))(*(longlong **)(param_1 + 8),param_2);
    lVar3 = FUN_004113f0(uVar2,&PTR_FUN_01105a20);
    if (*(char *)(lVar3 + 0x148) == '\0') {
      *param_3 = 0;
    }
    else {
      *(undefined1 *)(lVar3 + 0x11) = *param_3;
    }
  }
  return;
}


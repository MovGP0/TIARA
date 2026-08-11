/* Ghidra address: 0110c620 */
/* Ghidra symbol: FUN_0110c620 */


void FUN_0110c620(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))(*(longlong **)(param_1 + 8));
  if (0 < iVar1) {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))
                      (*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x1c));
    lVar3 = FUN_004113f0(uVar2,&PTR_FUN_01105d80);
    *(undefined1 *)(lVar3 + 0x148) = 0;
    FUN_00e183f0();
  }
  return;
}


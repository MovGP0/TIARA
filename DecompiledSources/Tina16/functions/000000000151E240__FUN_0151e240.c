/* Ghidra address: 0151e240 */
/* Ghidra symbol: FUN_0151e240 */


void FUN_0151e240(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0xec8) + 0x90))(*(longlong **)(param_1 + 0xec8));
  if (iVar3 == 1) {
    uVar1 = *(undefined8 *)(param_1 + 0xec8);
    cVar2 = FUN_004113d0(uVar1,&PTR_FUN_01514820);
    if (cVar2 != '\0') {
      lVar4 = FUN_004113f0(uVar1,&PTR_FUN_01514820);
      *(undefined1 *)(lVar4 + 0xf1) = 1;
    }
  }
  return;
}


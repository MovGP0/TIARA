/* Ghidra address: 00706ba0 */
/* Ghidra symbol: FUN_00706ba0 */


void FUN_00706ba0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x150))(param_1);
  if (cVar1 != '\0') {
    uVar2 = FUN_004113f0(param_1[5],&PTR_FUN_006c6e18);
    FUN_006f6b30(uVar2,param_2);
  }
  return;
}


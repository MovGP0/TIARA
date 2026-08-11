/* Ghidra address: 01be7ac0 */
/* Ghidra symbol: FUN_01be7ac0 */


void FUN_01be7ac0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  cVar1 = FUN_004113d0(param_3,&PTR_FUN_01bf1690);
  if (cVar1 != '\0') {
    lVar2 = FUN_01bfaa40(param_3);
    if (lVar2 == param_1[0xd1]) {
      uVar3 = (**(code **)(*param_1 + 0x458))(param_1);
      *param_4 = uVar3;
    }
    else {
      uVar3 = FUN_004113f0(param_3,&PTR_FUN_01bf1690);
      uVar3 = (**(code **)(*param_1 + 0x2e0))(param_1,uVar3);
      *param_4 = uVar3;
    }
  }
  return;
}


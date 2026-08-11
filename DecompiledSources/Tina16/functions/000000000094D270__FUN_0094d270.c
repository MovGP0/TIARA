/* Ghidra address: 0094d270 */
/* Ghidra symbol: FUN_0094d270 */


void FUN_0094d270(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  lVar1 = (**(code **)(*param_1 + 0x188))(param_1);
  if (lVar1 != 0) {
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x188))(param_1);
    uVar3 = FUN_004113f0(param_2,&PTR_FUN_00907cc8);
    (**(code **)(*plVar2 + 0x2d8))(plVar2,uVar3);
  }
  return;
}


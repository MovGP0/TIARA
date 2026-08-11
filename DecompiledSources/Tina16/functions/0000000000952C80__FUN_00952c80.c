/* Ghidra address: 00952c80 */
/* Ghidra symbol: FUN_00952c80 */


undefined8 FUN_00952c80(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  lVar1 = (**(code **)(*param_2 + 0x2d0))(param_2);
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x100))(param_1);
  uVar3 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2);
  uVar3 = FUN_004113f0(uVar3,&PTR_FUN_00909bd0);
  if (lVar1 == 0) {
    (**(code **)(*param_1 + 0x2b8))(param_1,param_1,0,param_2);
  }
  return uVar3;
}


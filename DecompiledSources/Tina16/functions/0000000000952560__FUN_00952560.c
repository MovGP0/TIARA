/* Ghidra address: 00952560 */
/* Ghidra symbol: FUN_00952560 */


undefined8 FUN_00952560(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x100))(param_1);
  uVar2 = (**(code **)(*plVar1 + 0x28))(plVar1,param_2);
  uVar2 = FUN_004113f0(uVar2,&PTR_FUN_00909bd0);
  (**(code **)(*param_1 + 0x2b8))(param_1,param_1,2,param_2);
  return uVar2;
}


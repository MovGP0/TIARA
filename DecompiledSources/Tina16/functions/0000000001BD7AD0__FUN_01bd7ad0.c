/* Ghidra address: 01bd7ad0 */
/* Ghidra symbol: FUN_01bd7ad0 */


void FUN_01bd7ad0(longlong *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x360))(param_1);
  plVar2 = (longlong *)FUN_004113f0(uVar1,&PTR_FUN_01bdbe88);
  (**(code **)(*plVar2 + 0x18))(plVar2,param_1);
  return;
}


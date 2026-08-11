/* Ghidra address: 01bd4d30 */
/* Ghidra symbol: FUN_01bd4d30 */


void FUN_01bd4d30(undefined8 param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)FUN_01c07120(param_1);
  uVar2 = (**(code **)(*plVar1 + 0x360))(plVar1);
  plVar1 = (longlong *)FUN_004113f0(uVar2,&PTR_FUN_01bdbe88);
  uVar2 = FUN_01c07120(param_1);
  (**(code **)(*plVar1 + 0x18))(plVar1,uVar2);
  return;
}


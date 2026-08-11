/* Ghidra address: 00956aa0 */
/* Ghidra symbol: FUN_00956aa0 */


longlong * FUN_00956aa0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  plVar2 = (longlong *)FUN_00954fd0(param_1);
  cVar1 = (**(code **)(*plVar2 + 0x168))(plVar2);
  if (cVar1 == '\x05') {
    uVar3 = FUN_004113f0(plVar2,&PTR_FUN_0090d088);
    (**(code **)(**(longlong **)(param_1 + 0x130) + 0x18))(*(longlong **)(param_1 + 0x130),uVar3);
  }
  return plVar2;
}


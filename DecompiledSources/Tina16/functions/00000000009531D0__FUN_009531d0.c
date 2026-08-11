/* Ghidra address: 009531d0 */
/* Ghidra symbol: FUN_009531d0 */


undefined8 FUN_009531d0(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  uVar2 = (**(code **)(*param_1 + 0x188))(param_1);
  cVar1 = FUN_004113d0(uVar2,&PTR_FUN_0090eed0);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*param_1 + 0x188))(param_1);
    plVar3 = (longlong *)FUN_004113f0(uVar2,&PTR_FUN_0090eed0);
    uVar2 = (**(code **)(*plVar3 + 0x338))(plVar3,param_1);
  }
  return uVar2;
}


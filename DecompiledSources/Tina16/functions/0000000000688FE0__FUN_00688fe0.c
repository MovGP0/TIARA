/* Ghidra address: 00688fe0 */
/* Ghidra symbol: FUN_00688fe0 */


void FUN_00688fe0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  
  plVar1 = *(longlong **)(param_2 + 0x10);
  cVar2 = FUN_004113d0(plVar1,&PTR_FUN_006723b8);
  if (cVar2 == '\0') {
    *(char *)(param_1 + 0x93) = (char)param_1[0x95];
  }
  else {
    *(bool *)(param_1 + 0x93) = plVar1 == param_1;
  }
  (**(code **)(*param_1 + 0x270))(param_1,(char)param_1[0x93]);
  FUN_0065a1d0(param_1,param_2);
  return;
}


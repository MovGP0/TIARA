/* Ghidra address: 01c0bf20 */
/* Ghidra symbol: FUN_01c0bf20 */


void FUN_01c0bf20(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x5b0);
  cVar2 = FUN_004113d0(plVar1,&PTR_FUN_01bd0060);
  if (cVar2 != '\0') {
    (**(code **)(*plVar1 + 0x180))(plVar1);
  }
  FUN_01be6c90(param_1);
  return;
}


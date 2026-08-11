/* Ghidra address: 006a4510 */
/* Ghidra symbol: FUN_006a4510 */


void FUN_006a4510(longlong param_1,char param_2)

{
  longlong *plVar1;
  char cVar2;
  
  if (param_2 == '\0') {
    plVar1 = *(longlong **)(param_1 + 0x28);
    cVar2 = FUN_004113d0(plVar1,&PTR_FUN_00645ff0);
    if (cVar2 != '\0') {
      (**(code **)(*plVar1 + 0x278))(plVar1);
    }
  }
  else {
    if (((param_2 != '\0') &&
        (cVar2 = FUN_004113d0(*(undefined8 *)(param_1 + 0x18),&PTR_FUN_006a1278), cVar2 != '\0')) &&
       (*(char *)(*(longlong *)(param_1 + 0x18) + 0x138) == '\0')) {
      return;
    }
    cVar2 = FUN_004113d0(*(undefined8 *)(param_1 + 0x18),&PTR_FUN_006a1278);
    if (cVar2 != '\0') {
      FUN_006a45a0(param_1);
    }
  }
  return;
}


/* Ghidra address: 007424b0 */
/* Ghidra symbol: FUN_007424b0 */


void FUN_007424b0(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  
  (**(code **)(*param_1 + -0x38))(param_1);
  if ((*(char *)((longlong)param_1 + 0x343) != '\0') &&
     (plVar1 = *(longlong **)(param_1[99] + 0x18), plVar1 != (longlong *)0x0)) {
    cVar2 = FUN_004113d0(plVar1,&PTR_FUN_005f86c8);
    if (cVar2 == '\0') {
      cVar2 = FUN_004113d0(plVar1,&PTR_FUN_005fa0c8);
      if (cVar2 == '\0') {
        cVar2 = (**(code **)(*plVar1 + 0x58))(plVar1);
        if (cVar2 != '\0') {
          (**(code **)(*plVar1 + 0x80))(plVar1,0);
          (**(code **)(*plVar1 + 0x80))(plVar1,1);
        }
      }
    }
  }
  return;
}


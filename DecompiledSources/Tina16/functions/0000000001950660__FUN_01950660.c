/* Ghidra address: 01950660 */
/* Ghidra symbol: FUN_01950660 */


longlong FUN_01950660(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  
  cVar2 = FUN_004113d0(param_1,&PTR_FUN_0193aeb8);
  if ((cVar2 == '\0') &&
     (plVar1 = *(longlong **)(param_1 + 0xf0), param_1 = 0, plVar1 != (longlong *)0x0)) {
    param_1 = (**(code **)(*plVar1 + 0x118))(plVar1);
  }
  return param_1;
}


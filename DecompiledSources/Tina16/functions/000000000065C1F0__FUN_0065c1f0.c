/* Ghidra address: 0065c1f0 */
/* Ghidra symbol: FUN_0065c1f0 */


void FUN_0065c1f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_0065c060(param_1,param_2,param_3,param_4,(char)param_4 == '\0');
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 600))(plVar1);
  }
  return;
}


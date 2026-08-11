/* Ghidra address: 0070f770 */
/* Ghidra symbol: FUN_0070f770 */


void FUN_0070f770(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_007810f0();
  cVar1 = (**(code **)(*plVar2 + 0x98))(plVar2);
  if (cVar1 != '\0') {
    FUN_00693070(param_1,param_2);
  }
  return;
}


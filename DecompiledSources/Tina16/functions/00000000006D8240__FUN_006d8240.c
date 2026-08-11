/* Ghidra address: 006d8240 */
/* Ghidra symbol: FUN_006d8240 */


void FUN_006d8240(undefined8 param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_00777cd0();
  cVar1 = (**(code **)(*plVar2 + 0x98))(plVar2);
  if ((cVar1 != '\0') && (cVar1 = FUN_0065eb60(param_1), cVar1 != '\0')) {
    *(undefined8 *)(param_2 + 0x18) = 1;
    return;
  }
  FUN_00658480(param_1,param_2);
  return;
}


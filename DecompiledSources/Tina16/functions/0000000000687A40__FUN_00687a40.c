/* Ghidra address: 00687a40 */
/* Ghidra symbol: FUN_00687a40 */


void FUN_00687a40(undefined8 param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_00777cd0();
  cVar1 = (**(code **)(*plVar2 + 0x98))(plVar2);
  if (cVar1 == '\0') {
    FUN_00658480(param_1,param_2);
  }
  else {
    *(undefined8 *)(param_2 + 0x18) = 1;
  }
  return;
}


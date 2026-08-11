/* Ghidra address: 00689050 */
/* Ghidra symbol: FUN_00689050 */


void FUN_00689050(longlong *param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_00777cd0();
  cVar1 = (**(code **)(*plVar2 + 0x98))(plVar2);
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + -0x38))(param_1,param_2);
  }
  else {
    *(undefined8 *)(param_2 + 0x18) = 1;
  }
  return;
}


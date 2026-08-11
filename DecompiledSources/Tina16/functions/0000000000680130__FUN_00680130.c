/* Ghidra address: 00680130 */
/* Ghidra symbol: FUN_00680130 */


void FUN_00680130(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_00777cd0();
  cVar1 = (**(code **)(*plVar2 + 0x98))(plVar2);
  if (cVar1 == '\0') {
    param_1[0x66] = (longlong)param_1;
    param_1[0x65] = (longlong)FUN_0067ee40;
  }
  else {
    cVar1 = (**(code **)(*param_1 + 0xf0))(param_1);
    if (((cVar1 != '\0') && (cVar1 = FUN_00781870(), cVar1 != '\0')) &&
       ((*(byte *)(param_1 + 0x59) & 1) == 0)) {
      param_1[0x66] = (longlong)param_1;
      param_1[0x65] = (longlong)FUN_0067ee40;
      return;
    }
    param_1[0x66] = (longlong)param_1;
    param_1[0x65] = (longlong)FUN_0067ed40;
  }
  return;
}


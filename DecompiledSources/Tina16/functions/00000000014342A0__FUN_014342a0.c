/* Ghidra address: 014342a0 */
/* Ghidra symbol: FUN_014342a0 */


undefined8 FUN_014342a0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(*(longlong *)(param_1 + 0x10) + 0x40);
  if (cVar1 == '\x01') {
    FUN_00414ad0(param_2,L"POLY");
  }
  else if (cVar1 == '\x02') {
    FUN_00414ad0(param_2,L"VALUE");
  }
  else if (cVar1 == '\x03') {
    FUN_00414ad0(param_2,L"TABLE");
  }
  else {
    FUN_00414ad0(param_2,L"LINEAR");
  }
  return param_2;
}


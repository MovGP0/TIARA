/* Ghidra address: 015f9c70 */
/* Ghidra symbol: FUN_015f9c70 */


undefined8 FUN_015f9c70(undefined8 param_1)

{
  char cVar1;
  
  cVar1 = FUN_00e042b0();
  if (cVar1 == '\0') {
    FUN_00414ad0(param_1,L"Vhdl2.exe");
  }
  else {
    FUN_00414ad0(param_1,L"Vhdl.exe");
  }
  return param_1;
}


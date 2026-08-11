/* Ghidra address: 0104f160 */
/* Ghidra symbol: FUN_0104f160 */


void FUN_0104f160(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_01053000(param_1);
  if (cVar1 != '\0') {
    FUN_00414ad0(param_1 + 0x8d0,L"noname");
    FUN_00414480(param_1 + 0x8d8);
    FUN_00f629d0(*(undefined8 *)(param_1 + 0x980));
    FUN_010508e0(param_1);
    FUN_01051360(param_1);
  }
  return;
}


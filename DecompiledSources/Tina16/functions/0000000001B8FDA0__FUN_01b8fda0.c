/* Ghidra address: 01b8fda0 */
/* Ghidra symbol: FUN_01b8fda0 */


void FUN_01b8fda0(longlong param_1)

{
  char cVar1;
  undefined8 local_10;
  
  local_10 = 0;
  *(undefined1 *)(param_1 + 0x710) = 0;
  FUN_00414480(param_1 + 0x718);
  cVar1 = FUN_01b256f0(L"LT_ImportFileName",&LAB_01b8fe64,&local_10);
  if (cVar1 != '\0') {
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6e8),local_10);
  }
  FUN_00414480(&local_10);
  return;
}


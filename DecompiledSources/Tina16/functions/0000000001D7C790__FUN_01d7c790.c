/* Ghidra address: 01d7c790 */
/* Ghidra symbol: FUN_01d7c790 */


void FUN_01d7c790(longlong param_1)

{
  char cVar1;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6b0),&local_10);
  cVar1 = FUN_01d7c210(L"Select or create a folder",0,&local_10);
  if (cVar1 != '\0') {
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6b0),local_10);
  }
  FUN_00414480(&local_10);
  return;
}


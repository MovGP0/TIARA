/* Ghidra address: 00458270 */
/* Ghidra symbol: FUN_00458270 */


undefined8 FUN_00458270(undefined8 param_1)

{
  char cVar1;
  undefined8 local_48;
  undefined1 local_40;
  wchar_t *local_38;
  undefined1 local_30;
  undefined8 local_20 [2];
  
  cVar1 = FUN_00448710(param_1,local_20,&DAT_0200c450);
  if (cVar1 == '\0') {
    local_40 = 0x11;
    local_38 = L"Double";
    local_30 = 0x11;
    local_48 = param_1;
    FUN_0043dbd0(PTR_DAT_020010a0,&local_48,1);
  }
  return local_20[0];
}


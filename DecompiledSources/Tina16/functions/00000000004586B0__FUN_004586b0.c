/* Ghidra address: 004586b0 */
/* Ghidra symbol: FUN_004586b0 */


undefined4 FUN_004586b0(undefined8 param_1)

{
  undefined8 local_48;
  undefined1 local_40;
  wchar_t *local_38;
  undefined1 local_30;
  int local_20;
  undefined4 local_1c;
  
  local_1c = FUN_0040e860(param_1,&local_20);
  if (local_20 != 0) {
    local_40 = 0x11;
    local_38 = L"Integer";
    local_30 = 0x11;
    local_48 = param_1;
    FUN_0043dbd0(PTR_PTR_02001c48,&local_48,1);
  }
  return local_1c;
}


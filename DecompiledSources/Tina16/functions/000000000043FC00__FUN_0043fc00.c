/* Ghidra address: 0043fc00 */
/* Ghidra symbol: FUN_0043fc00 */


undefined4 FUN_0043fc00(undefined8 param_1)

{
  undefined4 uVar1;
  undefined8 local_38;
  undefined1 local_30;
  int local_1c;
  
  uVar1 = FUN_0040e860(param_1,&local_1c);
  if (local_1c != 0) {
    local_30 = 0x11;
    local_38 = param_1;
    FUN_0043dbd0(PTR_PTR_02002af0,&local_38,0);
  }
  return uVar1;
}


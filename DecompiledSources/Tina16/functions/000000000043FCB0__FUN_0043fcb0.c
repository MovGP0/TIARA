/* Ghidra address: 0043fcb0 */
/* Ghidra symbol: FUN_0043fcb0 */


undefined8 FUN_0043fcb0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_38;
  undefined1 local_30;
  int local_1c;
  
  uVar1 = FUN_00418870(param_1,&local_1c);
  if (local_1c != 0) {
    local_30 = 0x11;
    local_38 = param_1;
    FUN_0043dbd0(PTR_PTR_02002af0,&local_38,0);
  }
  return uVar1;
}


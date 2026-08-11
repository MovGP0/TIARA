/* Ghidra address: 0043fe80 */
/* Ghidra symbol: FUN_0043fe80 */


undefined1 FUN_0043fe80(undefined8 param_1)

{
  char cVar1;
  undefined8 local_38;
  undefined1 local_30;
  undefined1 local_19 [9];
  
  cVar1 = FUN_0043ff60(param_1,local_19);
  if (cVar1 == '\0') {
    local_30 = 0x11;
    local_38 = param_1;
    FUN_0043dbd0(PTR_PTR_02002500,&local_38,0);
  }
  return local_19[0];
}


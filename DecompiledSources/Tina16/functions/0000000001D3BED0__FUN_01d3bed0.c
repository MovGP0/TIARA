/* Ghidra address: 01d3bed0 */
/* Ghidra symbol: FUN_01d3bed0 */


undefined1 FUN_01d3bed0(void)

{
  undefined1 uVar1;
  undefined8 local_10;
  
  local_10 = 0;
  if (((*PTR_DAT_020052b8 == '\0') &&
      (*(char *)(*(longlong *)(*(longlong *)PTR_DAT_02004e40 + 0xb78) + 0x328) == '\0')) &&
     (*PTR_DAT_020023b0 == '\0')) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  FUN_00414480(&local_10);
  return uVar1;
}


/* Ghidra address: 011a4ab0 */
/* Ghidra symbol: FUN_011a4ab0 */


void FUN_011a4ab0(longlong param_1)

{
  undefined8 local_10;
  
  local_10 = 0;
  if (*(char *)(param_1 + 0x42039) == '\0') {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x818),&local_10);
    FUN_00414ad0(*(longlong *)PTR_DAT_02003af0 + 0x7a0,local_10);
    FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02001d60 + 0x6b8),0);
    FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02001d60 + 0x6c0),0);
    FUN_00414480(PTR_DAT_020011d8);
    FUN_00414480(PTR_DAT_02005bf8);
    FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02001d60 + 0x6c8),0);
    FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02001d60 + 0x6d0),0);
    *(undefined1 *)(param_1 + 0x4203a) = 1;
  }
  *(undefined1 *)(param_1 + 0x42039) = 0;
  FUN_00414480(&local_10);
  return;
}


/* Ghidra address: 00f10240 */
/* Ghidra symbol: FUN_00f10240 */


void FUN_00f10240(void)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x798) + 0xf0);
  if (lVar1 != 0) {
    FUN_01abfbd0(lVar1);
  }
  lVar1 = *(longlong *)(*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x798) + 0xf8);
  if (lVar1 != 0) {
    FUN_01abfbd0(lVar1);
  }
  FUN_01ae4310(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798));
  return;
}


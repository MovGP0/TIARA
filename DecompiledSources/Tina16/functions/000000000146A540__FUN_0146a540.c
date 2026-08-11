/* Ghidra address: 0146a540 */
/* Ghidra symbol: FUN_0146a540 */


void FUN_0146a540(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x8e0);
  FUN_01469b20(param_1,L"Background",*(undefined1 *)(lVar1 + 0x99));
  FUN_01469b20(param_1,L"BgndColor",*(undefined4 *)(lVar1 + 0x9c));
  FUN_01469b20(param_1,L"Border",*(undefined1 *)(lVar1 + 0xa0));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x8e0));
  return;
}


/* Ghidra address: 0152fd80 */
/* Ghidra symbol: FUN_0152fd80 */


void FUN_0152fd80(longlong param_1)

{
  longlong lVar1;
  
  FUN_015fc210(PTR_DAT_02004010,*(undefined1 *)(param_1 + 0x1bfb));
  *PTR_DAT_02003038 = *(undefined1 *)(param_1 + 0x1bfc);
  *PTR_DAT_02004f10 = *(undefined1 *)(param_1 + 0x1bfa);
  lVar1 = *(longlong *)PTR_DAT_02004e40;
  *(undefined8 *)(lVar1 + 0x27f8) = *(undefined8 *)(param_1 + 0x1c18);
  *(undefined8 *)(lVar1 + 0x2800) = *(undefined8 *)(param_1 + 0x1c20);
  return;
}


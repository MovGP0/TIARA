/* Ghidra address: 014b49a0 */
/* Ghidra symbol: FUN_014b49a0 */


void FUN_014b49a0(longlong param_1)

{
  longlong lVar1;
  
  *PTR_DAT_02003038 = *(undefined1 *)(param_1 + 0x898);
  *PTR_DAT_02004f10 = *(undefined1 *)(param_1 + 0x897);
  lVar1 = *(longlong *)PTR_DAT_02004e40;
  *(undefined8 *)(lVar1 + 0x27f8) = *(undefined8 *)(param_1 + 0x8b8);
  *(undefined8 *)(lVar1 + 0x2800) = *(undefined8 *)(param_1 + 0x8c0);
  return;
}


/* Ghidra address: 010e4010 */
/* Ghidra symbol: FUN_010e4010 */


void FUN_010e4010(longlong param_1,longlong param_2)

{
  if (*(longlong *)PTR_DAT_02004e40 != 0) {
    FUN_0064e770(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0xa10));
  }
  if (param_2 == 0) {
    FUN_0082a6c0(*(undefined8 *)(param_1 + 0x7c8),0);
  }
  return;
}


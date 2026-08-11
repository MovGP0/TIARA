/* Ghidra address: 01d47440 */
/* Ghidra symbol: FUN_01d47440 */


void FUN_01d47440(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_01d39f20();
  if (iVar1 != 0) {
    *(undefined1 *)(*(longlong *)PTR_DAT_02002880 + -0x10 + (longlong)iVar1 * 0x10) = 1;
    *(undefined8 *)(*(longlong *)PTR_DAT_02002880 + -8 + (longlong)iVar1 * 0x10) = param_2;
  }
  return;
}


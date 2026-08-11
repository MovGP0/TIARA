/* Ghidra address: 00f02f30 */
/* Ghidra symbol: FUN_00f02f30 */


undefined1 FUN_00f02f30(longlong param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_00f03100(param_1);
  if (lVar2 == 0) {
    uVar1 = *(undefined1 *)(param_1 + 0x30);
  }
  else {
    uVar1 = *(undefined1 *)(lVar2 + 0x348);
  }
  return uVar1;
}


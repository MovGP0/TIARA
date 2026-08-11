/* Ghidra address: 00f02f00 */
/* Ghidra symbol: FUN_00f02f00 */


undefined8 FUN_00f02f00(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_00f03100(param_1);
  if (lVar1 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0xb8);
  }
  return uVar2;
}


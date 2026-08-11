/* Ghidra address: 00f03fc0 */
/* Ghidra symbol: FUN_00f03fc0 */


undefined4 FUN_00f03fc0(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_00f03100(*(undefined8 *)(param_1 + 8));
  if (lVar2 == 0) {
    uVar1 = 0xff00000f;
  }
  else {
    uVar1 = *(undefined4 *)(lVar2 + 0x4c4);
  }
  return uVar1;
}


/* Ghidra address: 00f02fb0 */
/* Ghidra symbol: FUN_00f02fb0 */


undefined4 FUN_00f02fb0(undefined8 param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_00f03100(param_1);
  if (lVar2 == 0) {
    uVar1 = 0x40;
  }
  else {
    lVar2 = FUN_00f03100(param_1);
    uVar1 = *(undefined4 *)(lVar2 + 0x4b0);
  }
  return uVar1;
}


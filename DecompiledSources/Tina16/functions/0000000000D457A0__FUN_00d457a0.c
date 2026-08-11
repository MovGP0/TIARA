/* Ghidra address: 00d457a0 */
/* Ghidra symbol: FUN_00d457a0 */


uint FUN_00d457a0(longlong param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  uint uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  FUN_00787d50(uVar1);
  uVar3 = 0x40100;
  uVar2 = FUN_00787d50(uVar1);
  if ((uVar2 & 2) == 2) {
    uVar3 = 0x41100;
  }
  uVar2 = FUN_00787d50(uVar1);
  if ((uVar2 & 1) == 1) {
    uVar3 = uVar3 | 4;
  }
  if ((uVar3 & 0x1000) != 0) {
    uVar3 = uVar3 & 0xfffffefb;
  }
  uVar2 = FUN_00787d50(uVar1);
  if ((uVar2 & 0x4000) == 0x4000) {
    uVar3 = uVar3 | 0x10;
  }
  uVar2 = FUN_00787d50(uVar1);
  if ((uVar2 & 0x8000) == 0x8000) {
    uVar3 = uVar3 | 0x20;
  }
  uVar2 = FUN_00787d50(uVar1);
  if ((uVar2 & 0xc000) == 0xc000) {
    uVar3 = uVar3 | 0x400000;
  }
  uVar2 = FUN_00787d50(uVar1);
  if ((uVar2 & 0x80) == 0x80) {
    uVar3 = uVar3 | 0x800;
  }
  uVar2 = FUN_00787d50(uVar1);
  if ((uVar2 & 0x4000) != 0x4000) {
    uVar2 = FUN_00787d50(uVar1);
    if ((uVar2 & 0x8000) != 0x8000) {
      uVar2 = FUN_00787d50(uVar1);
      if ((uVar2 & 0xc000) != 0xc000) {
        uVar3 = uVar3 | 0x20000;
      }
    }
  }
  return uVar3;
}


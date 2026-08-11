/* Ghidra address: 005d1460 */
/* Ghidra symbol: FUN_005d1460 */


uint FUN_005d1460(ushort param_1)

{
  uint uVar1;
  bool bVar2;
  
  bVar2 = (param_1 & 1) != 0;
  uVar1 = (uint)bVar2;
  if ((param_1 & 2) != 0) {
    uVar1 = bVar2 | 2;
  }
  if ((param_1 & 4) != 0) {
    uVar1 = uVar1 | 4;
  }
  if ((param_1 & 8) != 0) {
    uVar1 = uVar1 | 0x10;
  }
  if ((param_1 & 0x10) != 0) {
    uVar1 = uVar1 | 0x20;
  }
  if ((param_1 & 0x20) != 0) {
    uVar1 = uVar1 | 0x40;
  }
  if ((param_1 & 0x4000) != 0) {
    uVar1 = uVar1 | 0x40;
  }
  if ((param_1 & 0x40) != 0) {
    uVar1 = uVar1 | 0x80;
  }
  if ((param_1 & 0x80) != 0) {
    uVar1 = uVar1 | 0x100;
  }
  if ((param_1 & 0x100) != 0) {
    uVar1 = uVar1 | 0x200;
  }
  if ((param_1 & 0x200) != 0) {
    uVar1 = uVar1 | 0x400;
  }
  if ((param_1 & 0x400) != 0) {
    uVar1 = uVar1 | 0x800;
  }
  if ((param_1 & 0x800) != 0) {
    uVar1 = uVar1 | 0x1000;
  }
  if ((param_1 & 0x1000) != 0) {
    uVar1 = uVar1 | 0x2000;
  }
  if ((param_1 & 0x2000) != 0) {
    uVar1 = uVar1 | 0x4000;
  }
  return uVar1;
}


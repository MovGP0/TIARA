/* Ghidra address: 00836f40 */
/* Ghidra symbol: FUN_00836f40 */


undefined8 FUN_00836f40(undefined8 param_1,char param_2)

{
  byte bVar1;
  undefined7 uVar2;
  
  if (*(int *)(PTR_DAT_02005bd0 + 4) == 0x11) {
    bVar1 = param_2 + 0x60;
    if (0x3f < bVar1) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0xffffffffffffff;
    }
    if (0x3f >= bVar1 && (1L << (bVar1 & 0x3f) & 0xfffffffffffffffeU) != 0) {
      return CONCAT71(uVar2,1);
    }
  }
  return 0;
}


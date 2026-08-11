/* Ghidra address: 0046cb00 */
/* Ghidra symbol: FUN_0046cb00 */


undefined8 FUN_0046cb00(uint param_1)

{
  char cVar1;
  uint uVar2;
  bool bVar3;
  
  uVar2 = param_1 & 0xbfff;
  if (uVar2 < 0x20) {
    bVar3 = (1 << ((byte)uVar2 & 0x1f) & 0x3fffffU) != 0;
  }
  else {
    bVar3 = false;
  }
  if (((!bVar3) || (PTR_DAT_02004360[(longlong)(int)uVar2 * 0xc + 1] == '\0')) &&
     (cVar1 = FUN_0046c300(param_1), cVar1 == '\0')) {
    return 0;
  }
  return 1;
}


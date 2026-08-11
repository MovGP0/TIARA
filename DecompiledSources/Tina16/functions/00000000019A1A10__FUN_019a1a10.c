/* Ghidra address: 019a1a10 */
/* Ghidra symbol: FUN_019a1a10 */


undefined8 FUN_019a1a10(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  cVar1 = FUN_0198a580(param_2);
  if (cVar1 == '\x04') {
    uVar2 = (**(code **)(*param_2 + 0xf8))(param_2);
    cVar1 = FUN_01d3fd10(param_2,0);
    if ((((cVar1 == '\0') && (cVar1 = FUN_01d05080(param_2), cVar1 == '\0')) &&
        ((uVar2 & 0xffff) != 0x3fe)) &&
       ((((uVar2 & 0xffff) != 0x4b1 && ((uVar2 & 0xffff) != 0x91)) &&
        ((cVar1 = FUN_01d40240(uVar2 & 0xffff), cVar1 == '\0' &&
         (cVar1 = FUN_01d3fee0(param_2,3), cVar1 == '\0')))))) {
      return 0;
    }
    uVar3 = CONCAT71((uint7)(byte)(uVar2 >> 8),1);
  }
  return uVar3;
}


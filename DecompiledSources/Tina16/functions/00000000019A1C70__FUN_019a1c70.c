/* Ghidra address: 019a1c70 */
/* Ghidra symbol: FUN_019a1c70 */


undefined8 FUN_019a1c70(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  uint uVar2;
  
  cVar1 = FUN_0198a580(param_2);
  if (cVar1 != '\x04') {
    return 0;
  }
  uVar2 = (**(code **)(*param_2 + 0xf8))(param_2);
  cVar1 = FUN_01d3ffd0((short)uVar2);
  if (((((cVar1 == '\0') || (cVar1 = FUN_01d05040(param_2), cVar1 != '\0')) ||
       (cVar1 = FUN_01d3f210(param_2), cVar1 != '\0')) ||
      (cVar1 = FUN_01aa12d0(uVar2 & 0xffff), cVar1 == '\0')) && ((uVar2 & 0xffff) < 0x80000000)) {
    return 0;
  }
  return CONCAT71((uint7)(byte)(uVar2 >> 8),1);
}


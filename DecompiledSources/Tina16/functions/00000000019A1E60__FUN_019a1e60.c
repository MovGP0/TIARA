/* Ghidra address: 019a1e60 */
/* Ghidra symbol: FUN_019a1e60 */


undefined8 FUN_019a1e60(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  ushort uVar2;
  
  cVar1 = FUN_0198a580(param_2);
  if (cVar1 != '\x04') {
    return 0;
  }
  uVar2 = (**(code **)(*param_2 + 0xf8))(param_2);
  if ((((uVar2 < 0x3e9) || (cVar1 = FUN_01d3ffb0(uVar2), cVar1 != '\0')) &&
      (cVar1 = FUN_01d3f210(param_2), cVar1 == '\0')) &&
     (cVar1 = FUN_01d05080(param_2), cVar1 == '\0')) {
    return 0;
  }
  return 1;
}


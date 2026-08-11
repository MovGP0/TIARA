/* Ghidra address: 00409f10 */
/* Ghidra symbol: FUN_00409f10 */


uint FUN_00409f10(uint param_1,uint param_2)

{
  uint uVar1;
  
  param_2 = param_2 & 0x3f;
  uVar1 = FUN_0040a140();
  FUN_0040a110(uVar1 & 0x3f & ~param_2 | param_1 & param_2);
  return uVar1 & 0x3f & param_2;
}


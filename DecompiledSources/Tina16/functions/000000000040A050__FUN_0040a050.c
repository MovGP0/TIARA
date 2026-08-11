/* Ghidra address: 0040a050 */
/* Ghidra symbol: FUN_0040a050 */


uint FUN_0040a050(uint param_1,uint param_2)

{
  uint uVar1;
  
  param_2 = param_2 & 0x1f80;
  uVar1 = FUN_0040a140();
  FUN_0040a0f0(uVar1 & ~param_2 | param_1 & param_2);
  return uVar1 & param_2;
}


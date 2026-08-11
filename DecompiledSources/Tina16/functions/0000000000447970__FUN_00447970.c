/* Ghidra address: 00447970 */
/* Ghidra symbol: FUN_00447970 */


bool FUN_00447970(uint param_1)

{
  uint uVar1;
  
  uVar1 = FUN_0040a140();
  FUN_0040a0d0();
  return (param_1 & uVar1 & 0x3f) == 0;
}


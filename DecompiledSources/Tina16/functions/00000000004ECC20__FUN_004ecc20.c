/* Ghidra address: 004ecc20 */
/* Ghidra symbol: FUN_004ecc20 */


uint FUN_004ecc20(longlong param_1)

{
  uint uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x20))(*(longlong **)(param_1 + 0x18));
  return (uVar1 & 0x7fffffff) + 1 & 0x7fffffff;
}


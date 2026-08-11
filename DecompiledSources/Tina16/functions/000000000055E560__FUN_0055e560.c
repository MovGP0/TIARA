/* Ghidra address: 0055e560 */
/* Ghidra symbol: FUN_0055e560 */


uint FUN_0055e560(longlong param_1)

{
  uint uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x20))(*(longlong **)(param_1 + 0x18));
  return (uVar1 & 0x7fffffff) + 1 & 0x7fffffff;
}


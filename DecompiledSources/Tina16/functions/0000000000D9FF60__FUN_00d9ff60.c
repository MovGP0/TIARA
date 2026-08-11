/* Ghidra address: 00d9ff60 */
/* Ghidra symbol: FUN_00d9ff60 */


uint FUN_00d9ff60(longlong param_1)

{
  uint uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x20))(*(longlong **)(param_1 + 0x18));
  return (uVar1 & 0x7fffffff) + 1 & 0x7fffffff;
}


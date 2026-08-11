/* Ghidra address: 00a99e70 */
/* Ghidra symbol: FUN_00a99e70 */


undefined4 FUN_00a99e70(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x100))(param_1);
  return *(undefined4 *)(lVar1 + 0x9c);
}


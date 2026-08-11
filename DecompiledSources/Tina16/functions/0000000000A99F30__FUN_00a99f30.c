/* Ghidra address: 00a99f30 */
/* Ghidra symbol: FUN_00a99f30 */


undefined4 FUN_00a99f30(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x100))(param_1);
  return *(undefined4 *)(lVar1 + 0x98);
}


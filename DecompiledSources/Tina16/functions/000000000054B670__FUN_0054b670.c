/* Ghidra address: 0054b670 */
/* Ghidra symbol: FUN_0054b670 */


undefined4 FUN_0054b670(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x60))(param_1);
  return *(undefined4 *)(lVar1 + 0x20);
}


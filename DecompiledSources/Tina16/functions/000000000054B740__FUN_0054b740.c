/* Ghidra address: 0054b740 */
/* Ghidra symbol: FUN_0054b740 */


bool FUN_0054b740(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x60))(param_1);
  return *(longlong *)(lVar1 + 0x10) != 0;
}


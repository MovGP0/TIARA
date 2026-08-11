/* Ghidra address: 0054b720 */
/* Ghidra symbol: FUN_0054b720 */


bool FUN_0054b720(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x60))(param_1);
  return *(longlong *)(lVar1 + 8) != 0;
}


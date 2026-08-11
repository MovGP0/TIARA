/* Ghidra address: 01644e10 */
/* Ghidra symbol: FUN_01644e10 */


bool FUN_01644e10(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x30))(param_1);
  return *(char *)(lVar1 + 8) == '\0';
}


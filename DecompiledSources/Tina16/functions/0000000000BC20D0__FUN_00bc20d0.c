/* Ghidra address: 00bc20d0 */
/* Ghidra symbol: FUN_00bc20d0 */


bool FUN_00bc20d0(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x1a0))(param_1);
  return cVar1 == '\0';
}


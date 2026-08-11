/* Ghidra address: 00cc2030 */
/* Ghidra symbol: FUN_00cc2030 */


void FUN_00cc2030(longlong *param_1)

{
  char cVar1;
  
  cVar1 = FUN_00cbe610(param_1[0x15]);
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 0x78))(param_1);
  }
  return;
}


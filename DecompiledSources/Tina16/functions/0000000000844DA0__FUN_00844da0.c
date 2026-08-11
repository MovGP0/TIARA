/* Ghidra address: 00844da0 */
/* Ghidra symbol: FUN_00844da0 */


void FUN_00844da0(longlong *param_1)

{
  char cVar1;
  
  cVar1 = FUN_00652a50(param_1);
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 0x180))(param_1);
  }
  return;
}


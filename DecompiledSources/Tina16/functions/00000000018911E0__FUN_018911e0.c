/* Ghidra address: 018911e0 */
/* Ghidra symbol: FUN_018911e0 */


void FUN_018911e0(longlong *param_1)

{
  char cVar1;
  
  FUN_00651660(param_1);
  *(undefined1 *)(param_1 + 0x97) = 1;
  cVar1 = (**(code **)(*param_1 + 0xf0))(param_1);
  if (cVar1 != '\0') {
    FUN_01891930(param_1);
    (**(code **)(*param_1 + 0x180))(param_1);
  }
  return;
}


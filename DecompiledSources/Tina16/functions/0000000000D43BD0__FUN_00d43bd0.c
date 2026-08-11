/* Ghidra address: 00d43bd0 */
/* Ghidra symbol: FUN_00d43bd0 */


void FUN_00d43bd0(longlong *param_1)

{
  char cVar1;
  
  FUN_0078a200(param_1);
  cVar1 = FUN_00d43ae0(param_1);
  if ((cVar1 == '\0') && (*(char *)((longlong)param_1 + 0x79) != '\0')) {
    *(undefined1 *)((longlong)param_1 + 0x79) = 0;
  }
  (**(code **)(*param_1 + 0x60))(param_1);
  return;
}


/* Ghidra address: 0081de50 */
/* Ghidra symbol: FUN_0081de50 */


void FUN_0081de50(longlong *param_1)

{
  char cVar1;
  
  cVar1 = FUN_00818440(param_1);
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x60))(param_1);
    *(undefined1 *)(param_1 + 4) = 1;
  }
  return;
}


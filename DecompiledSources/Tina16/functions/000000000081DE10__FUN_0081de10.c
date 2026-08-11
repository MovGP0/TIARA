/* Ghidra address: 0081de10 */
/* Ghidra symbol: FUN_0081de10 */


void FUN_0081de10(longlong param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_00818440(param_1);
  if (cVar1 != '\0') {
    FUN_00785c20(param_1,param_2);
    *(bool *)(param_1 + 0x70) = *(short *)(param_2 + 8) != 0;
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  return;
}


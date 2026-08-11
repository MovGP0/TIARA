/* Ghidra address: 01c10c10 */
/* Ghidra symbol: FUN_01c10c10 */


void FUN_01c10c10(longlong *param_1)

{
  char cVar1;
  int iVar2;
  
  FUN_01bea050(param_1);
  cVar1 = (**(code **)(*param_1 + 0x238))(param_1);
  if (cVar1 != '\0') {
    iVar2 = (**(code **)(*param_1 + 0x1a0))(param_1,0xf);
    FUN_0064cc50(param_1,(longlong)iVar2 / 2 & 0xffffffff);
  }
  return;
}


/* Ghidra address: 017ccae0 */
/* Ghidra symbol: FUN_017ccae0 */


void FUN_017ccae0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  
  iVar1 = FUN_019954d0();
  if (-1 < iVar1 + 1) {
    iVar1 = iVar1 + 2;
    do {
      (**(code **)(*param_2 + 0x78))(param_2,0);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}


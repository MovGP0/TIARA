/* Ghidra address: 00a415d0 */
/* Ghidra symbol: FUN_00a415d0 */


void FUN_00a415d0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  
  iVar1 = 7;
  do {
    if (*(longlong *)(*param_2 + 0x28 + (longlong)iVar1 * 8) != 0) {
      FUN_00a415d0(param_1,*param_2 + 0x28 + (longlong)iVar1 * 8);
    }
    iVar1 = iVar1 + -1;
  } while (iVar1 != -1);
  FUN_00410f20(*param_2);
  *param_2 = 0;
  return;
}


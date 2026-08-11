/* Ghidra address: 00b135b0 */
/* Ghidra symbol: FUN_00b135b0 */


void FUN_00b135b0(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(longlong *)(param_1 + 0x78) != 0) {
    iVar2 = (int)*(undefined8 *)(*(longlong *)(param_1 + 0x78) + -8);
  }
  iVar1 = 0;
  if (-1 < iVar2 + -1) {
    do {
      FUN_00410f20(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + (longlong)iVar1 * 8));
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00419430(param_1 + 0x78,&DAT_00b0f928);
  return;
}


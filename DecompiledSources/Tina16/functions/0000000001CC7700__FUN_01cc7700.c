/* Ghidra address: 01cc7700 */
/* Ghidra symbol: FUN_01cc7700 */


void FUN_01cc7700(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(longlong *)(param_1 + 0x4468) != 0) {
    iVar2 = *(int *)(param_1 + 0x4470);
    iVar1 = 0;
    if (-1 < iVar2 + -1) {
      do {
        FUN_00419430(*(longlong *)(param_1 + 0x4468) + (longlong)iVar1 * 0x20,&DAT_01cb36e0);
        iVar1 = iVar1 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    FUN_00419430(param_1 + 0x4468,&DAT_01cb4bd8);
  }
  *(undefined4 *)(param_1 + 0x4470) = 0;
  return;
}


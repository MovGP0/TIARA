/* Ghidra address: 004d5d20 */
/* Ghidra symbol: FUN_004d5d20 */


ulonglong FUN_004d5d20(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  
  if (*(longlong *)(param_1 + 0x58) == 0) {
    uVar2 = CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x80) >> 8),
                     *(int *)(*(longlong *)(param_1 + 0x80) + 0x80) != 0);
  }
  else {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x80) + 0x80);
    uVar2 = (ulonglong)
            CONCAT31((int3)((uint)iVar1 >> 8),
                     iVar1 != *(int *)(*(longlong *)(param_1 + 0x58) + 0x80));
  }
  return uVar2;
}


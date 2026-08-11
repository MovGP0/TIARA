/* Ghidra address: 004d5d60 */
/* Ghidra symbol: FUN_004d5d60 */


ulonglong FUN_004d5d60(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  
  if (*(longlong *)(param_1 + 0x58) == 0) {
    uVar2 = CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x80) >> 8),
                     *(int *)(*(longlong *)(param_1 + 0x80) + 0x84) != 0);
  }
  else {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x80) + 0x84);
    uVar2 = (ulonglong)
            CONCAT31((int3)((uint)iVar1 >> 8),
                     iVar1 != *(int *)(*(longlong *)(param_1 + 0x58) + 0x84));
  }
  return uVar2;
}


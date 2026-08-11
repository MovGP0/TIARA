/* Ghidra address: 0111e320 */
/* Ghidra symbol: FUN_0111e320 */


void FUN_0111e320(longlong param_1)

{
  ushort uVar1;
  bool bVar2;
  
  uVar1 = *(ushort *)
           (*(longlong *)(param_1 + 0x120) + (longlong)(*(int *)(param_1 + 0x150) + 1) * 2);
  if (uVar1 < 0x100) {
    bVar2 = ((byte)(&DAT_0111e3a4)[(longlong)(ulonglong)uVar1 >> 3] >> ((ulonglong)uVar1 & 7) & 1)
            != 0;
  }
  else {
    bVar2 = false;
  }
  if (bVar2) {
    uVar1 = *(ushort *)
             (*(longlong *)(param_1 + 0x120) + (longlong)(*(int *)(param_1 + 0x150) + 2) * 2);
    if (uVar1 < 0x100) {
      bVar2 = ((byte)(&DAT_0111e3c4)[(longlong)(ulonglong)uVar1 >> 3] >> ((ulonglong)uVar1 & 7) & 1)
              != 0;
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      *(int *)(param_1 + 0x150) = *(int *)(param_1 + 0x150) + 1;
    }
  }
  FUN_0111e2c0();
  return;
}


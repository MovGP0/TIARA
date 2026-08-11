/* Ghidra address: 00446a50 */
/* Ghidra symbol: FUN_00446a50 */


void FUN_00446a50(longlong param_1)

{
  byte bVar1;
  
  if (*(int *)(param_1 + 0x34) < *(int *)(param_1 + 0x38)) {
    if (*(int *)(*(longlong *)(param_1 + 0x60) + 0x8c) < *(int *)(param_1 + 0x3c)) {
      FUN_004469c0(param_1,CONCAT62((uint6)(ushort)((uint)*(int *)(param_1 + 0x3c) >> 0x10),0x30));
    }
    else {
      *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + -1;
    }
  }
  else {
    bVar1 = *(byte *)(*(longlong *)(param_1 + 0x60) + 0x77 + (longlong)*(int *)(param_1 + 0x38));
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
    FUN_004469c0(param_1,CONCAT62((int6)((ulonglong)*(longlong *)(param_1 + 0x60) >> 0x10),
                                  (ushort)bVar1) & 0xffffffff);
  }
  return;
}


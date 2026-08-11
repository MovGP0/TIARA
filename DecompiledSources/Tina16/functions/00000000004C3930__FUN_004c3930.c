/* Ghidra address: 004c3930 */
/* Ghidra symbol: FUN_004c3930 */


void FUN_004c3930(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = 0;
  for (; 0 < param_3; param_3 = param_3 - lVar1) {
    lVar1 = *(longlong *)(param_1 + 0x18) - *(longlong *)(param_1 + 0x20);
    if (lVar1 == 0) {
      FUN_004c3a60(param_1);
      lVar1 = *(longlong *)(param_1 + 0x18);
    }
    if (param_3 <= lVar1) {
      lVar1 = param_3;
    }
    FUN_00409a70(param_2 + lVar2,*(longlong *)(param_1 + 0x10) + *(longlong *)(param_1 + 0x20),lVar1
                );
    *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + lVar1;
    lVar2 = lVar2 + lVar1;
  }
  return;
}


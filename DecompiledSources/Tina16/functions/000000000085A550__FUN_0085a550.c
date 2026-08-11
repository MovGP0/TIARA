/* Ghidra address: 0085a550 */
/* Ghidra symbol: FUN_0085a550 */


void FUN_0085a550(void)

{
  undefined8 uVar1;
  undefined4 local_11c;
  uint local_118;
  
  local_11c = 0x114;
  thunk_FUN_03ed3ad2(&local_11c);
  if (local_118 < 6) {
    DAT_02012778 = 0;
  }
  else {
    uVar1 = FUN_00427be0(L"comctl32.dll");
    DAT_02012778 = FUN_00427c10(uVar1,L"TaskDialogIndirect");
  }
  return;
}


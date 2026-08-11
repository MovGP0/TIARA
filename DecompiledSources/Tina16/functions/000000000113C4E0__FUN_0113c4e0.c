/* Ghidra address: 0113c4e0 */
/* Ghidra symbol: FUN_0113c4e0 */


void FUN_0113c4e0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0xa00);
  if (*(char *)(lVar1 + 0x328) == '\0') {
    FUN_0064de00(lVar1,L"Cont");
  }
  else {
    FUN_0064de00(lVar1,L"Sing");
  }
  return;
}


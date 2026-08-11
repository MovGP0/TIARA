/* Ghidra address: 0080f640 */
/* Ghidra symbol: FUN_0080f640 */


void FUN_0080f640(void)

{
  longlong lVar1;
  
  lVar1 = FUN_00427be0(L"user32.dll");
  if (lVar1 != 0) {
    DAT_01e13fb0 = FUN_00427c10(lVar1,L"SetLayeredWindowAttributes");
  }
  return;
}


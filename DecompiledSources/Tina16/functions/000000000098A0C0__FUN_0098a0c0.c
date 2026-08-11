/* Ghidra address: 0098a0c0 */
/* Ghidra symbol: FUN_0098a0c0 */


void FUN_0098a0c0(void)

{
  undefined8 uVar1;
  longlong in_R9;
  wchar_t *local_18;
  undefined1 local_10;
  
  if (0 < *(int *)(in_R9 + 0x10)) {
    local_18 = L"false";
    local_10 = 0x11;
    uVar1 = FUN_0044d530(&PTR_FUN_00901df0,1,L"Arguments mismatch error in %s().",&local_18,0);
    FUN_004134c0(uVar1);
  }
  FUN_009902a0(&PTR_FUN_00926d78,1,0);
  return;
}

